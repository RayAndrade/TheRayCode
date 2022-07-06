# TheRayCode
## Facade pattern c#

The Subsystem can accept requests either from the facade or client directly. 
In any case, to the Subsystem, the Facade is yet another client, and it's not a part of the Subsystem.
```c#
public class SubsystemA
{
    public string operation1()
    {
        return "SubsystemA: Ready!\n";
    }
    public string operationN()
    {
        return "SubsystemA: Go!\n";
    }
}
```
Some facades can work with multiple subsystems at the same time.
```c#
public class SubsystemB
{
    public string operation2()
    {
        return "SubsystemB: Get ready!\n";
    }
    public string operationZ()
    {
        return "SubsystemB: Fire!\n";
    }
}
```
![Factory](/UMLs/images/Facade/Facade-3.png)
The Facade class provides a simple interface to the complex logic of one or several subsystems. 
The Facade delegates the client requests to the appropriate objects within the subsystem. 
The Facade is also responsible for managing their lifecycle. 
All of this shields the client from the undesired complexity of the subsystem.

The Facade's methods are convenient shortcuts to the sophisticated functionality of the subsystems. 
However, clients get only to a fraction of a subsystem's capabilities.

```c#
public class Facade
{
    protected SubsystemA SubsystemA;
    
    protected SubsystemB SubsystemB;
    public Facade(SubsystemA subsystemA, SubsystemB subsystemB)
    {
        this.SubsystemA = subsystemA;
        this.SubsystemB = subsystemB;
    }
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
}
```

The client code works with complex subsystems through a simple interface provided by the Facade. 
When a facade manages the lifecycle of the subsystem, the client might not even know about the existence of the subsystem. 
This approach lets you keep the complexity under control.
```c#
class Client
{
    public static void ClientCode(Facade facade)
    {
        Console.Write(facade.Operation());
    }
}
```
The client code may have some of the subsystem's objects already created. 
In this case, it might be worthwhile to initialize the Facade with these objects instead of letting the Facade create new instances.
```C#
static void Main(string[] args)
{
    SubsystemA subsystemA = new SubsystemA();
    SubsystemB subsystemB = new SubsystemB();
    Facade facade = new Facade(subsystemA, subsystemB);
    Client.ClientCode(facade);
}
```
Now let's compile and run.
We should get:
```run
Facade initializes subsystems:
SubsystemA: Ready!
SubsystemB: Get ready!
Facade orders subsystems to perform the action:
SubsystemA: Go!
SubsystemB: Fire!
```

The Ray Code is AWESOME!!!

[Wikipedia](https://en.wikipedia.org/wiki/Facade_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)
