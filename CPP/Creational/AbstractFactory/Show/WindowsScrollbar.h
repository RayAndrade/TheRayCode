//
// Created by ray on 5/22/23.
//

#ifndef SHOW_WINDOWSSCROLLBAR_H
#define SHOW_WINDOWSSCROLLBAR_H



#include <iostream>


class WindowsScrollbar : public Scrollbar{
public:
    void scroll() override {
        std::cout << "WindowsScrollbar scroll." << std::endl;
    }
};

#endif //SHOW_WINDOWSSCROLLBAR_H
