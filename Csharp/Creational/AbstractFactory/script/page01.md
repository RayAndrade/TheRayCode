[home](./page01.md)

We start with the **interface**

```
IFactory
```

which has a reference call to **FactoryDataItem**


replace

public FactoryDataItem GetData(int type) {  throw new System.NotImplementedException();  }


with just 

```
public abstract FactoryDataItem GetData(int type);
```

[page 2](./page02.md)
