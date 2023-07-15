[home](./page01.md)

[back](./page06.md)

Create **class**

```
DessertFactory
```

The **DessertFactory** is the class where *the Factory pattern is implemented*. 

The **getDessert** method returns a new **Dessert** object based on the input string.

we add code

```
public Dessert getDessert(String dessertType){
    if(dessertType == null){
        return null;
    }       
    if(dessertType.equalsIgnoreCase("ICECREAM")){
        return new IceCream();
    } else if(dessertType.equalsIgnoreCase("CAKE")){
        return new Cake();
    }
    return null;
}
```

[page 8](./page08.md)
