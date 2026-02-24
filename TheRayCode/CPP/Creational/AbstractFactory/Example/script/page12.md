[home](./page01.md) | [back](./page11.md) | [next](./page13.md)


**DinnerFactory.h**
```
#include "MealFactory.h"
#include "Dinner.h"
```

```
class DinnerFactory {  };
```

```
 : public MealFactory
```



```
public:
    Meal* createMeal() const {
        return new Dinner();
    }
```


[page13](./page13.md)
