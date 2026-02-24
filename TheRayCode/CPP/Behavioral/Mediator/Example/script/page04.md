[home](./page01.md) | [back](./page03.md) | [next](./page03.md)

Create **class**
```
ChatRoom
```
at the top we add
```
#include "Mediator.h"
#include "User.h"
#include <vector>
```
for the class
```
class ChatRoom  {  };
```
we extend it with
```
: public Mediator 
```
add code
```
private:
std::vector<User*> _users;
```
for **public**
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
