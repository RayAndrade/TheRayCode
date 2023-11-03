[home](./page01.md) | [back](./page10.md) | [next](./page12.md)

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
    Meal* createMeal() const override {
        return new Dinner();
    }
```

[page12](./page12.md)
