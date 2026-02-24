[up](../README.md)

Mediator is a behavioral design pattern that lets you reduce chaotic dependencies between objects. 
The pattern restricts direct communications between the objects and forces them to collaborate only via a mediator object.

The pure implementation of the Mediator pattern isn’t as common in PHP, as it’s in other languages, especially GUI-targeted like Java or C#. 
A PHP application may indeed contain dozens of components, but they rarely communicate directly within a single session.

We start by createing the **Mediator** *interface*

The Mediator interface declares a method used by components to notify the mediator about various events. 
The Mediator may react to these events and pass the execution to other components.
 
```php
interface Mediator
{
    public function notify(object $sender, string $event): void;
}
```

The Base Component provides the basic functionality of storing a mediator's  instance inside component objects.
```php
class BaseComponent
{
    protected $mediator;

    public function __construct(Mediator $mediator = null)
    {
        $this->mediator = $mediator;
    }
    public function setMediator(Mediator $mediator): void
    {
        $this->mediator = $mediator;
    }
}
```

 Solid Mediators implement cooperative behavior by coordinating several  components.


```php
class SolidMediator implements Mediator
{
    private $componentA;
    private $componentB;
    public function __construct(ComponentA $cA, ComponentB $cB)
    {
        $this->componentA = $cA;
        $this->componentA->setMediator($this);
        $this->componentB = $cB;
        $this->componentB->setMediator($this);
    }
    public function notify(object $sender, string $event): void
    {
        if ($event == "A") {
            echo "Mediator reacts on A and triggers following operations:<br/>";
            $this->componentB->doC();
        }

        if ($event == "D") {
            echo "Mediator reacts on D and triggers following operations:<br/>";
            $this->componentA->doB();
            $this->componentB->doC();
        }
    }
}
```

Concrete Components implement various functionality. 
They don't depend on other components. 
They also don't depend on any concrete mediator classes.
```php
class ComponentA extends BaseComponent
{
    public function doA(): void
    {
        echo "Component A does A.<br/>";
        $this->mediator->notify($this, "A");
    }
    public function doB(): void
    {
        echo "Component B does B.<br/>";
        $this->mediator->notify($this, "B");
    }
}
```
Let's create another component we call ComponentB
```php
class ComponentB extends BaseComponent
{
    public function doC(): void
    {
        echo "Component A does C.<br/>";
        $this->mediator->notify($this, "C");
    }
    public function doD(): void
    {
        echo "Component B does D.<br/>";
        $this->mediator->notify($this, "D");
    }
}
```

Let's put this altogether in the index.php we first need to have our includes at the top.

```php
include_once ('Mediator.php');
include_once('SolidMediator.php');
include_once ('BaseComponent.php');
include_once('ComponentA.php');
include_once('ComponentB.php');
```

Now the rest of the demo
```php
$cA = new ComponentA;
$cB = new ComponentB;
$mediator = new SolidMediator($cA, $cB);

echo "Client triggers operation A.<br/>";
$cA->doA();

echo "<br/>";
echo "Client triggers operation B.<br/>";
$cB->doD();
```
When we veiw our php code thru a browser we should get

```run
Client triggers operation A.
Component A does A.
Mediator reacts on A and triggers following operations:
Component A does C.

Client triggers operation B.
Component B does D.
Mediator reacts on D and triggers following operations:
Component B does B.
Component A does C.
```

The Ray Code is AWESOME!!!


[Wikipedia](https://en.wikipedia.org/wiki/Mediator_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[RayAndrade.COM](https://www.RayAndrade.com)

[TherRayCode.ORG](https://www.TheRayCode.org)

[Facebook](https://www.facebook.com/TheRayCode/)

[X @TheRayCode](https://www.x.com/TheRayCode/)

[YouTube](https://www.youtube.com/TheRayCode/)

