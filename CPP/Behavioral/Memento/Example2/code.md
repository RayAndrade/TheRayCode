What does this code do that I have added to the end of this prompt written in c++? Explain each class and method: this code should be an example of the Memento design pattern


**Memento.H**

```
#include <iostream>

class Memento {

public:
    virtual std::string GetName() const = 0;
    virtual std::string date() const = 0;
    virtual std::string state() const = 0;

};
```

**SolverMemento.h**

```
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
    /**
     * The Originator uses this method when restoring its state.
     */
    std::string state() const override {
        return this->state_;
    }
    /**
     * The rest of the methods are used by the Caretaker to display metadata.
     */
    std::string GetName() const override {
        return this->date_ + " / (" + this->state_.substr(0, 9) + "...)";
    }
    std::string date() const override {
        return this->date_;
    }

};
```

**Caretaker.h**

```
Caretaker {

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

**main.cpp**

```
#include <iostream>
#include <string>
#include "Originator.h"
#include "Caretaker.h"


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

int main() {
    std::srand(static_cast<unsigned int>(std::time(NULL)));
    ClientCode();
    std::cout << "The Ray Code is AWESOME!!!" << std::endl;
    return 0;
}

```


