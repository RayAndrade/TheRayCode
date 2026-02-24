[home](./page01.md) | [back](./page04.md) | [next](./page06.md)

 for turing the lighte off **LightOnCommand**
```
LightOnCommand
```
and it implements the
```
: ICommand
```

add required method

At the top
```
private Light _light;

public LightOnCommand(Light light)
{
    _light = light;
}
```
to make **Lights ON**

and to **Execute**
```
_light.TurnOn();
```


[page 6](./page06.md)
