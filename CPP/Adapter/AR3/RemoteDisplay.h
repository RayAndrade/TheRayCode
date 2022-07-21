// t=6:35
//
// Created by ray on 7/15/22.
//

#ifndef AR3_REMOTEDISPLAY_H
#define AR3_REMOTEDISPLAY_H

#include <iostream>

class RemoteDisplay{
public:
    void MsgRed(std::string mrssage) const;
    void MsgBlue(std::string message) const;
    void MsgGreen(std::string message) const;
    void MsgYellow(std::string message) const;
};

#endif //AR3_REMOTEDISPLAY_H
