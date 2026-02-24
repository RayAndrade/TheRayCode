[home](./page01.md)

[back](./page06.md)

create WonderWoman**.h**

```
WonderWoman
```

```
#include "Superhero.h"
```

```
class WonderWoman  {  };
```

```
 : public Superhero
```

```
public:
    WonderWoman(JusticeLeagueMediator* m) : Superhero(m, "WonderWoman") {}
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



[page 8](./page08.md)
