## Advantage

- [ ] It allows two or more previously incompatible objects to interact
- [ ] It allows reusability of existing functionality

## Disadvantage
- [ ] All requests are forwarded so there is a slight in the overhead

## Look at code


First we create a class called *Iparser*. Iparser will be an intrerface

```cpp
// cParser Interface
class Iparser{
public:
    void virtual parser()=0;
    void virtual parse()=0;
};
```

now we create a Concrete class

```cpp
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

```

Next we create an Adaptee  Interface for Adaptee

```cpp
class IbetterParser{
public:
    void virtual parser() =0;
    void virtual firstLevelParser() =0;
    void virtual secondLevelParser() =0;
};
```

now a Concrete class called *betterParser*.

```cpp

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

```

Now we create Adaper Class which will simulate the cParserPin functionality


```cpp
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

```
now we move on the main method

```cpp

#include <iostream>
using namespace std;

// Adaper Class which will simulate the cParserPin functionality
int main() {
    betterParser *betterParserPtr = new betterParser;
    Iparser *adapter = new Adapter(betterParserPtr);
    adapter->parser();
    adapter->parse();



    return 0;
}

```
