[home](./page01.md) | [back](./page01.md) [next](./page03.md)


The Mediator design pattern is used to centralize complex communications and control between related objects, making it easier to decouple them. Here's a simple example using a chat room (Mediator) where users (Colleagues) can send messages to each other:

### 1. **Mediator.h**
This is an abstract class that declares the `sendMessage` method.

```
Mediator
```

```
#include <string>

class User;
```
We will create the class **User** after we finish this class
```
class Mediator {  };
```
add code
```
User(Mediator* mediator, const std::string& name) : _mediator(mediator), _name(name) {}
virtual ~User() {}

void sendMessage(const std::string& message) {
    _mediator->sendMessage(message, this);
}

virtual void receiveMessage(const std::string& message) {
    std::cout << _name << " received: " << message << std::endl;
}

const std::string& getName() const { return _name; }
```


[page 3](./page03.md)
