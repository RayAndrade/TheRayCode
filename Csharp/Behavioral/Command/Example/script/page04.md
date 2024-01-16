[home](./page01.md) | [back](./page03.md) | [next](./page03.md)

For turning the light on
```
LightOffCommand
```
and it is
```
: ICommand
```
we add:
```
private Light _light;

public LightOffCommand(Light light)
{
    _light = light;
}
```
and for **Execute**

```
_light.TurnOff();
```


[page 5](./page05.md)
