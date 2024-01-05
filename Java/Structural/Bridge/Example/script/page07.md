[home](./page01.md) | [back](./page06.md) | [next](./page08.md)

Then to main we add:

**1.** we take a tv object and pass it into the **Concrete Remote**
```
TV sonyTv = new SonyTV();
RemoteControl sonyRemote = new ConcreteRemote(sonyTv);
```


**2.** we turn on, change channel and turn off with the **sony Remote** that was passed into the TV avstract
```
sonyRemote.turnOn();
sonyRemote.setChannel(9);
sonyRemote.turnOff();
```
**3.** We do the samething witH a **samsung Tv** TV object
```
TV samsungTv = new SamsungTV();
RemoteControl samsungRemote = new ConcreteRemote(samsungTv);
```
**4.** and turn on change cannel and turn off
```
samsungRemote.turnOn();
samsungRemote.setChannel(5);
samsungRemote.turnOff();
```   


[page 8](./page08.md)
