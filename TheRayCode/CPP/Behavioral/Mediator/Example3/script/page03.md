[home](./page01.md)

[back](./page02.md)

create JusticeLeagueMediator**.h**
```
JusticeLeagueMediator
```

```
#include <iostream>
```

```
class Superhero; // forward declaration
```

```
class JusticeLeagueMediator {  };
```

```
public:
    virtual ~JusticeLeagueMediator() {}
    virtual void sendMessage(Superhero* sender, const std::string& message) = 0;
```


[page 4](./page04.md)
