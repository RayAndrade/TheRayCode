[home](./page01.md) | [back](./page02.md) | [next](./page04.md)

Create **class**
```
User
```
add code to top hwe we include the **Mediator**
```
#include "Mediator.h"
#include <iostream>
```
for the class
```
class User {  };
```
add code:
```
protected:
Mediator* _mediator;
std::string _name;
```
and for **public**
```
public:
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
see we use the **Mediator** as a pointer

[page 4](./page04.md)
