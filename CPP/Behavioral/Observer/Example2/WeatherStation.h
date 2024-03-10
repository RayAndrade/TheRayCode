//
// Created by ray on 3/9/24.
//

#ifndef EXAMPLE2_WEATHERSTATION_H
#define EXAMPLE2_WEATHERSTATION_H

#include "Subject.h"
#include "Observer.h"
#include <list>

class WeatherStation : public Subject {
    float temperature;
    std::list<std::shared_ptr<Observer>> observers;
public:
    WeatherStation() : temperature(0.0f) {}

    void setTemperature(float temp) {
        temperature = temp;
        notify();
    }

    void attach(std::shared_ptr<Observer> observer) override {
        observers.push_back(observer);
    }

    void detach(std::shared_ptr<Observer> observer) override {
        observers.remove(observer);
    }

    void notify() override {
        for(auto& observer : observers) {
            observer->update(temperature);
        }
    }
};


#endif //EXAMPLE2_WEATHERSTATION_H
