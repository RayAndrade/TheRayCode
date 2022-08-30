//
// Created by ray on 8/30/22.
//

#ifndef SHOW_DISPAYADAPTER_H
#define SHOW_DISPAYADAPTER_H


#include "LocalDisplay.h"
#include "RemoteDisplay.h"

class DispayAdapter: public LocalDisplay, public RemoteDisplay{
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
#endif //SHOW_DISPAYADAPTER_H
