# TheRayCode
## Strategy pattern c++

```c++
#include <string>
#include <vector>

class Strategy {
public:
    virtual ~Strategy() {}
    virtual std::string DoAlgorithm(const std::vector<std::string> &data) const = 0;
};
```

The Context maintains a reference to one of the Strategy objects. 
The Context does not know the concrete class of a strategy. 
It should work with all strategies via the Strategy interface.
Usually, the Context accepts a strategy through the constructor, but also provides a setter to change it at runtime.
The Context delegates some work to the Strategy object instead of implementing +multiple versions of the algorithm on its own.
Usually, the Context allows replacing a Strategy object at runtime.

```c++
#include <iostream>
#include "Strategy.h"

//The Context defines the interface of interest to clients.
class Context {

private:
    Strategy *strategy_;

public:

     Context(Strategy *strategy = nullptr) : strategy_(strategy)
    {
    }
    ~Context()
    {
        delete this->strategy_;
    }

    void set_strategy(Strategy *strategy)
    {
        delete this->strategy_;
        this->strategy_ = strategy;
    }

    void DoSomeBusinessLogic() const
    {
        std::cout << "Context: Sorting data using the strategy (not sure how it'll do it)\n";
        std::string result = this->strategy_->DoAlgorithm(std::vector<std::string>{"a", "e", "c", "b", "d"});
        std::cout << result << "\n";
    }
};
```

```c++
#include <iostream>
#include <algorithm>
#include "Strategy.h"

class ConcreteStrategyA : public Strategy {
public:
    std::string DoAlgorithm(const std::vector<std::string> &data) const override
    {
        std::string result;
        std::for_each(std::begin(data), std::end(data), [&result](const std::string &letter) {
            result += letter;
        });
        std::sort(std::begin(result), std::end(result));

        return result;
    }
};
```

```c++
#include <iostream>
#include <algorithm>
#include "Strategy.h"

class ConcreteStrategyB  : public Strategy {
    std::string DoAlgorithm(const std::vector<std::string> &data) const override
    {
        std::string result;
        std::for_each(std::begin(data), std::end(data), [&result](const std::string &letter) {
            result += letter;
        });
        std::sort(std::begin(result), std::end(result));
        for (int i = 0; i < result.size() / 2; i++)
        {
            std::swap(result[i], result[result.size() - i - 1]);
        }
        return result;
    }
};
```

```c++
#include <iostream>
#include "Context.h"
#include "ConcreteStrategyA.h"
#include "ConcreteStrategyB.h"
void ClientCode()
{
    Context *context = new Context(new ConcreteStrategyA);
    std::cout << "Client: Strategy is set to normal sorting."<< std::endl;
    context->DoSomeBusinessLogic();
    std::cout << std::endl;
    std::cout << "Client: Strategy is set to reverse sorting."<< std::endl;
    context->set_strategy(new ConcreteStrategyB);
    context->DoSomeBusinessLogic();
    delete context;
}


int main()
{
    ClientCode();
    std::cout << std::endl;
    std::cout << "Welcome to The Ray Code...Be Good!" << std::endl;
    return 0;
}
```

``` run
Client: Strategy is set to normal sorting.
Context: Sorting data using the strategy (not sure how it'll do it)
abcde

Client: Strategy is set to reverse sorting.
Context: Sorting data using the strategy (not sure how it'll do it)
edcba

Welcome to The Ray Code...Be Good!
```

[Wikipedia](https://en.wikipedia.org/wiki/Strategy_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)
