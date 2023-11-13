[home](./page01.md) | [back](./page06.md) | [next](./page08.md)

We go to **Program**

```
ComputerDirector director = new ComputerDirector();
ComputerBuilder builder = new GamingComputerBuilder();
            
Computer gamingComputer = director.Build(builder);

Console.WriteLine("Gaming Computer Specs:");
Console.WriteLine(gamingComputer.ToString());
```


[page 8](./page08.md)
