[up](../README.md)

The Abstract Factory pattern provides an interface for creating families of related or dependent objects without specifying their concrete classes. Below is an example of how to implement the Abstract Factory pattern for a scenario involving domestic and wild animals, specifically dogs and cats.

In this example, we'll create an abstract factory called `AnimalFactory` that defines methods for creating dogs and cats. We'll then implement two concrete factories: `DomesticAnimalFactory` and `WildAnimalFactory`, each producing domestic and wild versions of dogs and cats, respectively.

### Class Structure Overview
1. `Animal` - Base class for all animals
2. `Dog` and `Cat` - Abstract classes representing the generic type of animals
3. `Poodle`, `Collie`, `Shepherd` - Concrete classes representing domestic dogs
4. `Hyena`, `Wolf`, `Fox` - Concrete classes representing wild dogs
5. `DomesticCat`, `Siamese`, `Persian` - Concrete classes representing domestic cats
6. `Lion`, `Tiger`, `Cheetah` - Concrete classes representing wild cats
7. `AnimalFactory` - Abstract factory interface with methods `createDog()` and `createCat()`
8. `DomesticAnimalFactory` and `WildAnimalFactory` - Concrete factories to create domestic and wild animals
9. `main.cpp` - The main driver of the program demonstrating the use of abstract factory

### File Structure
Each class will be in its own header file, named accordingly (e.g., `Dog.h`, `AnimalFactory.h`, etc.). The implementation of these classes would be in separate `.cpp` files, which are not included here but should be created by following the class definitions in the header files.

### Step-by-Step Class Definitions
Here's how we can break down the files and their contents.

#### Animal.h
```cpp
#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

// Abstract class for all animals
class Animal {
public:
    virtual ~Animal() {}
    virtual std::string makeSound() const = 0;
    virtual std::string getName() const = 0;
};

#endif // ANIMAL_H
```

#### Dog.h
```cpp
#ifndef DOG_H
#define DOG_H

#include "Animal.h"

// Abstract Dog class
class Dog : public Animal {};

#endif // DOG_H
```

#### Cat.h
```cpp
#ifndef CAT_H
#define CAT_H

#include "Animal.h"

// Abstract Cat class
class Cat : public Animal {};

#endif // CAT_H
```

#### Poodle.h
```cpp
#ifndef POODLE_H
#define POODLE_H

#include "Dog.h"

// Concrete class for Poodle, a domestic dog
class Poodle : public Dog {
public:
    std::string makeSound() const override {
        return "Woof! I'm a Poodle!";
    }
    std::string getName() const override {
        return "Poodle";
    }
};

#endif // POODLE_H
```
Similarly, you would create header files for `Collie.h` and `Shepherd.h`.

#### Hyena.h
```cpp
#ifndef HYENA_H
#define HYENA_H

#include "Dog.h"

// Concrete class for Hyena, a wild dog
class Hyena : public Dog {
public:
    std::string makeSound() const override {
        return "Laugh! I'm a Hyena!";
    }
    std::string getName() const override {
        return "Hyena";
    }
};

#endif // HYENA_H
```
Again, `Wolf.h` and `Fox.h` would be similar.

#### DomesticCat.h
```cpp
#ifndef DOMESTICCAT_H
#define DOMESTICCAT_H

#include "Cat.h"

// Concrete class for a generic Domestic Cat
class DomesticCat : public Cat {
public:
    std::string makeSound() const override {
        return "Meow! I'm a Domestic Cat!";
    }
    std::string getName() const override {
        return "Domestic Cat";
    }
};

#endif // DOMESTICCAT_H
```
You would have similar header files for `Siamese.h` and `Persian.h`.

#### Lion.h
```cpp
#ifndef LION_H
#define LION_H

#include "Cat.h"

// Concrete class for Lion, a wild cat
class Lion : public Cat {
public:
    std::string makeSound() const override {
        return "Roar! I'm a Lion!";
    }
    std::string getName() const override {
        return "Lion";
    }
};

#endif // LION_H
```
Similarly, `Tiger.h` and `Cheetah.h` would be crafted.

