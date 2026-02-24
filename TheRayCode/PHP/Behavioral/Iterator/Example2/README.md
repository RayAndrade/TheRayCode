[top](../README.md) | [script](script/page01.md)

Certainly! Let's modify the example to use "counting sheep" as a theme. We'll create a simple program that iterates over a collection of sheep, each with a unique name. This will demonstrate the Iterator design pattern in PHP.

### Project Structure

1. `Sheep.php` - Represents a single sheep.
2. `SheepHerd.php` - Represents a collection (herd) of sheep.
3. `SheepHerdIterator.php` - An iterator for the SheepHerd.
4. `index.php` - Demonstrates the usage of the iterator.

### Step-by-Step Creation and Explanation

#### 1. Sheep.php

This class represents a single sheep with a name.

```php
<?php

class Sheep {
    private $name;

    public function __construct($name) {
        $this->name = $name;
    }

    public function getName() {
        return $this->name;
    }
}
```

#### 2. SheepHerd.php

This class represents a collection of `Sheep` objects. It stores sheep and provides methods to add or remove a sheep from the herd.

```php
<?php

class SheepHerd {
    private $sheep = [];

    public function addSheep(Sheep $sheep) {
        $this->sheep[] = $sheep;
    }

    public function removeSheep(Sheep $sheep) {
        foreach ($this->sheep as $key => $s) {
            if ($s->getName() === $sheep->getName()) {
                unset($this->sheep[$key]);
            }
        }
        $this->sheep = array_values($this->sheep);
    }

    public function count() {
        return count($this->sheep);
    }

    public function getSheep($index) {
        if (isset($this->sheep[$index])) {
            return $this->sheep[$index];
        }
        return null;
    }
}
```

#### 3. SheepHerdIterator.php

This class implements the iterator for `SheepHerd`. It allows traversing over the `SheepHerd` collection.

```php
<?php

class SheepHerdIterator {
    private $sheepHerd;
    private $currentSheep = 0;

    public function __construct(SheepHerd $sheepHerd) {
        $this->sheepHerd = $sheepHerd;
    }

    public function hasNext() {
        return $this->currentSheep < $this->sheepHerd->count();
    }

    public function next() {
        return $this->sheepHerd->getSheep($this->currentSheep++);
    }
}
```

#### 4. index.php

This file demonstrates the usage of the above classes. It creates a herd of sheep, adds them to the `SheepHerd`, and then iterates over them using `SheepHerdIterator`.

```php
<?php

require_once 'Sheep.php';
require_once 'SheepHerd.php';
require_once 'SheepHerdIterator.php';

// Create sheep herd and add sheep
$sheepHerd = new SheepHerd();
$sheepHerd->addSheep(new Sheep("Dolly"));
$sheepHerd->addSheep(new Sheep("Shaun"));
$sheepHerd->addSheep(new Sheep("Timmy"));

// Iterate over sheep herd
$iterator = new SheepHerdIterator($sheepHerd);
while ($iterator->hasNext()) {
    $sheep = $iterator->next();
    echo "Counting sheep: " . $sheep->getName() . "\n";
}
```

### Running the Code

When you run `index.php`, you should see the names of the sheep printed one after the other, like this:

```
Counting sheep: Dolly
Counting sheep: Shaun
Counting sheep: Timmy
```

This output demonstrates the Iterator pattern in action, allowing you to sequentially access elements of the `SheepHerd` without exposing its internal structure.
