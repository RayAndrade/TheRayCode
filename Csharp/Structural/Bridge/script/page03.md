[home](./page01.md) | [back](./page02.md) | [next](./page04.md)

Class **TV.cs**
```
TV
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

public void SetVolume(int percent) => volume = percent;public bool IsEnabled() => on;

public void Enable() => on = true;

public void Disable() => on = false;

public int GetVolume() => volume;

public void SetVolume(int percent) => volume = percent;
```




[page 4](./page04.md)
