[home](./page01.md) | [back](./page01.md) [next](./page03.md)

Create **class**
```
Listener
```
add at the top
```
#include <iostream>
#include <memory>
```
for **class**
```
class Listener {  };
```
add code
```
public:
virtual ~Listener() = default;
void setNext(std::shared_ptr<Listener> nextListener) { this->nextListener = nextListener; }
virtual void shareFeelings(const std::string& feeling) = 0;
```
and
```
protected:
std::shared_ptr<Listener> nextListener;
```

[page 3](./page03.md)
