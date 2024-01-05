[home](./page01.md) | [back](./page04.md) | [next](./page06.md)

**NOW** let's create the **Remote Control**
```
RemoteControl
```
class and make it **ABSTRACT**
```
abstract
```
for code add
**1.**
```
protected TV tv;
```

**2.**
```
public RemoteControl(TV tv) {
    this.tv = tv;
}
```

**3.**
```
public abstract void turnOn();
public abstract void turnOff();
public abstract void setChannel(int channel);
```


[page 6](./page06.md)
