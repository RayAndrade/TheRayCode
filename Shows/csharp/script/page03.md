[home](./page01.md) | [back](./page02.md) | [next](./page04.md)

create **class**

```
Adaptee
```

add code:
1.
```
private readonly Adaptee _adaptee;
```

2.
```
public Adapter(Adaptee adaptee)
{
    _adaptee = adaptee;
}
```

3.

```
public string GetRequest()
{
    return $"This is '{_adaptee.GetSpecificRequest()}'";
}
```


[page 4](./page04.md)
