The Iterator design pattern is used to provide a standard way to traverse through a collection of items without needing to understand the underlying structure of the collection. This pattern is particularly useful when you need to provide a standard way to iterate through a collection, exposed to the client code.

In this example, we'll create an application that uses the Iterator pattern to cycle through a collection of sheep, which is a simple and understandable real-world scenario for students. We will create four main files: `Sheep.php`, `SheepCollection.php`, `SheepIterator.php`, and `index.php`.

### 1. `Sheep.php`
This file represents a single sheep object.

```php
<?php
// Sheep.php
class Sheep {
    private string $name;

    public function __construct(string $name) {
        $this->name = $name;
    }

    public function getName(): string {
        return $this->name;
    }
}
?>
```

**Explanation:**
- The `Sheep` class represents an individual sheep with a name.
- It has a constructor that sets the sheep's name and a getter method to retrieve the name.

### 2. `SheepIterator.php`
This is the actual iterator for the collection of sheep.

```php
<?php
// SheepIterator.php
class SheepIterator implements Iterator {
    private array $sheepList;
    private int $position = 0;

    public function __construct(array $sheepList) {
        $this->sheepList = $sheepList;
    }

    public function current(): Sheep {
        return $this->sheepList[$this->position];
    }

    public function key(): int {
        return $this->position;
    }

    public function next(): void {
        ++$this->position;
    }

    public function rewind(): void {
        $this->position = 0;
    }

    public function valid(): bool {
        return isset($this->sheepList[$this->position]);
    }
}
?>
```

**Explanation:**
- The `SheepIterator` class implements the built-in `Iterator` interface, making sure that the class implements all the necessary methods (`current`, `key`, `next`, `rewind`, `valid`) for an iterator.
- The `$sheepList` variable holds the collection that this iterator is going to traverse.
- The `$position` variable tracks the current position within the collection during iteration.

### 3. `SheepCollection.php`
This file represents the collection of sheep and returns an iterator for them.

```php
<?php
// SheepCollection.php
class SheepCollection implements IteratorAggregate {
    private array $sheepList;

    public function __construct() {
        $this->sheepList = [];
    }

    public function addSheep(Sheep $sheep): void {
        $this->sheepList[] = $sheep;
    }

    public function getIterator(): SheepIterator {
        return new SheepIterator($this->sheepList);
    }
}
?>
```

**Explanation:**
- The `SheepCollection` class implements the `IteratorAggregate` interface, which requires that the class implements a single method `getIterator`. This method returns an instance of the `SheepIterator`.
- The `$sheepList` variable is an array meant to hold `Sheep` objects.
- The `addSheep` method allows us to add new `Sheep` objects to the `$sheepList`.

### 4. `index.php`
This is the entry point for our application and will demonstrate the iterator in action.

```php
<?php
// index.php
require_once 'Sheep.php';
require_once 'SheepCollection.php';
require_once 'SheepIterator.php';

$sheepCollection = new SheepCollection();
$sheepCollection->addSheep(new Sheep("Sheep 1"));
$sheepCollection->addSheep(new Sheep("Sheep 2"));
$sheepCollection->addSheep(new Sheep("Sheep 3"));

echo "Iterating over sheep collection:<br>";
foreach ($sheepCollection as $sheep) {
    echo $sheep->getName() . "<br>";
}
?>
```

**Explanation:**
- We include our classes using `require_once`.
- We create a `SheepCollection` instance and add some sheep to our collection.
- We use a `foreach` loop to iterate over our collection. The `foreach` loop internally uses the `SheepIterator` we created.

### Order of Creating Classes
1. `Sheep.php` - as it's the base entity in our application.
2. `SheepIterator.php` - it's essential to define how we'll iterate over our collection.
3. `SheepCollection.php` - the collection class that uses `SheepIterator`.
4. `index.php` - to utilize all of the classes above and demonstrate functionality.

### Expected Browser Output for `index.php`
When you navigate to `index.php` in your browser, you should see:

```
Iterating over sheep collection:
Sheep 1
Sheep 2
Sheep 3
```

This output shows that the `Iterator` pattern works as expected, allowing seamless iteration over the object collection. Each line represents the name of a sheep in the collection, printed to the browser as the collection is iterated over.
