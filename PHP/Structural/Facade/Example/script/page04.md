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
protected $subsystem2;
```
**2**
```
 public function __construct(
        Subsystem1 $subsystem1 = null,
        Subsystem2 $subsystem2 = null
    ) 
```

**3**
```
{
    $this->subsystem1 = $subsystem1 ?: new Subsystem1;
    $this->subsystem2 = $subsystem2 ?: new Subsystem2;
}
```

 The Facade's methods are convenient shortcuts to the sophisticated  functionality of the subsystems. 
 
However, clients get only to a fraction  of a subsystem's capabilities.

add
```
public function operation(): string
{
    $result = "Facade initializes subsystems:<br/>\n";
    $result .= $this->subsystem1->operation1();
    $result .= $this->subsystem2->operation1();
    $result .= "Facade orders subsystems to perform the action:<br/>\n";
    $result .= $this->subsystem1->operationN();
     $result .= $this->subsystem2->operationZ();

    return $result;
}
```


let's now goto main/index

[page 5](./page05.md)
