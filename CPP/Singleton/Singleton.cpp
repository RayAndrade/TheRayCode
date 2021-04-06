#include "Singleton.h"

Singleton* Singleton::s = nullptr;

Singleton::Singleton(): onlyOne("Original Value")
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
    onlyOne = st;
}

std::string Singleton::getBoss()
{
    return onlyOne;
}

