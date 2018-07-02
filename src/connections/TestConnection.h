#include <string>
#include "Connection.h"
class TestConnection: public Connection{
    public:
        virtual void Init();
        virtual void Start() {}
        virtual void Stop(){}
        virtual bool IsAlive(){}
        virtual void SendMessage(std::string message){}
        virtual void BindRecieve(bool listener){}
};