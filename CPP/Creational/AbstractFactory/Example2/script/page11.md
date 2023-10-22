[home](./page01.md)

[back](./page10.md)

```
LunchFactory
```

```
#include "MealFactory.h"
#include "Breakfast.h"
#include "Lunch.h"
#include "Dinner.h"
#include "Dessert.h"
```

```
class LunchFactory {  };
```

```
 : public MealFactory
```

```
public:
    Meal* createMeal() const override {
        return new Lunch();
    }
```



[page 12](./page12.md)
