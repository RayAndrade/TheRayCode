[home](./page01.md)

[back](./page02.md)


Public method to access the single instance


```
private Singleton() 
{
        // Initialization code here, if needed
}
```

Public method to access the single instance

```
public static Singleton Instance { }
```

```
get
{
 lock (padlock)
 {
    if (instance == null)
    {
         instance = new Singleton();
     }
    return instance;
 }
}
```

[page 4](./page04.md)
