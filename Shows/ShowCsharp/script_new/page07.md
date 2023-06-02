[home](./page01.md)

[back](./page06.md)

now lets create some factories

we start with a **ColorFactory**

```
ColorFactory
```
 the code for this factory:


```
FactoryDataItem factoryDataItem = null;
  switch ((ColorType)type)
{
    case ColorType.Red:
        factoryDataItem = new FactoryDataItem(new Red());
        break;
    case ColorType.Blue:
        factoryDataItem = new FactoryDataItem(new Blue());
        break;
    case ColorType.Green:
        factoryDataItem = new FactoryDataItem(new Green());
        break;
 }
           
 return factoryDataItem;
```

[page 8](./page08.md)
