[home](./page01.md) | [back](./page08.md) | [next](./page10.md)

**BreakfastFactory.h**

```
BreakfastFactory
```


```
#include "MealFactory.h"
#include "Breakfast.h"
#include "Lunch.h"
#include "Dinner.h"
#include "Dessert.h"
```


```
class BreakfastFactory  {  };
```


```
 : public MealFactory
```

```
Meal* createMeal() const override {
    return new Breakfast();
}
```


[page10](./page10.md)
