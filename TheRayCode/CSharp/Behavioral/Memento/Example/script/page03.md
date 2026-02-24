[home](./page01.md) | [back](./page02.md) | [next](./page04.md)

Next the
```
Originator
```
We have a varable to keep track of the state
```
private string _state;

public void SetState(string state)
{
    _state = state;
}

public string GetState()
{
    return _state;
}
```
with methods to set and get the state

And for the **Memento** we want to be able to save and get it
```
public Memento SaveStateToMemento()
{
    return new Memento(_state);
}

public void GetStateFromMemento(Memento memento)
{
    _state = memento.GetState();
}
```





[page 4](./page04.md)
