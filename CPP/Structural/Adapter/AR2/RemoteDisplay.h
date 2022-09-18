//
// Created by ray on 8/7/22.
//

#ifndef AR2_REMOTEDISPLAY_H
#define AR2_REMOTEDISPLAY_H

#include <iostream>

class RemoteDisplay{
public:
    void MsgRed(std::string mrssage) const;
    void MsgBlue(std::string message) const;
    void MsgGreen(std::string message) const;
    void MsgYellow(std::string message) const;
};


#endif //AR2_REMOTEDISPLAY_H
