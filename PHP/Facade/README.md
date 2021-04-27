# TheRayCode
## Facade pattern php

PHP
Welcome to The Ray Code show.
In this show I plan to cover the Facade design pattern

Facade is a structural design pattern that provides a simplified interface to a library, a framework, or any other complex set of classes.

I hope you’ve enjoyed this episode Facade design pattern

The Facade pattern provides a unified interface in a subsystem. The Facade defines a HIGHER level interface easier to use.

let’s create 2 classes:
**SubsystemA** and **SubsystemB**

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

The Facade's methods are convenient shortcuts to the sophisticated functionality of the subsystems. 
However, clients get only to a fraction of a subsystem's capabilities.
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
we add includes the file we just created

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




The Ray Code is AWESOME!!!

[Wikipedia](https://en.wikipedia.org/wiki/Facade_pattern)


Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)

