[home](./page01.md) | [back](./page04.md) | [next](./page06.md)

At **main.cpp**

Demonstrates the usage of the pattern.

```
#include "ChatRoom.h"
```
for the **main function**
```
ChatRoom chatRoom;

User* alice = new User(&chatRoom, "Alice");
User* bob = new User(&chatRoom, "Bob");

chatRoom.addUser(alice);
chatRoom.addUser(bob);

alice->sendMessage("Hi Bob!");
bob->sendMessage("Hello Alice!");

delete alice;
delete bob;
```

[page 6](./page06.md)
