// https://youtu.be/LsvyrZ1sWcw


#include <iostream>
#include <memory>

#include "DispayAdapter.h"


// Remote Dispay
void RemoteDisplay::MsgRed(std::string message) const {
    std::cout << "R: " << message << std::endl;
}
void RemoteDisplay::MsgBlue(std::string message) const {
    std::cout << "B: " << message << std::endl;
}
void RemoteDisplay::MsgGreen(std::string message) const {
    std::cout << "G: " << message << std::endl;
}
void RemoteDisplay::MsgYellow(std::string message) const {
    std::cout << "Y: " << message << std::endl;
}


int main() {
    std::unique_ptr<LocalDisplay> displayPtr(new DispayAdapter);
    displayPtr->Message(displayPtr->Red,"Cold Stone");
    return 0;
}
