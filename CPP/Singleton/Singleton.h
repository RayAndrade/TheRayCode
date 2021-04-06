#ifndef SINGLETON_SINGLETON_H
#define SINGLETON_SINGLETON_H

#include <string>

class Singleton
{
    static Singleton* s;

    std::string onlyOne;

    Singleton();
public:

    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

    ~Singleton();

    static Singleton* getInstance();

    void setSingleton(const std::string &st);

    std::string getSingelton();


};
#endif //SINGLETON_SINGLETON_H
