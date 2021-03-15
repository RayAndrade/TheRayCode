# TheRayCode
## Singleton C#

With the Singelton design pattern we want to ensure that a class has only one instance, while providing a global access point to this instance.
To achieve this let's take a look at some c# code. The Singleton class defines the *GetInstance* method that serves as an
alternative to constructor and lets clients access the same instance of
this class over and over.

The Singleton class is *public*

```c#
public class Singleton
```
The Singleton's constructor should always be private to prevent direct construction calls with the `new` operator.

```c#
private Singleton() { }

private static Singleton _instance;

```
    
[Github](https://www.TheRayCode.com)
