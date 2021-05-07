# TheRayCode
## Proxy pattern c#

Proxy is a structural design pattern that lets you provide a substitute/placeholder for another object. 
The proxy controls access to the original object, allowing you to perform work before or after the request to the original object.

First create the **interface Subject**.
The **Subject** interface declares common operations for both the **RealSubject** and the Proxy. 
As long as the client works with RealSubject using this interface, you'll be able to pass it to a proxy instead of the real subject.

```c#
public interface Subject
{
   void Request();
}
```
Create class **RealSubject** and remove the **public** that was added with the code generation.
Extend with **: Subject** to **Request**
the code is:
```c#

class RealSubject : Subject
{
    public void Request()
    {
       Console.WriteLine("Handling Request.");
    }
}
```


Create a class called **Proxy** and extend it with **: Subject**
remove the **public** ans implment missing members.

```c#
class Proxy : Subject
 {
    private RealSubject _realSubject;
        
    public Proxy(RealSubject realSubject)
    {
       this._realSubject = realSubject;
    }
        
    public void Request()
    {
        if (this.CheckAccess())
        {
            this._realSubject.Request();
            this.LogAccess();
        }
    }
        
    public bool CheckAccess()
    {
        // Some real checks should go here.
        Console.WriteLine("Checking access prior to firing a real request.");
        return true;
    }
        
    public void LogAccess()
    {
        Console.WriteLine("Proxy: Logging the time of request.");
    }
}
```

Create a class called **Proxy** and extend it with **: Subject**
The client code is supposed to work with all objects (both subjects and proxies) via the Subject interface in order to support both real subjects and proxies. 
In real life, however, clients mostly work with their real subjects directly. 
In this case, to implement the pattern more easily, you can extend your proxy from the real subject's class.

We creat the class Client and keep public

```c#
public class Client
    {
    public void ClientCode(Subject subject)
    {
        subject.Request();
    }
}
```

We now goto the **Program** file and we add the **static void Main**.
The code will be
```c#
static void Main(string[] args)
{
    Client client = new Client();
            
    Console.WriteLine("Executing the client code with a real subject:");
    RealSubject realSubject = new RealSubject();
    client.ClientCode(realSubject);

    Console.WriteLine();

    Console.WriteLine("Executing the same client code with a proxy:");
    Proxy proxy = new Proxy(realSubject);
    client.ClientCode(proxy);
}
```
When we compile and run we get:

````run
Executing the client code with a real subject:
Handling Request.

Executing the same client code with a proxy:
Checking access prior to firing a real request.
Handling Request.
Proxy: Logging the time of request.

````

[Wikipedia](https://en.wikipedia.org/wiki/Proxy_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)


