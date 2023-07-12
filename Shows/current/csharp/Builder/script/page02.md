[home](./page01.md)

[back](./page01.md)

```
Monster
```

This is the 'Product' class.

```
public string Name { get; set; }
public string CatchPhrase { get; set; }
public string EyeColor { get; set; }
```

**Monster** is the complex object that is being built.


```
public void Describe()
{
    Console.WriteLine($"Monster: {Name} with a {BodyType} body and eye color {EyeColor} eyes");
}
```

[page 3](./page03.md)
