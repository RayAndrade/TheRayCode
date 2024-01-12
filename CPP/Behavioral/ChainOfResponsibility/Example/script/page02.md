[home](./page01.md) | [back](./page01.md) [next](./page03.md)

Create class
```
Handler
```
add to the top
```
#include <iostream>
```
create class/interface
```
class Handler { };
```
add code
```
public:
virtual std::string Handle(std::string request) = 0;
virtual Handler *SetNext(Handler *handler) = 0;
```






[page 3](./page03.md)
