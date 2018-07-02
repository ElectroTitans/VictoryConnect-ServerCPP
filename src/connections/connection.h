#include <string>

enum ConnectionType{
    UDP_FAST,
    UDP_RELIBABLE,
    TCP,
    CAN
};

class Connection{

    private:
        ConnectionType m_type;
        std::string m_name = "Default Connection";
        bool m_alive = false;
        std::string m_lastMessage = "";

    public:
        void Init();
        void Start();
        void Stop();
        bool IsAlive();
        void SendMessage(std::string message);
        void BindRecieve(bool listener);
};