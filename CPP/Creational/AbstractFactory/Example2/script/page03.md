[home](./page01.md) | [back](./page02.md) | [next](./page04.md)

**Step 1: Determine the Structure**

First, decide on the common products that the factories will create.

For a food-themed example, we might have an abstract base class for Meal and derive classes like Breakfast, Lunch, Dinner, and Dessert from it.

Each type of meal might have different implementations depending on the cuisine or style, so these variations will be the concrete products created by the concrete factories.

For this project, you'd have the following files:

**Meal.h**: Contains the abstract base class for the meals.

**Breakfast.h**, **Lunch.h**, **Dinner.h**, **Dessert.h**: These are concrete classes that inherit from Meal and implement its virtual functions.

**MealFactory.h**: This is the abstract factory base class.

**ConcreteMealFactory**.h: These are concrete factories for each meal type, implementing the abstract factory's methods.

**main.cpp**: This file will demonstrate the use of the factories to create different meals.


[page 4](./page04.md)
