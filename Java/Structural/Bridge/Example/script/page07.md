[home](./page01.md) | [back](./page06.md) | [next](./page08.md)

Then to main we add:
**1.**
```
TV sonyTv = new SonyTV();
RemoteControl sonyRemote = new ConcreteRemote(sonyTv);
```
**2.**
```
sonyRemote.turnOn();
sonyRemote.setChannel(9);
sonyRemote.turnOff();
```
**3.**
```
TV samsungTv = new SamsungTV();
RemoteControl samsungRemote = new ConcreteRemote(samsungTv);
```
**4.**
```
samsungRemote.turnOn();
samsungRemote.setChannel(5);
samsungRemote.turnOff();
```   


[page 8](./page08.md)
