[home](./page01.md) | [back](./page03.md) | [next](./page03.md)

**MemoryBank.cs**

```
MemoryBank
```

```
private List<TimeCapsule> _dramaArchive = new List<TimeCapsule>();
```
you can **DepositDrama**
```
public void DepositDrama(TimeCapsule episode)
{
    _dramaArchive.Add(episode);
}
```

and **WithdrawDrama**
```
public TimeCapsule WithdrawDrama(int index)
{
   return _dramaArchive[index];
}
```


[page 5](./page05.md)
