[home](./page01.md)

[back](./page08.md)

**MealFactory.h**

```
MealFactory
```

```
#include "Meal.h"
```

```
class MealFactory {  };
```

```
public:
    virtual ~MealFactory() {}
    virtual Meal* createMeal() const = 0; 
```
Creates a meal, to be implemented by concrete factories



[page 10](./page10.md)
