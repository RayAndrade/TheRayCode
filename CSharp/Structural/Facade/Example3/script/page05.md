[home](./page01.md) | [back](./page04.md) | [next](./page06.md)

Create **class**
```
Facade
```

add code **1 of 3**
```
protected SubsystemA SubsystemA;
protected SubsystemB SubsystemB;
```
**2 of 3**
```
public Facade(SubsystemA subsystemA, SubsystemB subsystemB)
{
    this.SubsystemA = subsystemA;
    this.SubsystemB = subsystemB;
}
```
**3 of 3**
```
 public string Operation()
 {
    string result = "Facade initializes subsystems:\n";
    result += this.SubsystemA.operation1();
    result += this.SubsystemB.operation2();
    result += "Facade orders subsystems to perform the action:\n";
    result += this.SubsystemA.operationN();
    result += this.SubsystemB.operationZ();
    return result;
 }
```


[page 6](./page06.md)
