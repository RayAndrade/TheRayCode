[home](./page01.md) | [back](./page02.md) | [next](./page04.md)

The default chaining behavior can be implemented inside a base handler class. 

Returning a handler from here will let us link handlers in a convenient way like this: **$mouse->setNext($cat)->setNext($dog);**

create **class**
```
AbstractHandler
```
at the top
```
#include "Handler.h"
```
for the class
```
class AbstractHandler {  };
```
we extend it with
```
 : public Handler
```
and add code
```
private:
    Handler *next_handler_;
    
public:
AbstractHandler() : next_handler_(nullptr) {
}
Handler *SetNext(Handler *handler) override {
    this->next_handler_ = handler;
    return handler;
}
std::string Handle(std::string request) override {
    if (this->next_handler_) {
        return this->next_handler_->Handle(request);
    }
    return {};
}
```
 

[page 4](./page04.md)
