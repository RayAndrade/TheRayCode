//
// Created by ray on 12/7/21.
//

#ifndef SHOW_PRODUCT_H
#define SHOW_PRODUCT_H
#include <vector>
#include <string>
#include <iostream>
class Product{
public:
    std::vector<std::string> parts_;
    void ListParts()const{
        std::cout << "Product parts: ";
        for (size_t i=0;i<parts_.size();i++){
            if(parts_[i]== parts_.back()){
                std::cout << parts_[i];
            }else{
                std::cout << parts_[i] << ", ";
            }
        }
        std::cout << "\n\n";
    }
};
#endif //SHOW_PRODUCT_H
