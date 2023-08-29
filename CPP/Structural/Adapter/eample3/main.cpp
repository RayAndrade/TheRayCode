#include <iostream>
#include "Target.h"
#include "Adapter.h"

void Client(Target *pTarget) {
    pTarget->Request() ;
}

int main() {
    Adapter a ;
    Client(&a) ;
}