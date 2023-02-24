#include <iostream>
#include <string>

// Base class
class Shape {
public:
    virtual void draw() = 0;
};

// Concrete classes
class Circle : public Shape {
public:
    void draw() {
        std::cout << "Inside Circle::draw() method." << std::endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() {
        std::cout << "Inside Rectangle::draw() method." << std::endl;
    }
};

class Square : public Shape {
public:
    void draw() {
        std::cout << "Inside Square::draw() method." << std::endl;
    }
};

// Factory class
class ShapeFactory {
public:
    static Shape* createShape(std::string type) {
        if (type == "circle")
            return new Circle();
        else if (type == "rectangle")
            return new Rectangle();
        else if (type == "square")
            return new Square();
        else
            return nullptr;
    }
};

// Client code
int main() {
    Shape* shape1 = ShapeFactory::createShape("circle");
    shape1->draw();
    Shape* shape2 = ShapeFactory::createShape("rectangle");
    shape2->draw();
    Shape* shape3 = ShapeFactory::createShape("square");
    shape3->draw();
    return 0;
}
