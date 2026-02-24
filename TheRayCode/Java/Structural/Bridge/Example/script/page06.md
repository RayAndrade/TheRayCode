[home](./page01.md) | [back](./page05.md) | [next](./page07.md)

Now we go to the **Main**

**first we add a function to the BOTTOM**

```
static class ConcreteRemote extends RemoteControl {
    public ConcreteRemote(TV tv) {
        super(tv);
    }

    public void turnOn() {
        tv.on();
    }

    public void turnOff() {
        tv.off();
    }

    public void setChannel(int channel) {
        tv.tuneChannel(channel);
    }
}

```

[page 7](./page07.md)
