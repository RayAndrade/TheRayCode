[home](./page01.md)

[back](./page13.md)


```
DessertFactory
```

```
#include "MealFactory.h"
#include "Breakfast.h"
#include "Lunch.h"
#include "Dinner.h"
#include "Dessert.h"
```

```
class DessertFactory {  };
```

```
 : public MealFactory
```

```
public:
    Meal* createMeal() const override {
        return new Dessert();
    }
```


[page 15](./page15.md)
