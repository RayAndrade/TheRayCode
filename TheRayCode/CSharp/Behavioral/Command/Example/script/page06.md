[home](./page01.md) | [back](./page05.md) | [next](./page07.md)

Make class **RemoteControl***
```
RemoteControl
```
add code
```
private ICommand _command;

public void SetCommand(ICommand command)
{
    _command = command;
}

public void PressButton()
{
    _command.Execute();
}
```


[page 7](./page07.md)
