[home](./page01.md) | [back](./page03.md) | [next](./page05.md)

Create class
```
Circle
```
and extend it
```
 implements Shape
```
Generate code and

add code:
**1 of 5**
```
private Color color; // Intrinsic state shared
private int x, y;    // Extrinsic state unique to each circle
```
**2 of 5**
```
public Circle(Color color) {
    this.color = color;
}
```

**3 of 5**
```
public void setX(int x) {
    this.x = x;
}
```

**4 of 5**
```
public void setY(int y) {
    this.y = y;
}
```
**5 of 5** add code to **draw**
```
System.out.println("Drawing a " + color.getColor() + " circle at (" + x + "," + y + ")");
```



[page 5](./page05.md)
