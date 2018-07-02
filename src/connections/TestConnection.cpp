#include "TestConnection.h"
#include <iostream>
void TestConnection::Init(){
    m_type = ConnectionType::NONE;
    m_name = "Test Connection";

    std::cout<<"Init Connection: "<<m_name<<std::endl;
}
