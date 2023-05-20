[home](./page01.md)

[back](./page11.md)

```
ColorFactory
```

```
ColorFactory {  }
```

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

[page 13](./page13.md)
