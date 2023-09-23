
#include "ChatRoom.h"

int main() {
    ChatRoom chatRoom;

    User* alice = new User(&chatRoom, "Alice");
    User* bob = new User(&chatRoom, "Bob");

    chatRoom.addUser(alice);
    chatRoom.addUser(bob);

    alice->sendMessage("Hi Bob!");
    bob->sendMessage("Hello Alice!");

    delete alice;
    delete bob;

    return 0;
}
