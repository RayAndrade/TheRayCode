//
// Created by ray on 9/12/20.
//

#ifndef STRATEGY_CONTEXT_H
#define STRATEGY_CONTEXT_H
#include <iostream>
#include "Strategy.h"

//The Context defines the interface of interest to clients.
class Context {

    /**
     * @var Strategy The Context maintains a reference to one of the Strategy
     * objects. The Context does not know the concrete class of a strategy. It
     * should work with all strategies via the Strategy interface.
     */

private:
    Strategy *strategy_;
    /**
    * Usually, the Context accepts a strategy through the constructor, but also
    * provides a setter to change it at runtime.
    */

public:

     Context(Strategy *strategy = nullptr) : strategy_(strategy)
    {
    }
    ~Context()
    {
        delete this->strategy_;
    }

    /**
     * Usually, the Context allows replacing a Strategy object at runtime.
     */
    void set_strategy(Strategy *strategy)
    {
        delete this->strategy_;
        this->strategy_ = strategy;
    }
    /**
    * The Context delegates some work to the Strategy object instead of
    * implementing +multiple versions of the algorithm on its own.
    */



    void DoSomeBusinessLogic() const
    {
        // ...
        std::cout << "Context: Sorting data using the strategy (not sure how it'll do it)\n";
        std::string result = this->strategy_->DoAlgorithm(std::vector<std::string>{"a", "e", "c", "b", "d"});
        std::cout << result << "\n";
        // ...
    }
};


#endif //STRATEGY_CONTEXT_H
