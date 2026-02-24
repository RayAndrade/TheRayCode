[script](script/page01.md) [up](../README.md)

This C++ code is an implementation of the Abstract Factory design pattern, which is used to create families of related or dependent objects without specifying their concrete classes. Here's a breakdown of each .h (header) file and their roles within this pattern:

### Meal.h
This file declares an abstract base class `Meal`. It has a pure virtual function `getName()` which will be overridden by concrete classes to return the name of the meal.

- `Meal`: Abstract base class, cannot be instantiated directly. It serves as a contract for subclasses to implement the `getName()` method.



**Meal.h**
```cpp
#include <string>

// Abstract base class for a meal
class Meal {
public:
    virtual ~Meal() {}
    virtual std::string getName() const = 0; // Returns the name of the meal
};
```
### Breakfast.h, Lunch.h, Dinner.h, Dessert.h
Each of these files declares a concrete class that inherits from `Meal`. They each override the `getName()` method to return the specific name of the meal they represent.

- `Breakfast`, `Lunch`, `Dinner`, `Dessert`: Concrete classes that provide implementations for the `getName()` function inherited from `Meal`, returning the strings "Breakfast", "Lunch", "Dinner", and "Dessert" respectively.


**Breakfast.h**
```cpp
#include "Meal.h"

// Concrete class for Breakfast
class Breakfast : public Meal {
public:
    std::string getName() const override {
        return "Breakfast";
    }
};
```
**Lunch.h**
```cpp
#include "Meal.h"

// Concrete class for Breakfast
class Lunch : public Meal {
public:
    std::string getName() const override {
        return "Lunch";
    }
};
```
**Dinner.h**
```cpp
#include "Meal.h"

// Concrete class for Breakfast
class Dinner : public Meal {
public:
    std::string getName() const override {
        return "Dinner";
    }
};
```
**Dessert.h**
```cpp
#include "Meal.h"

// Concrete class for Breakfast
class Dessert : public Meal {
public:
    std::string getName() const override {
        return "Dessert";
    }
};
```
### MealFactory.h
This file defines an abstract factory interface with a pure virtual function `createMeal()`. This function is meant to be overridden by concrete factory classes to create specific meal objects.

- `MealFactory`: Abstract factory class, defines a method `createMeal()` which will be implemented by its subclasses to create objects of type `Meal`.



**MealFactory.h**
```cpp
#include "Meal.h"

// Abstract Factory for meals
class MealFactory {
public:
    virtual ~MealFactory() {}
    virtual Meal* createMeal() const = 0; // Creates a meal, to be implemented by concrete factories
};
```
### BreakfastFactory.h, LunchFactory.h, DinnerFactory.h, DessertFactory.h
These files each define a concrete factory class that inherits from `MealFactory`. They override the `createMeal()` method to create and return a new instance of their corresponding meal type.

- `BreakfastFactory`, `LunchFactory`, `DinnerFactory`, `DessertFactory`: Concrete factories that implement the `createMeal()` function, creating and returning a new instance of `Breakfast`, `Lunch`, `Dinner`, and `Dessert`, respectively.

### main.cpp
This is the main program file where the concrete factories are used to create meal objects. The `main()` function does the following:

1. Creates instances of the concrete factories.
2. Uses these factories to create meal objects.
3. Outputs the names of the created meals.
4. Cleans up by deleting the dynamically allocated meal objects to prevent memory leaks.

The output "1) Breakfast 2) Lunch 3) Dinner 4) Dessert" is produced by calling the `getName()` method on each of the created meal objects.

### Notes on the Implementation
- The `Meal` class defines an interface for the products that are being created.
- The `MealFactory` class defines an interface for the factories that create these products.
- The concrete factory classes (`BreakfastFactory`, `LunchFactory`, `DinnerFactory`, `DessertFactory`) implement the factory interface to create concrete products.
- In the `main()` function, factory objects are used to create product objects without specifying the exact class of object that will be created.

This code effectively demonstrates the Abstract Factory pattern by decoupling the creation of objects from their implementation, allowing for flexibility and scalability in the codebase. If a new meal type needs to be added, one can simply create a new concrete class for the meal and a corresponding factory without modifying existing code.


**ConcreteMealFactory.h**
```cpp
#include "MealFactory.h"
#include "Breakfast.h"
#include "Lunch.h"
#include "Dinner.h"
#include "Dessert.h"

// Concrete factory for Breakfast
class BreakfastFactory : public MealFactory {
public:
    Meal* createMeal() const override {
        return new Breakfast();
    }
};
```
**BreakfastFactory.h**
```cpp
#include "MealFactory.h"
#include "Breakfast.h"
#include "Lunch.h"
#include "Dinner.h"
#include "Dessert.h"

// Concrete factory for Breakfast
class BreakfastFactory : public MealFactory {
public:
    Meal* createMeal() const override {
        return new Breakfast();
    }
};
```
**LunchFactory.h**
```cpp
#include "MealFactory.h"
#include "Breakfast.h"
#include "Lunch.h"
#include "Dinner.h"
#include "Dessert.h"

// Concrete factory for Breakfast
class LunchFactory : public MealFactory {
public:
    Meal* createMeal() const override {
        return new Lunch();
    }
};
```
**DinnerFactory.h**
```cpp
#include "MealFactory.h"
#include "Breakfast.h"
#include "Lunch.h"
#include "Dinner.h"
#include "Dessert.h"

// Concrete factory for Breakfast
class DinnerFactory : public MealFactory {
public:
    Meal* createMeal() const override {
        return new Dinner();
    }
};
```
**DessertFactory.h**
```cpp
#include "MealFactory.h"
#include "Breakfast.h"
#include "Lunch.h"
#include "Dinner.h"
#include "Dessert.h"

// Concrete factory for Dessert
class DessertFactory : public MealFactory {
public:
    Meal* createMeal() const override {
        return new Dessert();
    }
};
```
**main.cpp**
```cpp
#include <iostream>
#include "ConcreteMealFactory.h"
#include "LunchFactory.h"
#include "DinnerFactory.h"
#include "DessertFactory.h"
//#include "ConcreteMealFactory.h"

int main() {
    // Create concrete factories
    BreakfastFactory breakfastFactory;
    LunchFactory lunchFactory;
    DinnerFactory dinnerFactory;
    DessertFactory dessertFactory;

    // Create meals using the factories
    Meal* breakfast = breakfastFactory.createMeal();
    Meal* lunch = lunchFactory.createMeal();
    Meal* dinner = dinnerFactory.createMeal();
    Meal* dessert = dessertFactory.createMeal();

    // Output the names of the meals
    std::cout << "1) " << breakfast->getName() << std::endl;
    std::cout << "2) " << lunch->getName() << std::endl;
    std::cout << "3) " << dinner->getName() << std::endl;
    std::cout << "4) " << dessert->getName() << std::endl;

    // Cleanup
    delete breakfast;
    delete lunch;
    delete dinner;
    delete dessert;
    return 0;
}
```
result
```run
1) Breakfast
2) Lunch
3) Dinner
4) Dessert
```
****
```
project(beginning)

set(CMAKE_CXX_STANDARD 17)

add_executable(beginning main.cpp
        Meal.h
        Breakfast.h
        Lunch.h
        Dinner.h
        Dessert.h
        MealFactory.h
        BreakfastFactory.h
        LunchFactory.h
        DinnerFactory.h
        DessertFactory.h
        ConcreteMealFactory.h)
```
