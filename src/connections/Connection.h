#include <string>

enum ConnectionType{
    UDP_FAST,
    UDP_RELIBABLE,
    TCP,
    CAN,
    NONE
};

class Connection{

    protected:
        ConnectionType m_type;
        std::string m_name = "Default Connection";
        bool m_alive = false;
        std::string m_lastMessage = "";

    public:
        virtual void Init();
        virtual void Start();
        virtual void Stop();
        virtual bool IsAlive();
        virtual void SendMessage(std::string message);
        virtual void BindRecieve(bool listener);
};