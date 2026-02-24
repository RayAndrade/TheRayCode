//
// Created by ray on 4/16/25.
//
#include "ConcreteBuilder.h"

ConcreteBuilder::ConcreteBuilder() {
    product = new Product();
}

ConcreteBuilder::~ConcreteBuilder() {
    delete product;
}

void ConcreteBuilder::buildPartA() {
    product->addPart("PartA");
}

void ConcreteBuilder::buildPartB() {
    product->addPart("PartB");
}

Product* ConcreteBuilder::getResult() {
    return product;
}
