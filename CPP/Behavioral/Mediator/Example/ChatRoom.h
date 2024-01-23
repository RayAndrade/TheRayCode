//
// Created by ray on 1/22/24.
//

#ifndef EXAMPLE_CHATROOM_H
#define EXAMPLE_CHATROOM_H

#include "Mediator.h"
#include "User.h"
#include <vector>

class ChatRoom : public Mediator {
private:
    std::vector<User*> _users;

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
};

#endif //EXAMPLE_CHATROOM_H
