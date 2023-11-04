[home](./page01.md) | [back](./page11.md) | [next](./page13.md)


**DinnerFactory.h**
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
public:
    Meal* createMeal() const {
        return reinterpret_cast<Meal *>(new Dinner());
    }
```


[page13](./page13.md)
