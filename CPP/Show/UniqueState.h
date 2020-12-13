//
// Created by ray on 12/8/20.
//

#ifndef SHOW_UNIQUESTATE_H
#define SHOW_UNIQUESTATE_H
#include <iostream>

struct UniqueState
{
    std::string owner_;
    std::string plates_;

    UniqueState(const std::string &owner, const std::string &plates)
            : owner_(owner), plates_(plates)
    {
    }

    friend std::ostream &operator<<(std::ostream &os, const UniqueState &us)
    {
        return os << "[ " << us.owner_ << " , " << us.plates_ << " ]";
    }
};

#endif //SHOW_UNIQUESTATE_H
