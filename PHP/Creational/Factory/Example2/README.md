[up](../README.md)

Let's create a toy building store that utilizes the Factory design pattern. We'll design this to create different types of toys (e.g., Car, Doll). This is just a basic example, but should help you understand the Factory pattern.

## Order of Class Creation:
1. **ToyInterface.php** - An interface for all toys.
2. **Car.php** - A concrete implementation of the ToyInterface.
3. **Doll.php** - Another concrete implementation of the ToyInterface.
4. **ToyFactory.php** - The factory class responsible for creating different types of toys.
5. **index.php** - The demo file to show how this all comes together.

### 1. ToyInterface.php
```php
<?php
// ToyInterface.php
interface ToyInterface {
    public function make();
}
?>
```

### 2. Car.php
```php
<?php
// Car.php
include_once 'ToyInterface.php';

class Car implements ToyInterface {
    public function make() {
        return "Making a car toy...";
    }
}
?>
```

### 3. Doll.php
```php
<?php
// Doll.php
include_once 'ToyInterface.php';

class Doll implements ToyInterface {
    public function make() {
        return "Making a doll toy...";
    }
}
?>
```

### 4. ToyFactory.php
```php
<?php
// ToyFactory.php
include_once 'Car.php';
include_once 'Doll.php';

class ToyFactory {
    public function createToy($toyType) {
        switch($toyType) {
            case "Car":
                return new Car();
            case "Doll":
                return new Doll();
            default:
                throw new Exception("Invalid toy type");
        }
    }
}
?>
```

### 5. index.php
```php
<?php
// index.php
include_once 'ToyFactory.php';

$factory = new ToyFactory();

try {
    $carToy = $factory->createToy("Car");
    echo $carToy->make() . "<br>";

    $dollToy = $factory->createToy("Doll");
    echo $dollToy->make();
} catch (Exception $e) {
    echo "Error: " . $e->getMessage();
}
?>
```

When you open `index.php` in the browser, you will see:
```
Making a car toy...
Making a doll toy...
```

### Explanation:
1. **ToyInterface.php** - This is the interface that all toy objects will implement. It ensures that all toys have a `make()` method.
2. **Car.php & Doll.php** - These are the concrete implementations of the toys, implementing the ToyInterface.
3. **ToyFactory.php** - This is our Factory class. The primary job of the Factory pattern is to create objects. In this case, based on the string provided, it will create a Car or Doll object.
4. **index.php** - This is the demo showing how to use the Factory. It creates a Car and a Doll using the ToyFactory and then calls the `make()` method on them.

The `include_once` statements are essential for making sure that all necessary files are included, and only once. This prevents redeclaration of classes and makes the system work smoothly.
