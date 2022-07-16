//
// Created by ray on 7/15/22.
//

#ifndef AR3_DISPAYADAPTER_H
#define AR3_DISPAYADAPTER_H

#include "LocalDisplay.h"
#include "RemoteDisplay.h"

class DispayAdapter : public LocalDisplay, public RemoteDisplay{
    virtual void Message(Color color, std::string message)
    {
        switch(color)
        {
            case Red:
                MsgRed(message);
                break;
            case Blue:
                MsgBlue (message);
                break;
            case Green:
                MsgGreen (message);
                break;
            case Yellow:
                MsgYellow (message);
                break;
            default:
                std::cout << "Error: Message format not supported" << std::endl;
                break;
        }
    }

};

#endif //AR3_DISPAYADAPTER_H
