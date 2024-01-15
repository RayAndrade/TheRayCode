[home](./page01.md) | [back](./page05.md) | [next](./page07.md)

In the main at **Programe**
```
var light = new Light();
var lightOn = new LightOnCommand(light);
var lightOff = new LightOffCommand(light);

var remote = new RemoteControl();

remote.SetCommand(lightOn);
remote.PressButton(); // Output: Light is on

remote.SetCommand(lightOff);
remote.PressButton(); // Output: Light is off
```


[page 7](./page07.md)
