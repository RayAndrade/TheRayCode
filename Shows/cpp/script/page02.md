[home](./page01.md) | [back](./page01.md) [next](./page03.md)

Create **Mediator.h**

```
Mediator
```
Abstract class to define the contract for concrete mediators.

we
```
#include <string>

```
Here is the **class** structure
```
class Mediator { };
```
and code
```
public:
virtual void sendMessage(const std::string& message, User* user) = 0;
```
We tag the message with the **User**

[page 3](./page03.md)
