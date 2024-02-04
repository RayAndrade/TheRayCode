//
// Created by ray on 2/3/24.
//

#ifndef EXAMPLE3_FLYWEIGHT_H
#define EXAMPLE3_FLYWEIGHT_H

class Flyweight {
public:
    virtual ~Flyweight() = default;
    virtual void draw(int x, int y) const = 0; // Draw object at position x, y
};

#endif //EXAMPLE3_FLYWEIGHT_H
