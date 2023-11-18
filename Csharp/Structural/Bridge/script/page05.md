[home](./page01.md) | [back](./page04.md) | [next](./page06.md)
**RemoteControl.cs**
```
RemoteControl
```

methods for control
```
protected Device device;
```
**1 of 3**
```
public RemoteControl(Device device)
{
    this.device = device;
}
```
**2 of 3**
```
public void TogglePower()
{
    if (device.IsEnabled())
        device.Disable();
    else
        device.Enable();
}
```
**3 of 3**
```
public void VolumeUp()
{
   device.SetVolume(device.GetVolume() + 10);
}
```

Purpose: Acts as a bridge between the Device interface and its concrete implementations.

Details: Contains logic to manipulate the device, like turning on/off, adjusting volume.


[page 6](./page06.md)
