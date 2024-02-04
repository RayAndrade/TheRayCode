//
// Created by ray on 2/3/24.
//

#ifndef EXAMPLE3_SIGNALSCANNER_H
#define EXAMPLE3_SIGNALSCANNER_H

#include <iostream>

class SignalScanner {
public:
    void turnOn() {
        std::cout << "SignalScanner is listening for alien mixtapes and cosmic chatter." << std::endl;
    }

    void turnOff() {
        std::cout << "SignalScanner is off. The aliens have gone silent... or maybe they're just shy." << std::endl;
    }
};

#endif //EXAMPLE3_SIGNALSCANNER_H
