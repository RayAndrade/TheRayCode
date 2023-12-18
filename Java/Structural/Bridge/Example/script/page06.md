[home](./page01.md) | [back](./page05.md) | [next](./page07.md)

Now we go to the **Main**

**first we add a function to the BOTTOM**

```
class ConcreteRemote extends RemoteControl {  }
```
inside this funtion we add
**1**
```
public ConcreteRemote(TV tv) {
   super(tv);
}
```
**2**
```
public void turnOn() {
    tv.on();
}
```

**3**
```
public void turnOff() {
    tv.off();
}
```

**4**
```
public void setChannel(int channel) {
    tv.tuneChannel(channel);
}
```

[page 7](./page07.md)
