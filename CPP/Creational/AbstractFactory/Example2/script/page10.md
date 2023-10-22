[home](./page01.md)

[back](./page09.md)

**ConcreteMealFactory**.h: These are concrete factories for each meal type, implementing the abstract factory's methods.

```
ConcreteMealFactory
```

```
#include "MealFactory.h"
#include "Breakfast.h"
#include "Lunch.h"
#include "Dinner.h"
#include "Dessert.h"
```

```
class BreakfastFactory {  };
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

Similarly, define LunchFactory, DinnerFactory, and DessertFactory following the same pattern.


[page 11](./page11.md)
