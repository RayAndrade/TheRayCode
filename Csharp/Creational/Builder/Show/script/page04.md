[home](./page01.md)

[back](./page03.md)

Next we build the **Concrete Builder**

class

```
GamingComputerBuilder
```

```
```


with

```
 : ComputerBuilder
```

```
private Computer _computer = new Computer();
```


for **AddCPU**

```
_computer.CPU = cpu;
```

for **AddRAM**

```
_computer.RAM = ram;
```


for **AddHDD**

```
_computer.HDD = hdd;
```

and we

```
return _computer;
```

[page 5](./page05.md)
