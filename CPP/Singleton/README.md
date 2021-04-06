# TheRayCode
## Singleton pattern c++

```c++
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
    void setBoss(const std::string&);
    std::string getBoss();
};
```

```c+
#include "Singleton.h"

Singleton* Singleton::s = nullptr;

Singleton::Singleton(): onlyOne("Elon Musk")
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
```

```c++
#include <iostream>
#include "Singleton.h"

using std::cout;
using std::endl;

int main(int argc, char* argv[] ) {

    cout << "The Ray Code is AWESOME!!" << endl;

    cout << "Boss is " << Singleton::getInstance()->getBoss() << endl;

    Singleton::getInstance()->setBoss("Bill Gates");
    cout << "Boss is " << Singleton::getInstance()->getBoss() << endl;

    return 0;
}
```

```run
The Ray Code is AWESOME!!
Boss is Elon Musk
Boss is Bill Gates
```

[Wikipedia](https://en.wikipedia.org/wiki/Singleton_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)
