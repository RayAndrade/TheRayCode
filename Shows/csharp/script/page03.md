[home](./page01.md) | [back](./page02.md) | [next](./page04.md)

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
and we add a function to retun these items we use **ToString**
```
public override string ToString()
{
    return $"CPU: {CPU}, RAM: {RAM}, HDD: {HDD}";
}
```


[page 4](./page04.md)
