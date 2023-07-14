[home](./page01.md)

[back](./page04.md)

Create class **DessertFactory**

This is our DessertFactory class. 

It contains a getDessert method which takes in a string and, based on that string, decides which type of dessert to create and return.

```
public Dessert getDessert(String dessertType) {
    if (dessertType == null) {
        return null;
    }
    if (dessertType.equalsIgnoreCase("CAKE")) {
        return new Cake();
    } else if (dessertType.equalsIgnoreCase("ICECREAM")) {
        return new IceCream();
    }
    return null;
}
```

[page 6](./page06.md)
