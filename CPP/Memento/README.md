# TheRayCode
## Memento pattern c++

We start with createing a class we call the **Memento**

```c++
#include <iostream>

class Memento {
public:
    virtual std::string GetName() const = 0;
    virtual std::string date() const = 0;
    virtual std::string state() const = 0;

};
```

The Originator uses this method when restoring its state.
The rest of the methods are used by the Caretaker to display metadata.

```c++
#include <ctime>
#include "Memento.h"

class SolverMemento : public Memento {
private:
    std::string state_;
    std::string date_;
public:
    SolverMemento(std::string state) : state_(state) {
        this->state_ = state;
        std::time_t now = std::time(0);
        this->date_ = std::ctime(&now);
    }
    std::string state() const override {
        return this->state_;
    }
    std::string GetName() const override {
        return this->date_ + " / (" + this->state_.substr(0, 9) + "...)";
    }
    std::string date() const override {
        return this->date_;
    }
};
```

The Originator's business logic may affect its internal state. 
Therefore, the client should backup the state before launching methods of the business logic via the save() method.
And then **Saves** the current state inside a *memento*.
It also **Restores** the **Originator**'s state from a memento object.

```c++
#include <iostream>
#include "Memento.h"
#include "SolverMemento.h"

class Originator {
private:
    std::string state_;
    std::string GenerateRandomString(int length = 10) {
        const char alphanum[] =
                "0123456789"
                "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                "abcdefghijklmnopqrstuvwxyz";
        int stringLength = sizeof(alphanum) - 1;
        std::string random_string;
        for (int i = 0; i < length; i++) {
            random_string += alphanum[std::rand() % stringLength];
        }
        return random_string;
    }
public:
    Originator(std::string state) : state_(state) {
        std::cout << "Originator: My initial state is: " << this->state_ << "\n";
    }
    void DoSomething() {
        std::cout << "Originator: I'm doing something important.\n";
        this->state_ = this->GenerateRandomString(30);
        std::cout << "Originator: and my state has changed to: " << this->state_ << "\n";
    }
    Memento *Save() {
        return new SolverMemento(this->state_);
    }
    /**
     * Restores the Originator's state from a memento object.
     */
    void Restore(Memento *memento) {
        this->state_ = memento->state();
        std::cout << "Originator: My state has changed to: " << this->state_ << "\n";
    }
};
```
https://github.com/RayAndrade/TheRayCode/blob/main/UMLs/images/Memento/Memento-1.gif
```c++
#include <iostream>
//#include <string>
#include <ctime>
#include <vector>
#include "Memento.h"
#include "Originator.h"

class Caretaker {
private:
    std::vector<Memento *> mementos_;
    Originator *originator_;
public:
    Caretaker(Originator *originator) : originator_(originator) {
        this->originator_ = originator;
    }
    void Backup() {
        std::cout << "\nCaretaker: Saving Originator's state...\n";
        this->mementos_.push_back(this->originator_->Save());
    }
    void Undo() {
        if (!this->mementos_.size()) {
            return;
        }
        Memento *memento = this->mementos_.back();
        this->mementos_.pop_back();
        std::cout << "Caretaker: Restoring state to: " << memento->GetName() << "\n";
        try {
            this->originator_->Restore(memento);
        } catch (...) {
            this->Undo();
        }
    }
    void ShowHistory() const {
        std::cout << "Caretaker: Here's the list of mementos:\n";
        for (Memento *memento : this->mementos_) {
            std::cout << memento->GetName() << "\n";
        }
    }
};
```

```c++
void ClientCode() {
    Originator *originator = new Originator("Super-duper-super-puper-super.");
    Caretaker *caretaker = new Caretaker(originator);
    caretaker->Backup();
    originator->DoSomething();
    caretaker->Backup();
    originator->DoSomething();
    caretaker->Backup();
    originator->DoSomething();
    std::cout << "\n";
    caretaker->ShowHistory();
    std::cout << "\nClient: Now, let's rollback!\n\n";
    caretaker->Undo();
    std::cout << "\nClient: Once more!\n\n";
    caretaker->Undo();

    delete originator;
    delete caretaker;
}
```

```c++
int main() {
    std::srand(static_cast<unsigned int>(std::time(NULL)));
    ClientCode();
    return 0;
}
```


```run
Originator: My initial state is: Super-duper-super-puper-super.

Caretaker: Saving Originator's state...
Originator: I'm doing something important.
Originator: and my state has changed to: j01MCvKXlnNu6gpdpQQA0SaNouXfJm

Caretaker: Saving Originator's state...
Originator: I'm doing something important.
Originator: and my state has changed to: h0mhMwceTLQqDWV29KRYSP02nmuIRD

Caretaker: Saving Originator's state...
Originator: I'm doing something important.
Originator: and my state has changed to: 57BpmVmM8DgY2t4XuCpLkHiiHTUCmu

Caretaker: Here's the list of mementos:
Thu May 27 15:19:41 2021
 / (Super-dup...)
Thu May 27 15:19:41 2021
 / (j01MCvKXl...)
Thu May 27 15:19:41 2021
 / (h0mhMwceT...)

Client: Now, let's rollback!

Caretaker: Restoring state to: Thu May 27 15:19:41 2021
 / (h0mhMwceT...)
Originator: My state has changed to: h0mhMwceTLQqDWV29KRYSP02nmuIRD

Client: Once more!

Caretaker: Restoring state to: Thu May 27 15:19:41 2021
 / (j01MCvKXl...)
Originator: My state has changed to: j01MCvKXlnNu6gpdpQQA0SaNouXfJm
```

The Ray Code is AWESOME!!!

[Wikipedia](https://en.wikipedia.org/wiki/Memento_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)
