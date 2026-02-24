[up](../README.md)

Let's break down the Decorator design pattern and how to implement it in PHP.

## Decorator Pattern

The Decorator Pattern is a structural pattern that allows you to add new functionality to an existing object without altering its structure. The main idea is to have a basic component and then wrap it with one or more decorators that enhance or modify its functionality.

## Implementation

1. **Component Interface**: This is the main interface that defines a method that needs to be implemented by both the main component and the decorators.

2. **Concrete Component**: This is the main object to which we'll add some functionality using decorators.

3. **Decorator Interface or Abstract Class**: It implements the component interface and serves as a base for all concrete decorators.

4. **Concrete Decorators**: These are the classes that add new functionalities to the main component.

### Order of Class Creation

1. `ComponentInterface.php`
2. `ConcreteComponent.php`
3. `Decorator.php`
4. `ConcreteDecoratorA.php` and other decorators

### Code

1. **ComponentInterface.php**
```php
<?php
interface ComponentInterface {
    public function operation(): string;
}
```

2. **ConcreteComponent.php**
```php
<?php
require_once 'ComponentInterface.php';

class ConcreteComponent implements ComponentInterface {
    public function operation(): string {
        return "ConcreteComponent";
    }
}
```

3. **Decorator.php**
```php
<?php
require_once 'ComponentInterface.php';

abstract class Decorator implements ComponentInterface {
    protected ComponentInterface $component;

    public function __construct(ComponentInterface $component) {
        $this->component = $component;
    }

    abstract public function operation(): string;
}
```

4. **ConcreteDecoratorA.php**
```php
<?php
require_once 'Decorator.php';

class ConcreteDecoratorA extends Decorator {
    public function operation(): string {
        return "ConcreteDecoratorA(" . $this->component->operation() . ")";
    }
}

```

5. **ConcreteDecoratorB.php**
```php
<?php
require_once 'Decorator.php';

class ConcreteDecoratorB extends Decorator {
    public function operation(): string {
        return "ConcreteDecoratorB(" . $this->component->operation() . ")";
    }
}
```

6. **index.php**
```php
<?php
require_once 'ConcreteComponent.php';
require_once 'ConcreteDecoratorA.php';
require_once 'ConcreteDecoratorB.php';

// Create a concrete component
$component = new ConcreteComponent();

// Decorate it with ConcreteDecoratorA
$decoratorA = new ConcreteDecoratorA($component);

// Further decorate with ConcreteDecoratorB
$decoratorB = new ConcreteDecoratorB($decoratorA);

// Display the final operation
echo $decoratorB->operation();
```

### What to Expect in the Browser at index.php

When you run `index.php`, you'll see:
```
ConcreteDecoratorB(ConcreteDecoratorA(ConcreteComponent))
```

This shows the order of decoration applied to the ConcreteComponent.

### Explanation:

1. `ComponentInterface.php`: This interface defines a method `operation()` which any concrete component and decorator will implement.
 
2. `ConcreteComponent.php`: A simple component that implements the `ComponentInterface` and returns its class name.

3. `Decorator.php`: This is an abstract class that implements `ComponentInterface`. It holds a reference to a `ComponentInterface`, which allows us to nest decorators.

4. `ConcreteDecoratorA.php` and `ConcreteDecoratorB.php`: These classes extend the abstract `Decorator` class and modify the `operation()` method to show they've decorated the component.

5. `index.php`: Here we're creating a `ConcreteComponent`, decorating it with `ConcreteDecoratorA` and then further decorating it with `ConcreteDecoratorB`. When we call the `operation()` method on the final decorated component, it shows the order of decoration.

This way, you can explain to your students how decorators work, how they can be nested, and how they enhance or modify the functionality of components.
