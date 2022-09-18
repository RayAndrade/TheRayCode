# TheRayCode
## State pattern c++

The base State class declares methods that all Concrete State should implement and also provides a backreference to the Context object, associated with the State. 
This backreference can be used by States to transition the

locContext to another State.

```php
class locContext;
class State {
protected:
    locContext *context_;

public:
    virtual ~State() {
    }

    void set_context(locContext *context) {
        this->context_ = context;
    }

    virtual void Handle1() = 0;
    virtual void Handle2() = 0;
};
```
The locContext defines the interface of interest to clients. It also maintains a reference to an instance of a State subclass, which represents the current state of the locContext.
State A reference to the current state of the locContext.
 
The locContext allows changing the State object at runtime.
The locContext delegates part of its behavior to the current State object.

```cpp
class locContext {
private:
    State *state_;

public:
    locContext(State *state) : state_(nullptr) {
        this->TransitionTo(state);
    }
    ~locContext() {
        delete state_;
    }
    void TransitionTo(State *state) {
        std::cout << "locContext: Transition to " << typeid(*state).name() << ".\n";
        if (this->state_ != nullptr)
            delete this->state_;
        this->state_ = state;
        this->state_->set_context(this);
    }
    void Request1() {
        this->state_->Handle1();
    }
    void Request2() {
        this->state_->Handle2();
    }
};
```
Concrete States implement various behaviors, associated with a state of the locContext.
```c++
#include "State.h"

class ConcreteStateA : public State {
public:
    void Handle1() override;
    void Handle2() override {
        std::cout << "ConcreteStateA handles request2.\n";
    }
};
```


```c++
#include "State.h"
class ConcreteStateB : public State {
public:
    void Handle1() override {
        std::cout << "ConcreteStateB handles request1.\n";
    }
    void Handle2() override {
        std::cout << "ConcreteStateB handles request2.\n";
        std::cout << "ConcreteStateB wants to change the state of the context.\n";
        this->context_->TransitionTo(new ConcreteStateA);
    }
};
```

We put this all together in the main.cpp.
We also add some client code
```c++
#include "Context.h"
#include "ConcreteStateA.h"
#include "ConcreteStateB.h"

void ConcreteStateA::Handle1() {
    {
        std::cout << "ConcreteStateA handles request1.\n";
        std::cout << "ConcreteStateA wants to change the state of the context.\n";
        this->context_->TransitionTo(new ConcreteStateB);
    }
}
void ClientCode() {
    locContext *context = new locContext(new ConcreteStateA);
    context->Request1();
    context->Request2();
    delete context;
}

int main() {
    ClientCode();
    return 0;
}
```
Now when we veiw it through a browser we see.
```run
locContext: Transition to 14ConcreteStateA.
ConcreteStateA handles request1.
ConcreteStateA wants to change the state of the context.
locContext: Transition to 14ConcreteStateB.
ConcreteStateB handles request2.
ConcreteStateB wants to change the state of the context.
locContext: Transition to 14ConcreteStateA.
```
[Wikipedia](https://en.wikipedia.org/wiki/State_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)
