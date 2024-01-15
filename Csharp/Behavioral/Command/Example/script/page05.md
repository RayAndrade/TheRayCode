[home](./page01.md) | [back](./page04.md) | [next](./page06.md)

Let's build a **RemoteControl** for our devices


```
private ICommand _command;

public void SetCommand(ICommand command)
{
    _command = command;
}
```
and
```
public void PressButton()
{
    _command.Execute();
}
```


[page 6](./page06.md)
