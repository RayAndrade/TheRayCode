[home](./page01.md) | [back](./page04.md) | [next](./page06.md)

Next we build the **Concrete Builder** *class*
```
GamingComputerBuilder
```

with
```
 : ComputerBuilder
```

```
private Computer _computer = new Computer();
_computer.CPU = cpu;
_computer.RAM = ram;
_computer.HDD = hdd;
```
and
```
return _computer;
```




[page 6](./page06.md)
