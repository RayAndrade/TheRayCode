[home](./page01.md) | [back](./page10.md) | [next](./page12.md)
 
 
**LunchFactory.h**
```
LunchFactory
```

```
#include "MealFactory.h"
#include "Lunch.h"
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

 [page12](./page12.md)
