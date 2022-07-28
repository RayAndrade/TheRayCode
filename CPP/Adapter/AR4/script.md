following : https://youtu.be/wJV-5_xk-10


Adapter pattern works as a bridge between two incompatible interfaces/Component. 
This type of design pattern comes under structural pattern.

Advantage: whenever new things will class/interface come then we can use, using the adapter design pattern 
Helps achieve reusability and flexibility

disadvantage: 
All requests are forwarded, so there is a slight increase in the overhead

We start with a definition and UML diagram.
We start by creating a 

Now let's take a look at some code. I will creat a Parser and Better Parser in parallel.
And we put sides in the main method to show our demonstration of how the Adapter pattern works.
 
We start by creating the Iparser class which will be the cParser Interface.
```cpp
class Iparser{
public:
    void virtual parser()=0;
    void virtual parse()=0;
};
```

The Concrete class will be called **cParser** which will be extended (or made of type) **Iparser**:
```cpp
#include <iostream>
#include "Iparser.h"

class cParser : public Iparser{
public:
    void parser(){
        std::cout << "Class : cParser-Fun :parser, I am a parser " << std::endl;
    }
    void parse(){
        std::cout << "Class : cParser-Fun :parser, I am a parse  " << std::endl;
    }
};
```

Note we have a parser and a parse with no 'r'.

Now we are given a *better* parser.
We start with *it's* interface:

```cpp
#include <iostream>

class IbetterParser{
public:
    void virtual parser() =0;
    void virtual firstLevelParser() =0;
    void virtual secondLevelParser() =0;
};
```
And the **better** class is the class name will be **betterParser** which will be extened with the **IbetterParser**.
The code will look like:

```cpp
#include "IbetterParser.h"

class betterParser : public IbetterParser{
    void parser(){
        std::cout << "Class: betterPArser-Fun: parser, i am Parser " << std::endl;
    }
    void firstLevelParser(){
        std::cout << "Class: betterPArser-Fun: parser, i am firstParser " << std::endl;
    }
    void secondLevelParser(){
        std::cout << "Class: betterPArser-Fun: parser, i am secondParser " << std::endl;
    }
};
```
Now let's create an Adapter we call the **Adapter** class

```cpp
#include "Iparser.h"
#include "IbetterParser.h"

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
Now in the mail method we write

```cpp

#include "Adapter.h"
#include "betterParser.h"

int main() {
    betterParser *betterParserPtr = new betterParser;
    Iparser *adapter = new Adapter(betterParserPtr);
    adapter->parser();
    adapter->parse();
    return 0;
}
```

when we compile and run we should get
```run
Class: betterPArser-Fun: parser, i am Parser 
Class: betterPArser-Fun: parser, i am secondParser 
```




























































