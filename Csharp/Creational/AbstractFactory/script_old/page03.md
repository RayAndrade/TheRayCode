[home](./page01.md)

[back](./page02.md)


Back at the **ColorFactory**


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

[page 4](./page04.md)
