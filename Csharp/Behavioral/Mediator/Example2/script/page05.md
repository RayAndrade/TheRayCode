[home](./page01.md) | [back](./page04.md) | [next](./page06.md)

And we have the **DramaQueen**
```
DramaQueen
```

private var the currentDrama
```
private string _currentDrama;
```

A new drama
```
public void NewDrama(string drama)
{
   _currentDrama = drama;
}
```

There's the **CurrentDrama**
```
public string CurrentDrama()
{
    return _currentDrama;
}
```
And we have the **TimeCapsule** to **SaveDramaForLater**
```
public TimeCapsule SaveDramaForLater()
{
    return new TimeCapsule(_currentDrama);
}
```
and we can **ReminisceDrama** to **RecallEpisode**
```
public void ReminisceDrama(TimeCapsule capsule)
{
    _currentDrama = capsule.RecallEpisode();
}
```



[page 6](./page06.md)
