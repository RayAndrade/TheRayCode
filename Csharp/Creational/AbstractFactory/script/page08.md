[home](./page01.md)

[back](./page07.md)

```
ShapeFactory
```

```
class ShapeFactory {  } 
```

```
: AbstractFactory
```

```
public override FactoryDataItem GetData(int type)
{
    FactoryDataItem factoryDataItem = null;
    switch ((ShapeType)type)
    {
        case ShapeType.Circle:
            factoryDataItem = new FactoryDataItem(new Circle());
            break;
        case ShapeType.Square:
            factoryDataItem = new FactoryDataItem(new Square());
            break;
        case ShapeType.Rectangle:
            factoryDataItem = new FactoryDataItem(new Rectangle());
            break;
    }
    return factoryDataItem;
}
```

[page 9](./page09.md)
