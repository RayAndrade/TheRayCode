#include <iostream>
#include "Interface1.h"
#include "Interface2.h"
#include "Object2.h"
#include "Adapter.h"

void Codebase1(Interface1* obj) {}

void Codebase2(Interface2* obj) {}

int main() {
    Object2 obj;
    Adapter adp(&obj);
    Codebase1(&adp);
    return 0;
}
