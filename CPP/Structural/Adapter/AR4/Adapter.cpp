//
// Created by ray on 9/6/22.
//

#include "Adapter.h"
#include <iostream>

void Adapter::Request() {
    std::cout << "[Adapter] Calling SpecificRequest\n" ;
    //m_Adaptee.SpecificRequest() ;
    SpecificRequest() ;
}