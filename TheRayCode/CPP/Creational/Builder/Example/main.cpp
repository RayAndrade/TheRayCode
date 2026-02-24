#include <iostream>
#include "Director.h"
#include "ConcreteBuilder.h"


// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    Director director;
    ConcreteBuilder builder;

    director.construct(&builder);
    Product* product = builder.getResult();

    product->show();

    return 0;
}