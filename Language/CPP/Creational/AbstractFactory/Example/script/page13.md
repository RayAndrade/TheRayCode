[home](./page01.md) | [back](./page12.md) | [next](./page14.md)


**DessertFactory.h**
```
DessertFactory
```

```
#include "MealFactory.h"
#include "Dessert.h"
```

```
class DessertFactory  {  };
```

```
 : public MealFactory
```

```
public:
    Meal* createMeal() const  {
        return new Dessert();
    }
```


[page 14](./page14.md)
