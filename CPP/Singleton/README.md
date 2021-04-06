# TheRayCode
## Singleton pattern c++

Why would we want to use a **Singleton**?
In some programs you would want a *single instance* of a class, for example a db connection.
If you have multiple connections you may have fall into update race proplems or lockups from multiple connections trying to gain access the same db.

An implementation of the singleton pattern must:
* ensure that only one instance of the singleton class ever exists; and
* provide global access to that instance.

Typically, this is done by declaring all constructors of the class to be private; and providing a static method that returns a reference to the instance.
We start with createing a 'Singleton' class, a *.cpp* file.

```c++
#include <string>

class Singleton
{
    static Singleton* s;
    std::string onlyOne;
    Singleton();
public:
```
You need to disable the copy constructor.
```cpp
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;
    ~Singleton();
```
we create a method to access the **only** exsistance of the **Singleton**.
```cpp
    static Singleton* getInstance();
    void setSingleton(const std::string&);
    std::string getSingelton();
};
```
You need to disable the copy constructor.

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

void Singleton::setSingleton(const std::string& st)
{
   onlyOne = st;
}

std::string Singleton::getSingleton()
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

    cout << "The value is the " << Singleton::getInstance()->getSingelton() << endl;

    Singleton::getInstance()->setSingleton("Changed Value");
    
    cout << "The value is the " << Singleton::getInstance()->getSingelton() << endl;

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
