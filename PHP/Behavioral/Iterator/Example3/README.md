[top](../README.md) | [script](script/page01.md)

Certainly! Let's adapt the example to iterate through a collection of monkeys. We'll create a simple program that demonstrates the Iterator design pattern in PHP with a "Monkey Troop" theme.

### Project Structure

1. `Monkey.php` - Represents a single monkey.
2. `MonkeyTroop.php` - Represents a collection (troop) of monkeys.
3. `MonkeyTroopIterator.php` - An iterator for the MonkeyTroop.
4. `index.php` - Demonstrates the usage of the iterator.

### Step-by-Step Creation and Explanation

#### 1. Monkey.php

This class represents a single monkey with a name.

```php
<?php

class Monkey {
    private $name;

    public function __construct($name) {
        $this->name = $name;
    }

    public function getName() {
        return $this->name;
    }
}
```

#### 2. MonkeyTroop.php

This class represents a collection of `Monkey` objects. It stores monkeys and provides methods to add or remove a monkey from the troop.

```php
<?php

class MonkeyTroop {
    private $monkeys = [];

    public function addMonkey(Monkey $monkey) {
        $this->monkeys[] = $monkey;
    }

    public function removeMonkey(Monkey $monkey) {
        foreach ($this->monkeys as $key => $m) {
            if ($m->getName() === $monkey->getName()) {
                unset($this->monkeys[$key]);
            }
        }
        $this->monkeys = array_values($this->monkeys);
    }

    public function count() {
        return count($this->monkeys);
    }

    public function getMonkey($index) {
        if (isset($this->monkeys[$index])) {
            return $this->monkeys[$index];
        }
        return null;
    }
}
```

#### 3. MonkeyTroopIterator.php

This class implements the iterator for `MonkeyTroop`. It allows traversing over the `MonkeyTroop` collection.

```php
<?php

class MonkeyTroopIterator {
    private $monkeyTroop;
    private $currentMonkey = 0;

    public function __construct(MonkeyTroop $monkeyTroop) {
        $this->monkeyTroop = $monkeyTroop;
    }

    public function hasNext() {
        return $this->currentMonkey < $this->monkeyTroop->count();
    }

    public function next() {
        return $this->monkeyTroop->getMonkey($this->currentMonkey++);
    }
}
```

#### 4. index.php

This file demonstrates the usage of the above classes. It creates a troop of monkeys, adds them to the `MonkeyTroop`, and then iterates over them using `MonkeyTroopIterator`.

```php
<?php

require_once 'Monkey.php';
require_once 'MonkeyTroop.php';
require_once 'MonkeyTroopIterator.php';

// Create monkey troop and add monkeys
$monkeyTroop = new MonkeyTroop();
$monkeyTroop->addMonkey(new Monkey("George"));
$monkeyTroop->addMonkey(new Monkey("King Kong"));
$monkeyTroop->addMonkey(new Monkey("Abu"));

// Iterate over monkey troop
$iterator = new MonkeyTroopIterator($monkeyTroop);
while ($iterator->hasNext()) {
    $monkey = $iterator->next();
    echo "Observing monkey: " . $monkey->getName() . "\n";
}
```

### Running the Code

When you run `index.php`, you should see the names of the monkeys printed one after the other, like this:

```
Observing monkey: George
Observing monkey: King Kong
Observing monkey: Abu
```

This output demonstrates the Iterator pattern in action, allowing you to sequentially access elements of the `MonkeyTroop` without exposing its internal structure.
