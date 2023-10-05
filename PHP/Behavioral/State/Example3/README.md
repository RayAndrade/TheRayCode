[up](../README.md)

Alright, let's reframe the State pattern using food objects. 

Suppose we have a `FoodItem` that has three states: `RawState`, `CookedState`, and `OvercookedState`. Here's how we can implement it:

**Order to Create Classes**:
1. `FoodState.php` - An interface to represent states.
2. `RawState.php`, `CookedState.php`, `OvercookedState.php` - Classes implementing the FoodState interface.
3. `FoodItem.php` - The context class that contains the state and delegates its behavior to the state class.
4. `index.php` - To demonstrate the behavior of the food item in different states.

### 1. FoodState.php
```php
<?php

interface FoodState {
    public function cook(FoodItem $item);
    public function overcook(FoodItem $item);
}
```

### 2. RawState.php
```php
<?php
include_once 'FoodState.php';

class RawState implements FoodState {
    public function cook(FoodItem $item) {
        echo "Cooked to perfection!<br>";
        $item->setState(new CookedState());
    }

    public function overcook(FoodItem $item) {
        echo "Oops! Overcooked!<br>";
        $item->setState(new OvercookedState());
    }
}
```

### 3. CookedState.php
```php
<?php
include_once 'FoodState.php';

class CookedState implements FoodState {
    public function cook(FoodItem $item) {
        echo "Oops! Overcooked!<br>";
        $item->setState(new OvercookedState());
    }

    public function overcook(FoodItem $item) {
        // Already overcooked
        echo "It's already overcooked!<br>";
    }
}
```

### 4. OvercookedState.php
```php
<?php
include_once 'FoodState.php';

class OvercookedState implements FoodState {
    public function cook(FoodItem $item) {
        // Already overcooked
        echo "It can't be cooked anymore. It's burnt!<br>";
    }

    public function overcook(FoodItem $item) {
        // Already overcooked
        echo "It's already overcooked!<br>";
    }
}
```

### 5. FoodItem.php
```php
<?php
include_once 'RawState.php';
include_once 'CookedState.php';
include_once 'OvercookedState.php';

class FoodItem {
    private $state;

    public function __construct() {
        $this->state = new RawState();
    }

    public function cook() {
        $this->state->cook($this);
    }

    public function overcook() {
        $this->state->overcook($this);
    }

    public function setState(FoodState $state) {
        $this->state = $state;
    }
}
```

### 6. index.php
```php
<?php
include_once 'FoodItem.php';

$steak = new FoodItem();

$steak->cook();     // Cooked to perfection!
$steak->cook();     // Oops! Overcooked!
$steak->overcook(); // It's already overcooked!
```

**What you should see in the browser when accessing `index.php`:**
```
Cooked to perfection!
Oops! Overcooked!
It's already overcooked!
```

**Explanation**:
- The `FoodState` interface defines methods for each possible action.
- Each concrete state (`RawState`, `CookedState`, and `OvercookedState`) implements the `FoodState` interface and provides the appropriate behavior.
- The `FoodItem` class (context) maintains a reference to the current state and delegates its behavior to the current state object.
- The `index.php` file demonstrates the behavior of the `FoodItem` as it transitions between states.
