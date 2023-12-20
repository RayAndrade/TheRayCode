[home](./page01.md) | [back](./page03.md) | [next](./page05.md)

Create class
```
Circle
```
and extend it
```
 implements Shape
```
add code:
```
private Color color; // Intrinsic state shared
private int x, y;    // Extrinsic state unique to each circle

public Circle(Color color) {
    this.color = color;
}

public void setX(int x) {
    this.x = x;
}

public void setY(int y) {
    this.y = y;
}

public void draw() {
    System.out.println("Drawing a " + color.getColor() + " circle at (" + x + "," + y + ")");
}
```



[page 5](./page05.md)
