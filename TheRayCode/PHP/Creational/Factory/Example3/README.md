[up](../README.md)

Let's create a simple dessert factory using the Factory design pattern in PHP.

## File Structure

1. `DessertFactory.php`: Contains the Factory class.
2. `Dessert.php`: Abstract base class for all desserts.
3. `Cake.php`: A concrete class that represents a Cake.
4. `IceCream.php`: A concrete class that represents an Ice Cream.
5. `index.php`: Contains the demonstration of the code.

### 1. Dessert.php

This is an abstract base class for all desserts.

```php
<?php
// Dessert.php

abstract class Dessert {
    abstract public function eat(): string;
}
?>
```

### 2. Cake.php

This class represents a Cake.

```php
<?php
// Cake.php

include_once 'Dessert.php';

class Cake extends Dessert {
    public function eat(): string {
        return "Eating a delicious cake!";
    }
}
?>
```

### 3. IceCream.php

This class represents an Ice Cream.

```php
<?php
// IceCream.php

include_once 'Dessert.php';

class IceCream extends Dessert {
    public function eat(): string {
        return "Eating a yummy ice cream!";
    }
}
?>
```

### 4. DessertFactory.php

This is the factory class responsible for creating dessert objects.

```php
<?php
// DessertFactory.php

include_once 'Cake.php';
include_once 'IceCream.php';

class DessertFactory {
    public static function createDessert(string $type): ?Dessert {
        switch (strtolower($type)) {
            case 'cake':
                return new Cake();
            case 'icecream':
                return new IceCream();
            default:
                return null;
        }
    }
}
?>
```

### 5. index.php

This will demonstrate the use of the dessert factory.

```php
<?php
// index.php

include_once 'DessertFactory.php';

$dessertType = 'cake'; // You can change this to 'icecream' for testing purposes.

$dessert = DessertFactory::createDessert($dessertType);

if ($dessert) {
    echo $dessert->eat();
} else {
    echo "Invalid dessert type!";
}
?>
```

## Explanation:

1. **Dessert.php**: It's an abstract class that provides a basic structure for all desserts. Any dessert class will have an `eat` method.
2. **Cake.php and IceCream.php**: These classes extend the `Dessert` class, providing a concrete implementation of the `eat` method.
3. **DessertFactory.php**: This is the core of the Factory Design Pattern. It has a static method that takes a type as an argument and returns a new instance of a dessert based on that type.
4. **index.php**: Demonstrates how the factory can be used to create and utilize a dessert object.

When you visit `index.php` in the browser, you should see "Eating a delicious cake!" or "Eating a yummy ice cream!", depending on the `$dessertType` you've set.
