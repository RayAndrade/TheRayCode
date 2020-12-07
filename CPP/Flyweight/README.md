# TheRayCode
TheRayCode PHP 
# TheRayCode

SharedState

**UniqueState.h**

**Flyweight.h**

```cpp
#include "SharedState.h"
#include "UniqueState.h"
```

```cpp
class Flyweight
{ };
```

``javascript
private:
```

```cpp
    SharedState *shared_state_;
```

``javascript
public:
```

``javascript
    Flyweight(const SharedState *shared_state) : shared_state_(new SharedState(*shared_state))
    {
    }
```

```cpp
 Flyweight(const Flyweight &other) : shared_state_(new SharedState(*other.shared_state_))
 {  }
```

```cpp
    ~Flyweight()
    {
        delete shared_state_;
    }
```

```cpp
  SharedState *shared_state() const
    {
        return shared_state_;
    }
```

```cpp
void Operation(const UniqueState &unique_state) const
{
   std::cout << "Flyweight: Displaying shared (" << *shared_state_ << ") and unique (" << unique_state << ") state.\n";
}
```

**FlyweightFactory.h**

```javascript
#include "Flyweight.h"
#include <unordered_map>
```
```cpp
class FlyweightFactory
{ }
```
```cpp
/**
 * @var Flyweight[]
 */
```

```cpp
private:
    std::unordered_map<std::string, Flyweight> flyweights_;
```    
Returns a Flyweight's string hash for a given state.

```cpp
std::string GetKey(const SharedState &ss) const
{
   return ss.brand_ + "_" + ss.model_ + "_" + ss.color_;
}
```

```cpp
public:

```cpp```
FlyweightFactory(std::initializer_list<SharedState> share_states)
{ }
```
```cpp
for (const SharedState &ss : share_states)
        {
            this->flyweights_.insert(std::make_pair<std::string, Flyweight>(this->GetKey(ss), Flyweight(&ss)));
        }
    }
```    
Returns an existing Flyweight with a given state or creates a new one.

```cpp
Flyweight GetFlyweight(const SharedState &shared_state)
{ }
```
```cpp
std::string key = this->GetKey(shared_state);
```
```cpp
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
```
```cpp
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



**main.cpp**

```cpp
#include "FlyweightFactory.h"
```

```cpp
void AddCarToPoliceDatabase(
FlyweightFactory &ff, const std::string &plates, const std::string &owner,
const std::string &brand, const std::string &model, const std::string &color)
        
{ }
```

```cpp
std::cout << "\nClient: Adding a car to database.\n";
const Flyweight &flyweight = ff.GetFlyweight({brand, model, color});
flyweight.Operation({plates, owner});
```

The client code either stores or calculates extrinsic state and passes it to the flyweight's methods. 

```cpp
int main()
{ }
```
```cpp
FlyweightFactory *factory = new FlyweightFactory({{"Chevrolet", "Camaro2018", "pink"}, {"Mercedes Benz", "C300", "black"}, {"Mercedes Benz", "C500", "red"}, {"BMW", "M5", "red"}, {"BMW", "X6", "white"}});
factory->ListFlyweights();
```
```cpp
AddCarToPoliceDatabase(*factory,"CL234IR","James Doe","BMW","M5","red");
AddCarToPoliceDatabase(*factory,"CL234IR","James Doe","BMW","X1","red");
```
```cpp
factory->ListFlyweights();
delete factory;
```
```cpp
return 0;
```


[Github](https://www.TheRayCode.com)
