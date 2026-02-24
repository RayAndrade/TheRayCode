[home](./page01.md) | [back](./page01.md) [next](./page03.md)


Create **class**
```
Handler
```
The Handler interface declares a method for building the chain of handlers. It also declares a method for executing a request.

add:
```
#include <iostream>
```
Let's create the **class** structure
```
class Handler {  };
```
with code:
```
public:
virtual Handler *SetNext(Handler *handler) = 0;
virtual std::string Handle(std::string request) = 0;
```


[page 3](./page03.md)
