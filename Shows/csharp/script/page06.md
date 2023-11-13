[home](./page01.md) | [back](./page05.md) | [next](./page07.md)

Now we build the **Director** the
```
ComputerDirector
```
and we add 
```
public Computer Build(ComputerBuilder builder) {  }
```

with
```
builder.AddCPU("Intel i9");
builder.AddRAM("32GB");
builder.AddHDD("1TB SSD");
return builder.GetComputer();
```

[page 7](./page07.md)
