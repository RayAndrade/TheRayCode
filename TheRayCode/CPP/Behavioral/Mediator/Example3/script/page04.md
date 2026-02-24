[home](./page01.md)

[back](./page03.md)

create Batman**.h**

```
Batman
```

```
#include "Superhero.h"
```

```
class Batman  {  };
```

```
 : public Superhero
```

```
public:
    Batman(JusticeLeagueMediator* m) : Superhero(m, "Batman") {}
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



[page 5](./page05.md)
