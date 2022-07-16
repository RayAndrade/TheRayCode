//  https://youtu.be/wJV-5_xk-10

#include <iostream>
using namespace std;

// cParser Interface
class Iparser{
public:
    void virtual parser()=0;
    void virtual parse()=0;
};
// Concrete Class
class cParser : public Iparser{
public:
    void parser(){
        cout << "Class : cParser-Fun :parser, I am a parser " << endl;
    }
    void parse(){
        cout << "Class : cParser-Fun :parser, I am a parse  " << endl;
    }
};
// Interface for Adaptee
class IbetterParser{
public:
    void virtual parser() =0;
    void virtual firstLevelParser() =0;
    void virtual secondLevelParser() =0;
};
//Concrete class Adaptee
class betterParser : public IbetterParser{

};
// t: 7:48
int main() {

    return 0;
}
