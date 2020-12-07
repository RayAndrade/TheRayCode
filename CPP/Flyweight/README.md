# TheRayCode
TheRayCode PHP 
# TheRayCode

SharedState

UniqueState

Flyweight

**FlyweightFactory.h**

**main.cpp**

#include "FlyweightFactory.h"

void AddCarToPoliceDatabase(
FlyweightFactory &ff, const std::string &plates, const std::string &owner,
const std::string &brand, const std::string &model, const std::string &color)
        
{ }

std::cout << "\nClient: Adding a car to database.\n";
const Flyweight &flyweight = ff.GetFlyweight({brand, model, color});
flyweight.Operation({plates, owner});

// The client code either stores or calculates extrinsic state and passes it
// to the flyweight's methods. 
        
int main()
{ }

FlyweightFactory *factory = new FlyweightFactory({{"Chevrolet", "Camaro2018", "pink"}, {"Mercedes Benz", "C300", "black"}, {"Mercedes Benz", "C500", "red"}, {"BMW", "M5", "red"}, {"BMW", "X6", "white"}});
factory->ListFlyweights();

AddCarToPoliceDatabase(*factory,"CL234IR","James Doe","BMW","M5","red");

AddCarToPoliceDatabase(*factory,"CL234IR","James Doe","BMW","X1","red");

factory->ListFlyweights();
delete factory;

return 0;



[Github](https://www.TheRayCode.com)
