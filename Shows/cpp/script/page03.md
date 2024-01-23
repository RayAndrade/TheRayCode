[home](./page01.md) | [back](./page02.md) | [next](./page04.md)

So let's create **User.h**
```
User
```
Represents the colleagues that will communicate using the Mediator.

at the top we add:
```
#include "Mediator.h"
#include <iostream>
```
we add a class structure
```
class User { };
```
with **protected** code
```
protected:
Mediator* _mediator;
std::string _name;
```
and **public** code
```
User(Mediator* mediator, const std::string& name) : _mediator(mediator), _name(name) {}
virtual ~User() {}

void sendMessage(const std::string& message) {
    _mediator->sendMessage(message, this);
}

virtual void receiveMessage(const std::string& message) {
    std::cout << _name << " received: " << message << std::endl;
}
```
and we add: **const getName**
```
const std::string& getName() const { return _name; }
```

[page 4](./page04.md)
