//
// Created by ray on 4/16/25.
//
#include "Product.h"
#include <iostream>

void Product::addPart(const std::string& part) {
    parts.push_back(part);
}

void Product::show() const {
    std::cout << "Product parts: ";
    for (const auto& part : parts) {
        std::cout << part << " ";
    }
    std::cout << std::endl;
}