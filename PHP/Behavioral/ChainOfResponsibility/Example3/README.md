[up](../README.md)

Certainly! Let's re-imagine the "Chain of Responsibility" design pattern with the popular nursery rhyme: "There Was an Old Lady Who Swallowed a Fly."

In this context, each creature the old lady swallows is like a handler in the chain, and each creature reacts when swallowed, explaining why it was swallowed.

### Step 1: Handler Interface (`Creature.php`)

This interface defines the method for the action to be taken when the creature is swallowed.

```php
<?php
// Creature.php

interface Creature {
    public function setNext(Creature $creature);
    public function swallow();
}
?>
```

### Step 2: Concrete Handler (`AbstractCreature.php`)

This abstract class provides the default implementation for the `swallow` method and implements chaining behavior.

```php
<?php
// AbstractCreature.php
include_once "Creature.php";

abstract class AbstractCreature implements Creature {
    protected $name;
    protected $reason;
    protected $nextCreature;

    public function setNext(Creature $creature) {
        $this->nextCreature = $creature;
        return $this;
    }

    public function swallow() {
        echo "She swallowed the {$this->name} {$this->reason}<br>";
        if ($this->nextCreature !== null) {
            $this->nextCreature->swallow();
        }
    }
}
?>
```

### Step 3: Concrete Creatures (`Fly.php`, `Spider.php`, etc.)

These classes will implement the actions for when each creature is swallowed.

```php
<?php
// Fly.php
include_once "AbstractCreature.php";

class Fly extends AbstractCreature {
    public function __construct() {
        $this->name = "fly";
        $this->reason = "I don't know why she swallowed the fly. Perhaps she'll die.";
    }
}
?>

<?php
// Spider.php
include_once "AbstractCreature.php";

class Spider extends AbstractCreature {
    public function __construct() {
        $this->name = "spider";
        $this->reason = "that wriggled and jiggled and tickled inside her.";
    }
}
?>

// Continue with other creatures...
```

### Step 4: Demo (`index.php`)

In this file, you'll create the chain of creatures and demonstrate the process of swallowing in order.

```php
<?php
// index.php

include_once "Fly.php";
include_once "Spider.php";
// Include other creatures here...

// Create the chain of creatures
$fly = new Fly();
$spider = new Spider();

$fly->setNext($spider);
// Continue chaining other creatures...

// Demonstrate swallowing sequence
$fly->swallow();
?>
```

When you open `index.php` in a browser, you should see the sequence in which the old lady swallowed the creatures and the reasons, just like in the rhyme.

This example illustrates how you can use the "Chain of Responsibility" pattern to sequence actions in a specific order and add additional context or reasons for those actions. Each creature (handler) in the chain knows about its successor, and once its action is completed, it delegates the control to the next creature in the sequence.
