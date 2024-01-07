[home](./page01.md) | [back](./page06.md) | [next](./page08.md)

In the **Program.cs** file at main

```
SubsystemA subsystemA = new SubsystemA();
SubsystemB subsystemB = new SubsystemB();
Facade facade = new Facade(subsystemA, subsystemB);
Client.ClientCode(facade);
```


[page 8](./page08.md)
