[home](./page01.md)

[back](./page04.md)

we create a **ShapeFactory** which is of **AbstractFactory** type

```
ShapeFactory
```


remove puplic

```
: AbstractFactory
```

for our **FactoryDataItem GetData**

we have the following override

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
Now let's create each one of these types


[page 6](./page06.md)
