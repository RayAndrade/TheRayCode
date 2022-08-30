//
// Created by ray on 8/30/22.
//

#ifndef SHOW_REMOTEDISPLAY_H
#define SHOW_REMOTEDISPLAY_H

#include <iostream>

class RemoteDisplay{
public:
    void MsgRed(std::string mrssage) const;
    void MsgBlue(std::string message) const;
    void MsgGreen(std::string message) const;
    void MsgYellow(std::string message) const;
};

#endif //SHOW_REMOTEDISPLAY_H
