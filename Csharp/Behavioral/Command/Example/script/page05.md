[home](./page01.md) | [back](./page04.md) | [next](./page06.md)

 for turing the lighte off **LightOffCommand**
```
LightOffCommand
```
and it implements the
```
: ICommand
```

add required method

At the top
```
private Light _light;

public LightOffCommand(Light light)
{
    _light = light;
}
```
to make **Lights OFF**

and to **Execute**
```
_light.TurnOff();
```


[page 6](./page06.md)
