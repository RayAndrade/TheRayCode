[home](./page01.md) | [back](./page03.md) | [next](./page05.md)

The **Caretaker** will save the mementos on a List
```
Caretaker
```
for our memntos we will need to import 
```
using System.Collections.Generic;
```
for our list
```
private List<Memento> _mementoList = new List<Memento>();
```
we save

So we Add and Get the Mentosb index
```
public void Add(Memento state)
{
    _mementoList.Add(state);
}

public Memento Get(int index)
{
    return _mementoList[index];
}
```




[page 5](./page05.md)
