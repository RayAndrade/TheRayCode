[home](./page01.md)

[back](./page13.md)

```
ShapeFactory shapeFactory = new ShapeFactory();
ColorFactory colorFactory = new ColorFactory();
            
Circle circle = shapeFactory.GetData((int)ShapeType.Circle).DataItem as Circle;
circle.GetInfo();
            
Red red = colorFactory.GetData((int)ColorType.Red).DataItem as Red;
red.GetInfo();
            
Console.WriteLine("The Ray Code is AWESOME!!");
```

[page 15](./page15.md)
