[up](../README.md)


Facade is a structural design pattern that provides a simplified interface to a library, a framework, or any other complex set of classes.

The Facade pattern provides a unified interface in a subsystem. The Facade defines a HIGHER level interface easier to use.

let’s create 2 classes:
**SubsystemA** and **SubsystemB**

SubsystemA.php: This class represents one of the subsystems of your complex system. It provides various operations (operation1, operationN) that the subsystem can perform.
```php
class SubsystemA
{
    public function operation1(): string
    {
        return "SubsystemA: Ready!<br/>";
    }

    // ...

    public function operationN(): string
    {
        return "SubsystemA: Go!<br/>";
    }
}
```

SubsystemB.php: Similar to SubsystemA, this class represents another subsystem of your complex system. It provides its own set of operations (operation1, operationZ).
```php
class SubsystemB
{
    public function operation1(): string
    {
        return "SubsystemB: Get ready!<br/>";
    }

    // ...

    public function operationZ(): string
    {
        return "SubsystemB: Fire!<br/>";
    }
}
```
![Factory](/UMLs/images/Facade/Facade-5.png)


now create **class Facade**


add code:

The **Facade** class acts as a simplified interface to the subsystems. It encapsulates the complexity of interacting with SubsystemA and SubsystemB. It initializes instances of SubsystemA and SubsystemB and provides a single operation() method that orchestrates the interactions with the subsystems. It hides the details of how the subsystems work together, making it easier for clients to use the system.
```php
class Facade
{
    protected $subsystem1;

    protected $subsystem2;

    /**
     * Depending on your application's needs, you can provide the Facade with
     * existing subsystem objects or force the Facade to create them on its own.
     */
    public function __construct(
        SubsystemA $subsystem1 = null,
        SubsystemB $subsystem2 = null
    ) {
        $this->subsystem1 = $subsystem1 ?: new SubsystemA;
        $this->subsystem2 = $subsystem2 ?: new SubsystemB;
    }

    /**
     * The Facade's methods are convenient shortcuts to the sophisticated
     * functionality of the subsystems. However, clients get only to a fraction
     * of a subsystem's capabilities.
     */
    public function operation(): string
    {
        $result = "Facade initializes subsystems:<br/>";
        $result .= $this->subsystem1->operation1();
        $result .= $this->subsystem2->operation1();
        $result .= "Facade orders subsystems to perform the action:<br/>";
        $result .= $this->subsystem1->operationN();
        $result .= $this->subsystem2->operationZ();

        return $result;
    }
}
```


last we go to the index page 
This is the client code that demonstrates the use of the Facade pattern. It includes the necessary files, creates instances of SubsystemA and SubsystemB, and then creates a Facade instance, passing in these subsystem instances. Finally, it calls the operation() method on the Facade to perform a sequence of actions.

```php
include_once ('Facade.php');
include_once ('SubsystemA.php');
include_once ('SubsystemB.php');
```

The client code may have some of the subsystem's objects already created. 
In this case, it might be worthwhile to initialize the Facade with these objects instead of letting the Facade create new instances.


```php
function clientCode(Facade $facade)
{
  echo $facade->operation();
}

$subsystemA = new SubsystemA;
$subsystemB = new SubsystemB;
$facade = new Facade($subsystemA, $subsystemB);
clientCode($facade);
```

**SubsystemA** and **SubsystemB**: These classes represent the individual subsystems of your complex system. They provide specific functionality but can be complex and have a variety of methods. The Facade hides the complexity of these subsystems from clients.

**Facade**: The Facade class provides a simplified and unified interface to the subsystems. It initializes the subsystem objects and orchestrates their interactions. Clients interact with the complex system through this simplified interface, reducing the complexity of using the subsystems directly. The Facade pattern is evident here because it encapsulates the subsystems and provides a higher-level interface.

 **index.php**: This is the client code that demonstrates how the Facade pattern is used. It creates instances of SubsystemA and SubsystemB, passes them to the Facade, and calls the operation() method. The client code doesn't need to know the details of how the subsystems work together; it simply uses the Facade to interact with the subsystems, demonstrating the pattern's purpose of simplifying client interactions with a complex system.

In summary, the Facade pattern is used to simplify the interaction with a complex system by providing a higher-level interface. It encapsulates the subsystems and provides a more straightforward way for clients to work with the system.


[Wikipedia](https://en.wikipedia.org/wiki/Facade_pattern)


Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/TheRayCode/)

[X](https://www.x.com/TheRayCode/)

[The Ray Code](https://www.TheRayCode.org)

[Ray Andrade](https://www.RayAndrade.org)

