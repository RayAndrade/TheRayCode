//
// Created by ray on 4/16/25.
//

#ifndef CODE_PRODUCT_H
#define CODE_PRODUCT_H

#include <string>
#include <vector>

class Product {
private:
    std::vector<std::string> parts;

public:
    void addPart(const std::string& part);
    void show() const;
};

#endif //CODE_PRODUCT_H
