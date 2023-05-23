[home](./page01.md)

[back](./page06.md)

```
ShapeFactory
```

remove public

```
class ShapeFactory {   }
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




[page 8](./page08.md)
