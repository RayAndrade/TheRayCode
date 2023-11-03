[home](./page01.md) | [back](./page11.md) | [next](./page13.md)

**DessertFactory.h**
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
class DessertFactory  {  };
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


[page13](./page13.md)
