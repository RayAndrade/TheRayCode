[home](./page01.md)

[back](./page05.md)

We go to **Program**

```
ComputerDirector director = new ComputerDirector();
ComputerBuilder builder = new GamingComputerBuilder();
            
Computer gamingComputer = director.Build(builder);

Console.WriteLine("Gaming Computer Specs:");
Console.WriteLine(gamingComputer.ToString());
```

[page 7](./page07.md)
