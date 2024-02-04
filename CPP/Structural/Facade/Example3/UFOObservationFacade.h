//
// Created by ray on 2/3/24.
//

#ifndef EXAMPLE3_UFOOBSERVATIONFACADE_H
#define EXAMPLE3_UFOOBSERVATIONFACADE_H

#include "Telescope.h"
#include "SignalScanner.h"
#include "UFOTracker.h"

class UFOObservationFacade {
private:
    Telescope telescope;
    SignalScanner signalScanner;
    UFOTracker ufoTracker;

public:
    void startObservationSession() {
        std::cout << "Initiating UFO observation session. Eyes on the skies, folks!" << std::endl;
        telescope.turnOn();
        signalScanner.turnOn();
        ufoTracker.turnOn();
        std::cout << "All systems are go. Let's find some aliens!" << std::endl;
    }

    void endObservationSession() {
        std::cout << "Wrapping up the UFO observation session. The truth is still out there..." << std::endl;
        ufoTracker.turnOff();
        signalScanner.turnOff();
        telescope.turnOff();
        std::cout << "Goodnight, Earth. Goodnight, aliens. Wherever you are." << std::endl;
    }
};

#endif //EXAMPLE3_UFOOBSERVATIONFACADE_H
