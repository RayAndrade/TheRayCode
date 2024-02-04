//
// Created by ray on 2/3/24.
//

#ifndef EXAMPLE2_MUSICONCOMMAND_H
#define EXAMPLE2_MUSICONCOMMAND_H

#include "Command.h"
#include "Receiver.h"

class MusicOnCommand : public Command {
    MusicPlayer& musicPlayer;
public:
    MusicOnCommand(MusicPlayer& musicPlayer) : musicPlayer(musicPlayer) {}
    void execute() override {
        musicPlayer.on();
    }
};

#endif //EXAMPLE2_MUSICONCOMMAND_H
