// https://youtu.be/LsvyrZ1sWcw

#include <iostream>
#include <memory>

using namespace std;

// Remote Dispay

class RemoteDisplay{
public:
    void MsgRed(string mrssage) const;
    void MsgBlue(string message) const;
    void MsgGreen(string message) const;
    void MsgYellow(string message) const;
};
// Remote Dispay
void RemoteDisplay::MsgRed(string message) const {
     cout << "R: " << message << endl;
}
void RemoteDisplay::MsgBlue(string message) const {
    cout << "B: " << message << endl;
}
void RemoteDisplay::MsgGreen(string message) const {
    cout << "G: " << message << endl;
}
void RemoteDisplay::MsgYellow(string message) const {
    cout << "Y: " << message << endl;
}

// Local Display interface

class LocalDisplay{
public:
    enum Color{
        Red = 0,
        Blue = 1,
        Green = 2,
        Yellow = 3
    };
    virtual void Message(Color color, string message) = 0;
};

// Display Adapter

class DispayAdapter : public LocalDisplay, public RemoteDisplay{
    virtual void Message(Color color, string message)
    {
        switch(color)
        {
        case Red:
            MsgRed(message);
            break;
        case Blue:
            MsgBlue (message);
            break;
        case Green:
           MsgGreen (message);
           break;
        case Yellow:
           MsgYellow (message);
            break;
        default:
            cout << "Error: Message format not supported" << endl;
            break;
        }
    }

};


int main() {
    unique_ptr<LocalDisplay> displayPtr(new DispayAdapter);
    displayPtr->Message(displayPtr->Red,"Cold Stone");
    return 0;
}
