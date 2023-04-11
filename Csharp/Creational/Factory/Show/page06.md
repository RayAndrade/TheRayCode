[back](./page05.md)

Now let's creat a toy factory called SantasBag this class will be responsible for creating the toy objects based on a given string input. It provides a simple interface for creating toys without knowing the exact type of toy that is being created.

```
SantasBag
```


```
public static IToy CreateToy(string type)
    {
        switch (type)
        {
            case "doll":
                return new Doll();
            case "car":
                return new Car();
            case "train":
                return new Train();
            default:
                throw new ArgumentException("Invalid toy type");
        }
 }

```

[next](./page07.md)

