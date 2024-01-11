[home](./page01.md) | [back](./page01.md) | [next](./page03.md)

Create class
```
Color
```
This class represents the Flyweight in our example. It encapsulates the intrinsic state, which is shared across multiple objects. In our case, this **state** would be the color.

add code:
```
private final String color;

public Color(String color) {
    this.color = color;
}

public String getColor() {
    return color;
}
```


[page 3](./page03.md)
