# TheRayCode
TheRayCode C#  Proxy design pattern
create the **interface Subject**
add

```c#
void Request();
```
create class **RealSubject**
remove **public**
extend with **: Subject**
to **Request**
add:
```c#
using System;
```
and replace **throw**
```c#
Console.WriteLine("RealSubject: Handling Request.");

```
create class **Proxy** extend it with **: Subject**
remove **public** implment missing member
add:
```c#
private RealSubject _realSubject;
        
public Proxy(RealSubject realSubject)
{
    this._realSubject = realSubject;
}

```
add:
```c#
 public bool CheckAccess()
 {
     // Some real checks should go here.
     Console.WriteLine("Proxy: Checking access prior to firing a real request.");
     return true;
}
        
public void LogAccess()
{
  Console.WriteLine("Proxy: Logging the time of request.");
}

```

replace **throw** in **Request** with
```c#
if (this.CheckAccess())
            {
    this._realSubject.Request();
    this.LogAccess();
}

```
also add:

```c#
using System;
```

creat class Client keep public
add:
```c#
// The client code is supposed to work with all objects (both subjects
// and proxies) via the Subject interface in order to support both real
// subjects and proxies. In real life, however, clients mostly work with
// their real subjects directly. In this case, to implement the pattern
// more easily, you can extend your proxy from the real subject's class.
public void ClientCode(Subject subject)
{
    // ...
    
    subject.Request();
    
    // ...
}

```
create class **Proxy** and extend it with **: Subject**

to to **Program** to the main function add:

```c#
Client client = new Client();
            
Console.WriteLine("Client: Executing the client code with a real subject:");
RealSubject realSubject = new RealSubject();
client.ClientCode(realSubject);

Console.WriteLine();

Console.WriteLine("Client: Executing the same client code with a proxy:");
Proxy proxy = new Proxy(realSubject);
client.ClientCode(proxy);

```


[Github](https://www.GitHub.com/RayAndrade/TheRayCode.com)
