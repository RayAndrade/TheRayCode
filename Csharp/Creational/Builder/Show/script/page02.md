[home](./page01.md)

[back](./page01.md)

We start with the **Computer** *class*

```
Computer
```

we add code to set and get the

```
public string CPU { get; set; }
public string RAM { get; set; }
public string HDD { get; set; }
```

and we want to retun these

```
public override string ToString()
{
    return $"CPU: {CPU}, RAM: {RAM}, HDD: {HDD}";
}
```



[page 3](./page03.md)
