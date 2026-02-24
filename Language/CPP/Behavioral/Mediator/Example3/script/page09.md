[home](./page01.md)

[back](./page08.md)

create JusticeLeagueMediatorImpl**.h**

```
JusticeLeagueMediatorImpl
```

```
#include <vector>
#include "JusticeLeagueMediator.h"
#include "Superhero.h"
```

```
class JusticeLeagueMediatorImpl { };
```

```
 : public JusticeLeagueMediator
```

```
std::vector<Superhero*> members;
```

```
public:
    void addMember(Superhero* hero) {
        members.push_back(hero);
    }

    void sendMessage(Superhero* sender, const std::string& message) override {
        for (Superhero* hero : members) {
            if (hero != sender) {
                hero->receive(sender->name, message);
            }
        }
    }
```


[page 10](./page10.md)
