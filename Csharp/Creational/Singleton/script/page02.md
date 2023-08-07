[home](./page01.md)

[back](./page01.md)

New class

```
Singleton
```

place a 
```
sealed
```
behind class

```
private static readonly object padlock = new object();
private static Singleton instance = null;
```
we will have a readonly object padlock

and

a static instance we call **Singleton** and set it to null


[page 3](./page03.md)
