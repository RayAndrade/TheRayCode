//
// Created by ray on 8/29/23.
//
#include "Adapter.h"
#include <iostream>

void Adapter::Request() {
    std::cout << "[Adapter] Calling SpecificRequest\n" ;
    //m_Adaptee.SpecificRequest() ;
    SpecificRequest() ;
}