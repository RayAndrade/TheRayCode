## Advantage

- [ ] It allows two or more previously incompatible objects to interact
- [ ] It allows reusability of existing functionality

## Disadvantage
- [ ] All requests are forwarded so there is a slight in the overhead

## Look at code


```cpp

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
    void parser(){
       cout << "Class: betterPArser-Fun: parser, i am Parser " << endl;
    }
    void firstLevelParser(){
        cout << "Class: betterPArser-Fun: parser, i am firstParser " << endl;
    }
    void secondLevelParser(){
        cout << "Class: betterPArser-Fun: parser, i am secondParser " << endl;
    }
};
// Adaper Class which will simulate the cParserPin functionality
class Adapter : public Iparser{
public:
    IbetterParser *bParserPtr;
    Adapter(IbetterParser *obj){
        bParserPtr = obj;
    }
    void  parser(){
        bParserPtr->parser();
    }
    void parse(){
        bParserPtr->secondLevelParser();
    }
};
int main() {
    betterParser *betterParserPtr = new betterParser;
    Iparser *adapter = new Adapter(betterParserPtr);
    adapter->parser();
    adapter->parse();



    return 0;
}

```
