**Component.php**

```php
interface Component
{
    public function operation(): string;
}
```

**Decorator.php**

```php
require "Component.php";

class Decorator implements Component
{
    protected $component;

    public function __construct(Component $component)
    {
        $this->component = $component;
    }

    /**
     * The Decorator delegates all work to the wrapped component.
     */
    public function operation(): string
    {
        return $this->component->operation();
    }
}
```

**ConcreteDecoratorA.php**

```php
require "Decorator.php";

class ConcreteDecoratorA extends Decorator
{
    public function operation(): string
    {
        return "ConcreteDecoratorA(" . parent::operation() . ")";
    }
}
```

**ConcreteDecoratorB.php**

```php
require "Decorator.php";

class ConcreteDecoratorB extends Decorator
{
    public function operation(): string
    {
        return "ConcreteDecoratorB(" . parent::operation() . ")";
    }
}
```

**ConcreteComponent.php**

```php
require "Component.php";

class ConcreteComponent implements Component
{
    public function operation(): string
    {
        return "ConcreteComponent";
    }
}
```

**index.php**

```php

include_once ('ConcreteComponent.php');
include_once ('ConcreteDecoratorA.php');
include_once ('ConcreteDecoratorB.php');

function clientCode(Component $component)
{
    // ...

    echo "RESULT: " . $component->operation();

    // ...
}

$simple = new ConcreteComponent;
echo "Client: I've got a simple component:<br/>";
clientCode($simple);
echo "<br/><br/>";

$decorator1 = new ConcreteDecoratorA($simple);
$decorator2 = new ConcreteDecoratorB($decorator1);
echo "Client: Now I've got a decorated component:<br/>";
clientCode($decorator2);

$decorator1 = new ConcreteDecoratorA($simple);
$decorator2 = new ConcreteDecoratorB($decorator1);
echo "Client: Now I've got a decorated component:<br/>";
clientCode($decorator2);
```
