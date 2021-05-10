# TheRayCode
## Command pattern c++

The Command interface declares a method for executing a command.
Command.h
```c++
class Command {
public:
    virtual ~Command() {
    }
    virtual void Execute() const = 0;
};
```

Some commands can implement simple operations on their own.
```c++
class SimpleCommand : public Command {
private:
    std::string pay_load_;

public:
    explicit SimpleCommand(std::string pay_load) : pay_load_(pay_load) {
    }
    void Execute() const override {
        std::cout << "SimpleCommand: does the request (" << this->pay_load_ << ")\n";
    }
};
```

The Receiver classes contain some important business logic. 
They know how to perform all kinds of operations, associated with carrying out a request. 
In fact, any class may serve as a Receiver.
```c++
class Receiver {
public:
    void DoWork(const std::string &a) {
        std::cout << "Receiver: Working on (" << a << ".)\n";
    }
    void DoSomeMoreWork(const std::string &b) {
        std::cout << "Receiver: Also working on (" << b << ".)\n";
    }
};
```
However, some commands can delegate more complex operations to other objects, called "receivers."
Context data, required for launching the receiver's methods.
Complex commands can accept one or several receiver objects along with any context data via the constructor.
Commands can delegate to any methods of a receiver.

```c++
class ComplexCommand : public Command {
    /**
     * @var Receiver
     */
private:
    Receiver *receiver_;
    std::string a_;
    std::string b_;
public:
    ComplexCommand(Receiver *receiver, std::string a, std::string b) : receiver_(receiver), a_(a), b_(b) {
    }
    void Execute() const override {
        std::cout << "ComplexCommand: Complex stuff should be done by a receiver object.\n";
        this->receiver_->DoWork(this->a_);
        this->receiver_->DoSomeMoreWork(this->b_);
    }
};
```
The Invoker is associated with one or several commands. 
It sends a request to the command.
Initialize commands.
The Invoker does not depend on concrete command or receiver classes. 
The Invoker passes a request to a receiver indirectly, by executing a command.


```c++
class Invoker {
private:
    Command *on_start_;
    Command *on_finish_;
public:
    ~Invoker() {
        delete on_start_;
        delete on_finish_;
    }

    void SetOnStart(Command *command) {
        this->on_start_ = command;
    }
    void SetOnFinish(Command *command) {
        this->on_finish_ = command;
    }
    void DoSomethingImportant() {
        std::cout << "Invoker: Makes a request\n";
        if (this->on_start_) {
            this->on_start_->Execute();
        }
        std::cout << "Invoker: .does the action...\n";
        std::cout << "Invoker: Makes another request\n";
        if (this->on_finish_) {
            this->on_finish_->Execute();
        }
    }
};
```

we put it all together in the main method.
The client code can parameterize an invoker with any commands.

```c++
int main() {
    Invoker *invoker = new Invoker;
    invoker->SetOnStart(new SimpleCommand("Say Hi!"));
    Receiver *receiver = new Receiver;
    invoker->SetOnFinish(new ComplexCommand(receiver, "Send email", "Save report"));
    invoker->DoSomethingImportant();

    delete invoker;
    delete receiver;
    return 0;
}
```
When we compile and run we should get:
```c++
Invoker: Makes a request
SimpleCommand: does the request (Say Hi!)
Invoker: .does the action...
Invoker: Makes another request
ComplexCommand: Complex stuff should be done by a receiver object.
Receiver: Working on (Send email.)
Receiver: Also working on (Save report.)
```

The Ray Code is AWESOME!!!



[Wikipedia](https://en.wikipedia.org/wiki/Command_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)
