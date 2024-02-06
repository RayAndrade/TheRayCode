[home](./page01.md) | [back](./page03.md) | [next](./page05.md)

Create class
```
Caretaker
```
The **Caretaker** maintains a list of memento objects and can add new mementos or retrieve existing ones.

At the top we add
```
using System.Collections.Generic;
```
because we will need this in out project

**1.** we put the memtos into an array
```
private List<Memento> _mementoList = new List<Memento>();
```
**2.** **Add**
```
public void Add(Memento state)
{
    _mementoList.Add(state);
}
```
**3.** **Get**
```
public Memento Get(int index)
{
    return _mementoList[index];
}
```


[page 5](./page05.md)
