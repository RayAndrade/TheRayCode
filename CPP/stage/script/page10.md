[home](./page01.md) | [back](./page09.md) | [next](./page11.md)

**BreakfastFactory.h**
```
BreakfastFactory
```


```
#include "MealFactory.h"
#include "Breakfast.h"
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

[page11](./page11.md)
