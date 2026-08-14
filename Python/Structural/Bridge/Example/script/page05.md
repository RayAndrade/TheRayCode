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
**1.** make a **LOCAL** TV object
```
protected TV tv;
```

**2.** pass it into the **Remote Control** class
```
public RemoteControl(TV tv) {
    this.tv = tv;
}
```

**3.** add handels to turn on, off and change channes
```
public abstract void turnOn();
public abstract void turnOff();
public abstract void setChannel(int channel);
```


[page 6](./page06.md)
