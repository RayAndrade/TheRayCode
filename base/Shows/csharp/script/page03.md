[home](./page01.md) | [back](./page02.md) | [next](./page04.md)

Create class
```
Originator
```

The Originator class can create a snapshot of its current state by using the SaveStateToMemento method. It can also restore its state using a given Memento object.

```
private string _state;
```
**2.** // Set a new state
```
public void SetState(string state)
{
    _state = state;
}
```

**3.**// Get current state
```
public string GetState()
{
    return _state;
}
```
**4.**// Save state to memento
```    
public Memento SaveStateToMemento()
{
    return new Memento(_state);
}
```
**5.**// Restore state from memento
```
public void GetStateFromMemento(Memento memento)
{
    _state = memento.GetState();
}
```

[page 4](./page04.md)
