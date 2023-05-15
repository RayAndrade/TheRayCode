//
// Created by ray on 5/15/23.
//

#ifndef SHOW_SHAPE_H
#define SHOW_SHAPE_H

class Shape {
    virtual void draw() = 0; // Pure virtual function makes this an abstract base class
    virtual ~Shape() {}
};


#endif //SHOW_SHAPE_H
