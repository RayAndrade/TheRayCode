[home](./page01.md) | [back](./page05.md) | [next](./page07.md)

**Main.java**: This will be the client code that uses the Flyweight objects. It will create several circles with different or same colors and demonstrate the Flyweight pattern in action.



At main:
**1**
```
Circle circle1 = new Circle(ShapeFactory.getColor("Red"));
circle1.setX(10);
circle1.setY(20);
circle1.draw();
```
**2**
```
Circle circle2 = new Circle(ShapeFactory.getColor("Blue"));
circle2.setX(20);
circle2.setY(30);
circle2.draw();
```
**3**
```
Circle circle3 = new Circle(ShapeFactory.getColor("Red"));
circle3.setX(30);
circle3.setY(40);
circle3.draw();
```

[page 7](./page07.md)
