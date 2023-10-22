[home](./page01.md)

[back](./page14.md)

**main.cpp**: This file will demonstrate the use of the factories to create different meals.

```
#include <iostream>
#include "ConcreteMealFactory.h"
#include "LunchFactory.h"
#include "DinnerFactory.h"
#include "DessertFactory.h"
```

```
BreakfastFactory breakfastFactory;
LunchFactory lunchFactory;
DinnerFactory dinnerFactory;
DessertFactory dessertFactory;
```

```
Meal* breakfast = breakfastFactory.createMeal();
Meal* lunch = lunchFactory.createMeal();
Meal* dinner = dinnerFactory.createMeal();
Meal* dessert = dessertFactory.createMeal();
```


```
std::cout << "1) " << breakfast->getName() << std::endl;
std::cout << "2) " << lunch->getName() << std::endl;
std::cout << "3) " << dinner->getName() << std::endl;
std::cout << "4) " << dessert->getName() << std::endl;
```

```
delete breakfast;
delete lunch;
delete dinner;
delete dessert;
```



[page 16](./page16.md)
