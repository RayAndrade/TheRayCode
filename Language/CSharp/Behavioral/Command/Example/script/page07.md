[home](./page01.md) | [back](./page06.md) | [next](./page08.md)

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

[page 8](./page08.md)
