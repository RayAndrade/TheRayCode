[up](../README.md)

Decorator also known as: Wrapper is a structural design pattern that lets you attach new behaviors to objects by placing these objects inside special wrapper objects that contain the behaviors.

Using decorators you can wrap objects countless number of times since both target objects and decorators follow the same interface. The resulting object will get a stacking behavior of all wrappers.

This example illustrates the structure of the Decorator design pattern and focuses on the following questions:
<ol>
<li>What classes does it consist of?</li>
<li>What roles do these classes play?</li>
<li>In what way the elements of the pattern are related?</li>
</ol>

Let's start by createing the **Component**.php file  *interface*.
```php
interface Component
{
    public function operation(): string;
}
```

Let's create a class called **Decorator**.php and let it be *implemented* by **Component**.php.
The Decorator delegates all work to the wrapped component.
```php
class Decorator implements Component
{
    protected $component;

    public function __construct(Component $component)
    {
        $this->component = $component;
    }

    public function operation(): string
    {
        return $this->component->operation();
    }
}
```

Let's also create a **Concrete Component** and have implemt the **Component**.php class.
We call our compnent **ConcreteDecoratorA**.
Decorators may call parent implementation of the operation, instead of calling the wrapped object directly. 
This approach simplifies extension of decorator classes.
```php
class ConcreteDecoratorA extends Decorator
{
    public function operation(): string
    {
        return "ConcreteDecoratorA(" . parent::operation() . ")";
    }
}
```

Let's now create a **ConcreteDecoratorB**.php class file.
Like **ConcreteDecoratorA** it too is exteded with the **Decorator**.php class
```php
class ConcreteDecoratorB extends Decorator
{
    public function operation(): string
    {
        return "ConcreteDecoratorB(" . parent::operation() . ")";
    }
}
```

Let's now goto the index.php file at the top we have the *includes*.
```php
include_once ('Component.php');
include_once ('ConcreteComponent.php');
include_once ('Decorator.php');
include_once ('ConcreteDecoratorA.php');
include_once ('ConcreteDecoratorB.php');
```

The client code works with all objects using the Component interface. 
This way it can stay independent of the concrete classes of components it works with.
```php
function clientCode(Component $component)
{
    // ...

    echo "RESULT: " . $component->operation();

    // ...
}
```

This way the client code can support both simple components as well as decorated ones.
```php
$simple = new ConcreteComponent;
echo "Client: I've got a simple component:<br/>";
clientCode($simple);
echo "<br/><br/>";
```
 
Note how decorators can wrap not only simple components but the other decorators as well.
 
```php
$decorator1 = new ConcreteDecoratorA($simple);
$decorator2 = new ConcreteDecoratorB($decorator1);
echo "Client: Now I've got a decorated component:<br/>";
clientCode($decorator2);
```
When we view the the index.php through a browser you should get:

```php
Client: I've got a simple component:
RESULT: ConcreteComponent

Client: Now I've got a decorated component:
RESULT: ConcreteDecoratorB(ConcreteDecoratorA(ConcreteComponent))
```
The Ray Code is AWESOME!!! 


[Wikipedia](https://en.wikipedia.org/wiki/Decorator_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)
