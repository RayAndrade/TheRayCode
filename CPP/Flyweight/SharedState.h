//
// Created by ray on 8/25/20.
//

#ifndef FLYWEIGHT_SHAREDSTATE_H
#define FLYWEIGHT_SHAREDSTATE_H
#include <iostream>

struct SharedState
{
    std::string brand_;
    std::string model_;
    std::string color_;

    SharedState(const std::string &brand, const std::string &model, const std::string &color)
            : brand_(brand), model_(model), color_(color)
    {
    }

    friend std::ostream &operator<<(std::ostream &os, const SharedState &ss)
    {
        return os << "[ " << ss.brand_ << " , " << ss.model_ << " , " << ss.color_ << " ]";
    }
};


#endif //FLYWEIGHT_SHAREDSTATE_H
