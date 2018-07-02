#include <iostream>
#include "connections/TestConnection.h"

int main(){
    std::cout<<"Hello FRC"<<std::endl;
    TestConnection testConnetion;
    testConnetion.Init();
    return 0;
}