[home](./page01.md) | [back](./page13.md) | [next](./page15.md)

at **ConcreteMealFactory.h**

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
public:
    Meal* createMeal() const override {
        return new Breakfast();
    }
```


[page 15](./page15.md)
