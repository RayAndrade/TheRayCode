#include "Singleton.h"

Singleton* Singleton::s = nullptr;

Singleton::Singleton(): boss("Elon Musk")
{

}


Singleton::~Singleton()
{
    if(s)
    {
        delete s;
        s = nullptr;
    }
}

Singleton* Singleton::getInstance()
{
    // static Singleton s;
    if(!s)
    {
        s = new Singleton;
    }
    return s;
}

void Singleton::setBoss(const std::string& st)
{
    boss = st;
}

std::string Singleton::getBoss()
{
    return boss;
}

