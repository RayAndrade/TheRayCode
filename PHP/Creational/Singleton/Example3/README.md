[up](../README.md)

Certainly! Let's use the Singleton pattern to ensure the `Unicorn` is a unique object.

1. **Unicorn.php**: This file will contain the Unicorn class that follows the Singleton pattern.

```php
<?php
// Unicorn.php

class Unicorn {
    private static $instance;
    private $name;

    // Constructor is made private to prevent the use of "new"
    private function __construct($name) {
        $this->name = $name;
    }

    // Cloning and unserialization methods are made private to prevent cloning or unserialization of an instance
    private function __clone() {}

    private function __wakeup() {}

    // The method to access the singleton instance
    public static function getInstance($name = "Mystical Unicorn") {
        if (!isset(self::$instance)) {
            self::$instance = new Unicorn($name);
        }

        return self::$instance;
    }

    public function getName() {
        return $this->name;
    }
}
?>
```

2. **index.php**: This file will demonstrate the uniqueness of the Unicorn instance.

```php
<?php
// index.php

// Include the Unicorn class
require_once "Unicorn.php";

$unicorn1 = Unicorn::getInstance("Starlight");
$unicorn2 = Unicorn::getInstance("Moonbeam");

echo "First Unicorn's name: " . $unicorn1->getName() . "<br>";
echo "Second Unicorn's name: " . $unicorn2->getName() . "<br>";

if ($unicorn1 === $unicorn2) {
    echo "Both unicorns are the same unicorn!";
} else {
    echo "They are different unicorns.";
}
?>
```

**Explanation**:
- `Unicorn`: The class is designed to ensure there's only one instance of it. 
    - The constructor is private and initializes the name of the unicorn.
    - The `__clone` and `__wakeup` methods are private to prevent cloning and unserialization.
    - The `getInstance` method checks if a `Unicorn` instance already exists. If not, it creates one with the given name and returns it. If an instance already exists, it just returns the existing instance.

- `index.php`: This file demonstrates the use of the `Unicorn` singleton. It tries to create two unicorns with different names, but since the `Unicorn` is a singleton, both variables (`$unicorn1` and `$unicorn2`) reference the same instance.

**Browser Output**:
When you run `index.php` in your browser, you should see:

```
First Unicorn's name: Starlight
Second Unicorn's name: Starlight
Both unicorns are the same unicorn!
```

This output indicates that the `Unicorn` class correctly implements the Singleton pattern, ensuring that there's only ever one instance of the `Unicorn`, even when we try to initialize it with different names.

```
First Unicorn's name: Starlight
Second Unicorn's name: Starlight
Both unicorns are the same unicorn!
```

