[home](./page01.md)

[back](./page03.md)

Create **class**
```
Facade
```


The Facade class acts as a simplified interface to the subsystems. 

It encapsulates the complexity of interacting with **SubsystemA** and **SubsystemB**. 

It initializes instances of **SubsystemA** and **SubsystemB** and provides a single operation() method that orchestrates the interactions with the subsystems. 

It hides the details of how the subsystems work together, making it easier for clients to use the system.
```
protected $subsystem1;
```
**2**
```
 public function __construct(
        Subsystem1 $subsystem1 = null,
        SubsystemX $subsystem2 = null
    ) 
```

**3**
```
{
    $this->subsystem1 = $subsystem1 ?: new SubsystemA;
    $this->subsystemX = $subsystemX ?: new SubsystemX;
}
```

 The Facade's methods are convenient shortcuts to the sophisticated  functionality of the subsystems. 
 
However, clients get only to a fraction  of a subsystem's capabilities.

let's now goto main/index

[page 5](./page05.md)
