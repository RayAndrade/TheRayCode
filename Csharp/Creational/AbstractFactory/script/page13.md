[home](./page01.md)

[back](./page10.md)

let's create the **ColorFactory**


```
public FactoryDataItem GetData(int type)
{
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
}
```

[page 14](./page14.md)
