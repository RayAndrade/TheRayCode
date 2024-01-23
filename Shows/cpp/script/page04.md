[home](./page01.md) | [back](./page03.md) | [next](./page03.md)

Now let's focus on **ChatRoom.h**
```
ChatRoom
```
The Concrete mediator that allows User instances to communicate with each other.

At the top we add
```
#include "Mediator.h"
#include "User.h"
#include <vector>
```
So we can **extend ChatRoom with Mediator**
```
class ChatRoom:public Mediator{ };
```
and we add code:

**private**
```
private:
std::vector<User*> _users;
```
and **public**:
```
public:
void addUser(User* user) {
    _users.push_back(user);
}

void sendMessage(const std::string& message, User* user) override {
    for (User* u : _users) {
            // Don't send the message back to the sender
        if (u != user) {
            u->receiveMessage(user->getName() + ": " + message);
        }
    }
}
```


[page 5](./page05.md)
