[home](./page01.md)

[back](./page05.md)

create Superman**.h**

```
Superman
```

```
#include "Superhero.h"
```

```
class Superman  {  };
```

```
 : public Superhero
```

```
public:
    Superman(JusticeLeagueMediator* m) : Superhero(m, "Superman") {}
```

```
    void send(const std::string& message) override {
        mediator->sendMessage(this, message);
    }
```

```
    void receive(const std::string& from, const std::string& message) override {
        std::cout << name << " received a message from " << from << ": " << message << std::endl;
    }
```



[page 7](./page07.md)