#### AnimalFactory.h
```cpp
#ifndef ANIMALFACTORY_H
#define ANIMALFACTORY_H

#include "Dog.h"
#include "Cat.h"

// Abstract Factory
class AnimalFactory {
public:
    virtual Dog* createDog() const

 = 0;
    virtual Cat* createCat() const = 0;
    virtual ~AnimalFactory() {}
};

#endif // ANIMALFACTORY_H
```

#### DomesticAnimalFactory.h
```cpp
#ifndef DOMESTICANIMALFACTORY_H
#define DOMESTICANIMALFACTORY_H

#include "AnimalFactory.h"
#include "Poodle.h"
#include "Collie.h"
#include "Shepherd.h"
#include "DomesticCat.h"

// Concrete Factory for Domestic Animals
class DomesticAnimalFactory : public AnimalFactory {
public:
    Dog* createDog() const override {
        // Can be randomized or modified to return different types of domestic dogs
        return new Poodle();
    }
    
    Cat* createCat() const override {
        // Can be randomized or modified to return different types of domestic cats
        return new DomesticCat();
    }
};

#endif // DOMESTICANIMALFACTORY_H
```

#### WildAnimalFactory.h
```cpp
#ifndef WILDANIMALFACTORY_H
#define WILDANIMALFACTORY_H

#include "AnimalFactory.h"
#include "Hyena.h"
#include "Wolf.h"
#include "Fox.h"
#include "Lion.h"

// Concrete Factory for Wild Animals
class WildAnimalFactory : public AnimalFactory {
public:
    Dog* createDog() const override {
        // Can be randomized or modified to return different types of wild dogs
        return new Hyena();
    }
    
    Cat* createCat() const override {
        // Can be randomized or modified to return different types of wild cats
        return new Lion();
    }
};

#endif // WILDANIMALFACTORY_H
```

#### main.cpp
```cpp
#include <iostream>
#include <memory>
#include "DomesticAnimalFactory.h"
#include "WildAnimalFactory.h"

int main() {
    // Create a domestic animal factory
    std::unique_ptr<AnimalFactory> domesticFactory = std::make_unique<DomesticAnimalFactory>();
    
    // Create domestic animals
    std::unique_ptr<Dog> domesticDog(domesticFactory->createDog());
    std::unique_ptr<Cat> domesticCat(domesticFactory->createCat());
    
    // Interact with domestic animals
    std::cout << domesticDog->makeSound() << " I am a " << domesticDog->getName() << std::endl;
    std::cout << domesticCat->makeSound() << " I am a " << domesticCat->getName() << std::endl;

    // Create a wild animal factory
    std::unique_ptr<AnimalFactory> wildFactory = std::make_unique<WildAnimalFactory>();
    
    // Create wild animals
    std::unique_ptr<Dog> wildDog(wildFactory->createDog());
    std::unique_ptr<Cat> wildCat(wildFactory->createCat());
    
    // Interact with wild animals
    std::cout << wildDog->makeSound() << " I am a " << wildDog->getName() << std::endl;
    std::cout << wildCat->makeSound() << " I am a " << wildCat->getName() << std::endl;

    return 0;
}
```

### Order of Creation
1. Create the abstract base classes `Animal`, `Dog`, and `Cat`.
2. Define the concrete classes for the specific animals (e.g., `Poodle`, `Hyena`, `DomesticCat`, `Lion`, etc.).
3. Define the `AnimalFactory` interface.
4. Implement the concrete factories `DomesticAnimalFactory` and `WildAnimalFactory`.
5. Create the `main.cpp` to demonstrate the usage of the factories.

### Expected Output
When you run the `main.cpp`, you should see output like the following, although the specific types of domestic and wild animals may vary if you implement a random selection in the factories:

```
Woof! I'm a Poodle! I am a Poodle
Meow! I'm a Domestic Cat! I am a Domestic Cat
Laugh! I'm a Hyena! I am a Hyena
Roar! I'm a Lion! I am a Lion
```

Each concrete animal's `makeSound` and `getName` methods will be invoked, demonstrating polymorphism and the Abstract Factory design pattern in action.
