[home](./page01.md)

[back](./page09.md)

NOW FOR THE **Main** method

```
ShapeFactory shapeFactory = new ShapeFactory();
ColorFactory colorFactory = new ColorFactory();
            
Circle circle = shapeFactory.GetData((int)ShapeType.Circle).DataItem as Circle;
circle.GetInfo();
            
Red red = colorFactory.GetData((int)ColorType.Red).DataItem as Red;
red.GetInfo();
```

[page 11](./page11.md)
