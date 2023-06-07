[home](./page01.md)

[back](./page02.md)


Then, let's create the **DessertBuilder class**, which implements the *builder pattern*:

```
DessertBuilder
```

variables we need

```
private String name;
private int sugar;
private int butter;
private boolean isBaked;
```
Steps for the builder

```
public DessertBuilder setName(String name) {
    this.name = name;
    return this;
}
```

step 2

```
public DessertBuilder setSugar(int sugar) {
    this.sugar = sugar;
    return this;
}
```


step 3

```
public DessertBuilder setButter(int butter) {
    this.butter = butter;
    return this;
}
```

step 4

```
public DessertBuilder setBaked(boolean isBaked) {
    this.isBaked = isBaked;
    return this;
}
```
Last we build it

```
public Dessert build() {
    return new Dessert(name, sugar, butter, isBaked);
}
```



[page 4](./page04.md)
