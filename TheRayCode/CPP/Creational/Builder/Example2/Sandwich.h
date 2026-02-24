//
// Created by ray on 11/10/23.
//

#ifndef BEGINNING_SANDWICH_H
#define BEGINNING_SANDWICH_H

#include <string>
#include <vector>
#include <iostream>

class Sandwich {
private:
    std::string bread;
    std::string meat;
    std::string cheese;
    std::vector<std::string> vegetables;
    std::vector<std::string> condiments;

public:
    void setBread(const std::string& b) {
        bread = b;
    }

    void setMeat(const std::string& m) {
        meat = m;
    }

    void setCheese(const std::string& c) {
        cheese = c;
    }

    void addVegetable(const std::string& vegetable) {
        vegetables.push_back(vegetable);
    }

    void addCondiment(const std::string& condiment) {
        condiments.push_back(condiment);
    }

    void display() const {
        std::cout << "Sandwich on " << bread << " bread with " << meat << " meat and " << cheese << " cheese. Vegetables: ";
        for (const auto& vegetable : vegetables) {
            std::cout << vegetable << " ";
        }
        std::cout << ". Condiments: ";
        for (const auto& condiment : condiments) {
            std::cout << condiment << " ";
        }
        std::cout << std::endl;
    }

};


#endif //BEGINNING_SANDWICH_H
