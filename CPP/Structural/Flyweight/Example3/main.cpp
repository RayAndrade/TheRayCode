#include "FlyweightFactory.h"

int main() {
    FlyweightFactory factory;

    auto redCircle = factory.getFlyweight("Red");
    auto blueCircle = factory.getFlyweight("Blue");
    auto redCircle2 = factory.getFlyweight("Red"); // This should not create a new circle

    redCircle->draw(100, 100);
    blueCircle->draw(200, 200);
    redCircle2->draw(300, 300);

    return 0;
}
