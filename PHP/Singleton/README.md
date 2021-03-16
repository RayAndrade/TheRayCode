# TheRayCode
## Singleton PHP

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
This is the static method that controls the access to the singleton instance. 
On the first run, it creates a singleton object and places it into the static field. 
On subsequent runs, it returns the client existing object stored in the static field.
It checks to see if the oblect is null, not createded yet.
If the object is not null that means the Singelton was created and the previouly created object is returned.
```c#
public static Singleton GetInstance()
{
    if (_instance == null)
    {
        _instance = new Singleton();
    }
    return _instance;
}
```
Finally, any singleton should define some business logic, which can be executed on its instance.
Here is our example:

```c#
public static void someBusinessLogic()
{
   // ...put some logic here
}
```

Let's put this together in the **Program**.cs.
We want to create two different singleton objects.
And then we will compair them.

```c#
static void Main(string[] args)
{
    Singleton s1 = Singleton.GetInstance();
    Singleton s2 = Singleton.GetInstance();

     if (s1 == s2)
     {
        Console.WriteLine("Singleton works, both variables contain the same instance.");
     }
     else
     {
         Console.WriteLine("Singleton failed, variables contain different instances.");
     }
}
```
Let's compile and run.
We get
```
Singleton works, both variables contain the same instance.
```



[The Ray Code](https://www.TheRayCode.com)
[Ray Andrade](https://www.RayAndrade.org)

