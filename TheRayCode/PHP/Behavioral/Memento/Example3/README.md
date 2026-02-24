[up](../README.md)

Alright, let's tackle the Memento design pattern using PHP! This design pattern involves three major components:

1. **Originator** – the object for which the state needs to be saved. It creates the memento and restores its state from it.
2. **Memento** – the object that is going to maintain the state of the originator.
3. **Caretaker** – it keeps track of multiple memento. Like keeping save points.

Let's start:

1. **Memento.php**
```php
<?php

// Memento class
class Memento {
    private $state;

    public function __construct($state) {
        $this->state = $state;
    }

    public function getState() {
        return $this->state;
    }
}

?>
```

2. **Originator.php**
```php
<?php

include 'Memento.php';

class Originator {
    private $state;

    public function setState($state) {
        $this->state = $state;
    }

    public function getState() {
        return $this->state;
    }

    public function saveStateToMemento() {
        return new Memento($this->state);
    }

    public function getStateFromMemento($memento) {
        $this->state = $memento->getState();
    }
}

?>
```

3. **Caretaker.php**
```php
<?php

class Caretaker {
    private $mementoList = [];

    public function add($memento) {
        $this->mementoList[] = $memento;
    }

    public function get($index) {
        return $this->mementoList[$index];
    }
}

?>
```

4. **index.php**
```php
<?php

include 'Originator.php';
include 'Caretaker.php';

$originator = new Originator();
$caretaker = new Caretaker();

$originator->setState("State #1");
$originator->setState("State #2");
$caretaker->add($originator->saveStateToMemento());

$originator->setState("State #3");
$caretaker->add($originator->saveStateToMemento());

$originator->setState("State #4");
echo "Current State: " . $originator->getState() . "<br>";

$originator->getStateFromMemento($caretaker->get(0));
echo "First saved State: " . $originator->getState() . "<br>";
$originator->getStateFromMemento($caretaker->get(1));
echo "Second saved State: " . $originator->getState() . "<br>";

?>
```

Here's an explanation for each class and method:

1. **Memento**: This class holds the state we want to save for the Originator. It provides a mechanism to fetch the saved state through the `getState()` method.

2. **Originator**: This class can create a memento of its current state using `saveStateToMemento()` method. It can also restore its state from a given memento using `getStateFromMemento()`.

3. **Caretaker**: It acts as a repository of mementos but doesn't exploit or examine the content of mementos.

In the demo (`index.php`), you're manipulating the state of the originator and saving these states using mementos. When you run `index.php`, you should see:

```
Current State: State #4
First saved State: State #2
Second saved State: State #3
```

This demonstrates how you can revert to previous states using the Memento design pattern.
