# TheRayCode
## Proxy pattern c++

The Proxy pattern is a structural design pattern that provides an object that acts as a *substitute* for a real service object used by the client. 
The Proxy receives client requests, does some work and then passes the request to a service object.

The **Subject** is an interface that declares the common operations for both **RealSubject** and the **Proxy**. 
As long as the client works with the **RealSubject** using this interface, you'll be able to pass it a proxy instead of a *real subject*.

The code for the **Subject** interface will be: 
```c++
class Subject {
public:
    virtual void Request() const = 0;
};
```


Now let's turn our attention to the **RealSubject**.

The **RealSubject** contains some core business logic. 
Usually, the **RealSubject(s)** are capable of doing some *useful work*.

```c++
class RealSubject : public Subject {
 public:
  void Request() const override {
    std::cout << "The RealSubject is Handling the request.\n";
  }
};
```

A **Proxy** can solve these issues without any changes in the **RealSubject's** code.


[Wikipedia](https://en.wikipedia.org/wiki/Proxy_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)
