#include "Leaf.h"
#include "Composite.h"


int main() {
    // Create individual shapes
    Circle* circle1 = new Circle();
    Circle* circle2 = new Circle();

    // Create a group and add individual shapes to it
    Group* group = new Group();
    group->add(circle1);
    group->add(circle2);

    // Draw individual shapes
    circle1->draw();
    circle2->draw();

    // Draw the group
    group->draw();

    // Cleanup
    delete group; // This will also delete the circles inside it

    return 0;
}
