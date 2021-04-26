# TheRayCode
## Facade pattern php

PHP
Welcome to The Ray Code show.
In this show I plan to cover the Facade design pattern

The Facade pattern provides a unified interface in a subsystem. The Facade defines a HIGHER level interface easier to use.

let’s create 2 classes:
**Subsystem1** and **Subsystem2**

```php
Subsystem1
```

```php
public function operation1(): string
{
  return "Subsystem1: Ready!<br/>";
}
```
```php
public function operationN(): string
{
  return "Subsystem1: Go!<br/>";
}
```
```php
Subsystem2
```

```php
public function operation1(): string
{
  return "Subsystem2: Ready!<br/>";
}
```
```php
public function operationZ(): string
{
  return "Subsystem2: Fire!<br/>";
}
```

now create **class Facade**


add code:

```php
protected $subsystemA;
protected $subsystemB;
```

```php
public function __construct(
SubsystemA $subsystem1 = null,
SubsystemB $subsystem2 = null
 ) {
$this->subsystem1 = $subsystem1 ?: new SubsystemA;
$this->subsystem2 = $subsystem2 ?: new SubsystemB;
}
```


```php
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
```

last we go to the index page 
we add includes the file we just created

```php
include_once ('Facade.php');
include_once ('SubsystemA.php');
include_once ('SubsystemB.php');
```

and add code:

```php
function clientCode(Facade $facade)
{
  echo $facade->operation();
}

$subsystem1 = new SubsystemA;
$subsystem2 = new SubsystemB;
$facade = new Facade($subsystem1, $subsystem2);
clientCode($facade);
```


Facade is a structural design pattern that provides a simplified interface to a library, a framework, or any other complex set of classes.

I hope you’ve enjoyed this episode Facade design pattern

this and other design patterns you can find in this channel

you purchase the whole series of 22 design patterns in C# C++ PHP Java or any combinations of languages along with UMLs (Unified Modeling Language) diagrams
 be good subscribe and like The Ray Code,.



[Wikipedia](https://en.wikipedia.org/wiki/Facade_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)

