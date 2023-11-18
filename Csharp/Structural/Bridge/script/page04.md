[home](./page01.md) | [back](./page03.md) | [next](./page03.md)

Similar to TV.cs but with its own unique implementation

I do the same for the **Radio.cs** device
```
Radio
```
that will be exstended by
```
 : Device
```

now you may auto generage the methods but I am useing pointer notation

at the top I declare the local variables
```
private bool on = false;
private int volume = 10;
```
so insted of auto generate I use
```
public bool IsEnabled() => on;

public void Enable() => on = true;

public void Disable() => on = false;

public int GetVolume() => volume;

public void SetVolume(int percent) => volume = percent;
```



[page 5](./page05.md)
