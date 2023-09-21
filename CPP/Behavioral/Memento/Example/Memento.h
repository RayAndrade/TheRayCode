//
// Created by ray on 9/20/23.
//

#ifndef EXAMPLE_MEMENTO_H
#define EXAMPLE_MEMENTO_H

// Memento.h
#pragma once

#include <string>

class Memento {
    friend class Originator;

private:
    std::string state;

    explicit Memento(const std::string &s) : state(s) {}
    void setState(const std::string &s) { state = s; }
    std::string getState() const { return state; }
};

#endif //EXAMPLE_MEMENTO_H
