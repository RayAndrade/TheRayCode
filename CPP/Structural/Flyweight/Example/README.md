# TheRayCode
## Flyweight pattern c++

Flyweight is a structural design pattern that lets you fit more objects into the available amount of RAM by sharing common parts of state between multiple objects instead of keeping all of the data in each object.

Let's create a *struct* called **UniqueState**.
```c++
#include <iostream>

struct UniqueState
{
    std::string owner_;
    std::string plates_;

    UniqueState(const std::string &owner, const std::string &plates)
            : owner_(owner), plates_(plates)
    {
    }

    friend std::ostream &operator<<(std::ostream &os, const UniqueState &us)
    {
        return os << "[ " << us.owner_ << " , " << us.plates_ << " ]";
    }
};
```

We create another *struct* we call the **SharedState**.

```c++
#include <iostream>

struct SharedState
{
    std::string brand_;
    std::string model_;
    std::string color_;

    SharedState(const std::string &brand, const std::string &model, const std::string &color)
            : brand_(brand), model_(model), color_(color)
    {
    }

    friend std::ostream &operator<<(std::ostream &os, const SharedState &ss)
    {
        return os << "[ " << ss.brand_ << " , " << ss.model_ << " , " << ss.color_ << " ]";
    }
};
```

The Flyweight stores a common portion of the state (also called intrinsic state) that belongs to multiple real business entities. 
The Flyweight accepts the rest of the state (extrinsic state, unique for each entity) via its method parameters.

Let's create a **Flyweight** *class*

```c++
Flyweight
{
private:
    SharedState *shared_state_;

public:
    Flyweight(const SharedState *shared_state) : shared_state_(new SharedState(*shared_state))
    {
    }
    Flyweight(const Flyweight &other) : shared_state_(new SharedState(*other.shared_state_))
    {
    }
    ~Flyweight()
    {
        delete shared_state_;
    }
    SharedState *shared_state() const
    {
        return shared_state_;
    }
    void Operation(const UniqueState &unique_state) const
    {
        std::cout << "Flyweight: Displaying shared (" << *shared_state_ << ") and unique (" << unique_state << ") state.\n";
    }
};
```

Let's put this in a class we call **FlyweightFactory**.

The Flyweight Factory creates and manages the Flyweight objects. 
It ensures that flyweights are shared correctly. 
When the client requests a flyweight, the factory either returns an existing instance or creates a new one, if it doesn't exist yet.


An unordered_map returns a Flyweight's string hash for a given state.
```c++
#include "Flyweight.h"
#include <unordered_map>

class FlyweightFactory
{
private:
    std::unordered_map<std::string, Flyweight> flyweights_;
    std::string GetKey(const SharedState &ss) const
    {
        return ss.brand_ + "_" + ss.model_ + "_" + ss.color_;
    }

public:
    FlyweightFactory(std::initializer_list<SharedState> share_states)
    {
        for (const SharedState &ss : share_states)
        {
            this->flyweights_.insert(std::make_pair<std::string, Flyweight>(this->GetKey(ss), Flyweight(&ss)));
        }
    }

    /**
     * Returns an existing Flyweight with a given state or creates a new one.
     */
    Flyweight GetFlyweight(const SharedState &shared_state)
    {
        std::string key = this->GetKey(shared_state);
        if (this->flyweights_.find(key) == this->flyweights_.end())
        {
            std::cout << "FlyweightFactory: Can't find a flyweight, creating new one.\n";
            this->flyweights_.insert(std::make_pair(key, Flyweight(&shared_state)));
        }
        else
        {
            std::cout << "FlyweightFactory: Reusing existing flyweight.\n";
        }
        return this->flyweights_.at(key);
    }
    void ListFlyweights() const
    {
        size_t count = this->flyweights_.size();
        std::cout << "\nFlyweightFactory: I have " << count << " flyweights:\n";
        for (std::pair<std::string, Flyweight> pair : this->flyweights_)
        {
            std::cout << pair.first << "\n";
        }
    }
};
```

Let's put this together in the main.cpp.
We add a function called **AddCarToPoliceDatabase**. 
The client code either stores or calculates extrinsic state and passes it to the flyweight's methods.
The client code usually creates a bunch of pre-populated flyweights in the initialization stage of the application.
 
```c++
#include "FlyweightFactory.h"

void AddCarToPoliceDatabase(
        FlyweightFactory &ff, const std::string &plates, const std::string &owner,
        const std::string &brand, const std::string &model, const std::string &color)
{
    std::cout << "\nClient: Adding a car to database.\n";
    const Flyweight &flyweight = ff.GetFlyweight({brand, model, color});
    // The client code either stores or calculates extrinsic state and passes it
    // to the flyweight's methods.
    flyweight.Operation({plates, owner});
}
int main()
{
    FlyweightFactory *factory = new FlyweightFactory({{"Chevrolet", "Camaro2018", "pink"}, 
    				{"Mercedes Benz", "C300", "black"}, {"Mercedes Benz", "C500", "red"}, 
    				{"BMW", "M5", "red"}, {"BMW", "X6", "white"}});
    factory->ListFlyweights();

    AddCarToPoliceDatabase(*factory,
                           "CL234IR",
                           "James Doe",
                           "BMW",
                           "M5",
                           "red");

    AddCarToPoliceDatabase(*factory,
                           "CL234IR",
                           "James Doe",
                           "BMW",
                           "X1",
                           "red");
    factory->ListFlyweights();
    delete factory;

    return 0;
}
```
When we compile and run we get:
```run
FlyweightFactory: I have 5 flyweights:
BMW_M5_red
Mercedes Benz_C500_red
Mercedes Benz_C300_black
BMW_X6_white
Chevrolet_Camaro2018_pink

Client: Adding a car to database.
FlyweightFactory: Reusing existing flyweight.
Flyweight: Displaying shared ([ BMW , M5 , red ]) and unique ([ CL234IR , James Doe ]) state.

Client: Adding a car to database.
FlyweightFactory: Can't find a flyweight, creating new one.
Flyweight: Displaying shared ([ BMW , X1 , red ]) and unique ([ CL234IR , James Doe ]) state.

FlyweightFactory: I have 6 flyweights:
BMW_M5_red
Mercedes Benz_C500_red
Mercedes Benz_C300_black
BMW_X1_red
BMW_X6_white
Chevrolet_Camaro2018_pink
```

The Ray Code is AWESOME!!!

[Wikipedia](https://en.wikipedia.org/wiki/Flyweight_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)







































