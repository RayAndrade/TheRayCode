[up](../README.md)

Creating an example using the Abstract Factory design pattern in C++ involves several steps. The Abstract Factory pattern provides an interface for creating families of related or dependent objects without specifying their concrete classes. In this scenario, we'll be creating an abstract factory for different comic book publishers: Dark Horse Comics, Marvel Comics, and DC Comics. Each publisher will have its own set of superheroes.

Here is how we can structure the project:

1. **Superhero.h**: This will be an abstract class representing a generic superhero.
2. **DarkHorseSuperhero.h, MarvelSuperhero.h, DCSuperhero.h**: These will be concrete classes derived from `Superhero`, representing superheroes from each publisher.
3. **ComicFactory.h**: This will be an abstract class defining the interface for creating superheroes.
4. **DarkHorseFactory.h, MarvelFactory.h, DCFactory.h**: These will implement the `ComicFactory` interface to create publisher-specific superheroes.
5. **main.cpp**: This file will use the factories to create superheroes and demonstrate the Abstract Factory pattern.

### Superhero.h

```cpp
#ifndef SUPERHERO_H
#define SUPERHERO_H

#include <string>

// Abstract base class for a superhero
class Superhero {
public:
    virtual ~Superhero() {}
    virtual std::string getName() const = 0;
};

#endif // SUPERHERO_H
```

This class defines an interface for superhero objects with a method `getName` which will be implemented by concrete superheroes to return their names.

### DarkHorseSuperhero.h

```cpp
#ifndef DARKHORSESUPERHERO_H
#define DARKHORSESUPERHERO_H

#include "Superhero.h"

// Concrete superhero from Dark Horse Comics
class DarkHorseSuperhero : public Superhero {
private:
    std::string name;
public:
    DarkHorseSuperhero(const std::string& heroName) : name(heroName) {}
    std::string getName() const override {
        return name + " from Dark Horse Comics";
    }
};

#endif // DARKHORSESUPERHERO_H
```

This class is a concrete implementation for a Dark Horse superhero, providing the `getName` method which includes the publisher name.

### MarvelSuperhero.h

```cpp
#ifndef MARVELSUPERHERO_H
#define MARVELSUPERHERO_H

#include "Superhero.h"

// Concrete superhero from Marvel Comics
class MarvelSuperhero : public Superhero {
private:
    std::string name;
public:
    MarvelSuperhero(const std::string& heroName) : name(heroName) {}
    std::string getName() const override {
        return name + " from Marvel Comics";
    }
};

#endif // MARVELSUPERHERO_H
```

Similar to `DarkHorseSuperhero`, but for Marvel superheroes.

### DCSuperhero.h

```cpp
#ifndef DCSUPERHERO_H
#define DCSUPERHERO_H

#include "Superhero.h"

// Concrete superhero from DC Comics
class DCSuperhero : public Superhero {
private:
    std::string name;
public:
    DCSuperhero(const std::string& heroName) : name(heroName) {}
    std::string getName() const override {
        return name + " from DC Comics";
    }
};

#endif // DCSUPERHERO_H
```

Similar to the other superhero classes, but for DC superheroes.

### ComicFactory.h

```cpp
#ifndef COMICFACTORY_H
#define COMICFACTORY_H

#include "Superhero.h"

// Abstract factory for creating superheroes
class ComicFactory {
public:
    virtual ~ComicFactory() {}
    virtual Superhero* createSuperhero(const std::string& name) = 0;
};

#endif // COMICFACTORY_H
```

The `ComicFactory` defines the method `createSuperhero` that the concrete factories will implement to create superhero objects.

### DarkHorseFactory.h

```cpp
#ifndef DARKHORSEFACTORY_H
#define DARKHORSEFACTORY_H

#include "ComicFactory.h"
#include "DarkHorseSuperhero.h"

// Concrete factory for creating Dark Horse superheroes
class DarkHorseFactory : public ComicFactory {
public:
    Superhero* createSuperhero(const std::string& name) override {
        return new DarkHorseSuperhero(name);
    }
};

#endif // DARKHORSEFACTORY_H
```

This class is a concrete factory for creating Dark Horse superheroes.

### MarvelFactory.h

```cpp
#ifndef MARVELFACTORY_H
#define MARVELFACTORY_H

#include "ComicFactory.h"
#include "MarvelSuperhero.h"

// Concrete factory for creating Marvel superheroes
class MarvelFactory : public ComicFactory {
public:
    Superhero* createSuperhero(const std::string& name) override {
        return new MarvelSuperhero(name);
    }
};

#endif // MARVELFACTORY_H
```

This is the Marvel concrete factory.

### DCFactory.h

```cpp
#ifndef DCFACTORY_H


#define DCFACTORY_H

#include "ComicFactory.h"
#include "DCSuperhero.h"

// Concrete factory for creating DC superheroes
class DCFactory : public ComicFactory {
public:
    Superhero* createSuperhero(const std::string& name) override {
        return new DCSuperhero(name);
    }
};

#endif // DCFACTORY_H
```

This is the DC concrete factory.

### main.cpp

```cpp
#include <iostream>
#include <memory>
#include "DarkHorseFactory.h"
#include "MarvelFactory.h"
#include "DCFactory.h"

int main() {
    // Factory for Dark Horse Comics
    std::unique_ptr<ComicFactory> darkHorseFactory = std::make_unique<DarkHorseFactory>();
    std::unique_ptr<Superhero> darkHorseHero(darkHorseFactory->createSuperhero("Hellboy"));
    
    // Factory for Marvel Comics
    std::unique_ptr<ComicFactory> marvelFactory = std::make_unique<MarvelFactory>();
    std::unique_ptr<Superhero> marvelHero(marvelFactory->createSuperhero("Spider-Man"));
    
    // Factory for DC Comics
    std::unique_ptr<ComicFactory> dcFactory = std::make_unique<DCFactory>();
    std::unique_ptr<Superhero> dcHero(dcFactory->createSuperhero("Batman"));
    
    // Output the superheroes
    std::cout << darkHorseHero->getName() << std::endl;
    std::cout << marvelHero->getName() << std::endl;
    std::cout << dcHero->getName() << std::endl;

    return 0;
}
```

This `main` function creates three superhero factories, one for each comic publisher, and uses them to create a superhero from each publisher. It then prints out the names of these superheroes.

### Running the code

When you compile and run the `main.cpp` file, you should see the following output:

```
Hellboy from Dark Horse Comics
Spider-Man from Marvel Comics
Batman from DC Comics
```

Each superhero name is accompanied by the name of their respective publisher, demonstrating that different factories are creating different types of superhero objects.
