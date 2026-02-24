[home](./page01.md)

[back](./page01.md)

create Superhero**.h**
```
Superhero
```

```
#include <string>
#include "JusticeLeagueMediator.h"
```

```
class Superhero {  };
```

```
protected:
    JusticeLeagueMediator* mediator;
```

```
public:
    Superhero(JusticeLeagueMediator* m, const std::string& n) : mediator(m), name(n) {}
    virtual ~Superhero() {}
    virtual void send(const std::string& message) = 0;
    virtual void receive(const std::string& from, const std::string& message) = 0;
```



[page 3](./page03.md)
