[home](./page01.md)

[back](./page04.md)

Create class **DessertFactory**

DessertFactory: This is a class that serves as the factory for creating desserts. 

It has a method getDessert() that accepts a string parameter and returns a Dessert object. 

The function of this class is to encapsulate the logic of creating desserts. 

Depending on the string passed to the getDessert() method, the factory decides whether to create a 

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
