[home](./page01.md)

[back](./page10.md)


```
DinnerFactory
```

```
#include "MealFactory.h"
#include "Breakfast.h"
#include "Lunch.h"
#include "Dinner.h"
#include "Dessert.h"
```

```
class DinnerFactory {  };
```

```
 : public MealFactory
```

```
public:
    Meal* createMeal() const override {
        return new Dinner();
    }
```


[page 14](./page14.md)
