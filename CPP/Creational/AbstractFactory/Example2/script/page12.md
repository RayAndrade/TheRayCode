[home](./page01.md)

[back](./page11.md)

**LunchFactory.h**

```
LunchFactory
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


[page 13](./page13.md)
