[home](./page01.md)

[back](./page04.md)


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
    if(dessertType.equalsIgnoreCase("sundae")){
        return new Sundae();
    } else if(dessertType.equalsIgnoreCase("pie")){
        return new Pie();
    }
    return null;
}
```


[page 6](./page06.md)