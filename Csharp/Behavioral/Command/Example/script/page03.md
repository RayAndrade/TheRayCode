[home](./page01.md) | [back](./page02.md) | [next](./page04.md)

To turn the light off we have the **class**
```
LightOffCommand
```
which is a 
```
: ICommand
```
We add:
```
private Light _light;

public LightOffCommand(Light light)
{
    _light = light;
}
```
for **Execute**
```
_light.TurnOff();
```

[page 4](./page04.md)
