# TheRayCode
## Singleton pattern c++

WE start with createing a 'Singleton' class, a *.cpp* file.

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

Now let's create a *.h* Singleton file.
```c+
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

Now let's put this all together in main method in the **main.cpp** file

```c++
#include <iostream>
#include "Singleton.h"

using std::cout;
using std::endl;

int main(int argc, char* argv[] ) {

    cout << "The value is the " << Singleton::getInstance()->getBoss() << endl;

    Singleton::getInstance()->setBoss("Changed Value");
    
    cout << "The value is the " << Singleton::getInstance()->getBoss() << endl;

    return 0;
}
```

Let's compile and run:

```run
The value is the Original Value
The value is the Changed Value
```

[Wikipedia](https://en.wikipedia.org/wiki/Singleton_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)
