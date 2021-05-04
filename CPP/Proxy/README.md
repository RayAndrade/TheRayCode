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

A **Proxy** can solve these issues without any changes in the **RealSubject's** code because the **Proxy** has an interface identical to the **RealSubject**.
The Proxy maintains a reference to an object of the RealSubject class. 
It can be either lazy-loaded or passed to the Proxy by the client.

The most common applications of the Proxy pattern are lazy loading, caching, controlling the access, logging, etc. 
A Proxy can perform one of these things and then, depending on the result, pass the execution to the same method in a linked RealSubject object.
```c++
#include "RealSubject.h"

class Proxy : public Subject {

private:
    RealSubject *real_subject_;

    bool CheckAccess() const {
        // Some real checks should go here.
        std::cout << "Checking access prior to firing a real request.\n";
        return true;
    }
    void LogAccess() const {
        std::cout << "Logging the time of request.\n";
    }

public:
    Proxy(RealSubject *real_subject) : real_subject_(new RealSubject(*real_subject)) {
    }

    ~Proxy() {
        delete real_subject_;
    }
    void Request() const override {
        if (this->CheckAccess()) {
            this->real_subject_->Request();
            this->LogAccess();
        }
    }
};

```
Now let's build an example in the **main.cpp**
We need to incude the **Proxy**.h

```c++
#include "Proxy.h"

void ClientCode(const Subject &subject) {
    subject.Request();
}
```

And when we create the **main** method we declare a new **RealSubject** and do some work.
```c++
int main() {
    std::cout << "Executing the client code with a real subject:\n";
    RealSubject *real_subject = new RealSubject;
    ClientCode(*real_subject);
    std::cout << "\n";
    std::cout << "Executing the same client code with a proxy:\n";
    Proxy *proxy = new Proxy(real_subject);
    ClientCode(*proxy);

    delete real_subject;
    delete proxy;
    return 0;
}
```

We now compile and run.
We should get:
```run
Executing the client code with a real subject:
The RealSubject is Handling the request.

Executing the same client code with a proxy:
Checking access prior to firing a real request.
The RealSubject is Handling the request.
Logging the time of request.
```


[Wikipedia](https://en.wikipedia.org/wiki/Proxy_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)
