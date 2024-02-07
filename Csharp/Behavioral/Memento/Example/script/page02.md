[home](./page01.md) | [back](./page01.md) | [next](./page03.md)

We start with the 
```
Memento
```
It keeps tract of the **state**.

```
private string _state;
```
the **state** ia passwd into the **Memento**
```
public Memento(string state)
{
    _state = state;
}
```
And we create a way to
```
public string GetState()
{
    return _state;
}
```
Get the state 

[page 3](./page03.md)
