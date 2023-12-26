[top](../README.md)

Teaching the Composite design pattern in PHP can be a fun and engaging experience, especially when you add a bit of humor to the mix. The Composite pattern is all about treating individual objects and compositions of objects uniformly. It's like having a single chocolate chip cookie and a big box of them; you can enjoy them one by one or devour the whole box in the same way (though your dentist might not recommend the latter).

Let's break this down into a playful example: We'll create a structure representing a group of comedians, where each comedian can either be a solo performer or a comedy troupe (a group of comedians). In Composite terms, the solo performer is a 'leaf', and the troupe is a 'composite' that can contain leaves or other composites.

### Project Structure

1. **Comedian.php** (Leaf)
2. **ComedyTroupe.php** (Composite)
3. **Performer.php** (Component Interface)
4. **index.php** (Client)

### Step 1: Performer.php

This is our component interface. Both solo comedians and comedy troupes will implement this interface.

```php
// Performer.php

interface Performer {
    public function perform();
}
```

### Step 2: Comedian.php

This is our leaf class representing individual comedians.

```php
// Comedian.php

class Comedian implements Performer {
    private $name;

    public function __construct($name) {
        $this->name = $name;
    }

    public function perform() {
        return "Comedian {$this->name} tells a joke.\n";
    }
}
```

### Step 3: ComedyTroupe.php

This is our composite class. It can contain individual comedians or other comedy troupes.

```php
// ComedyTroupe.php

class ComedyTroupe implements Performer {
    private $performers = [];

    public function add(Performer $performer) {
        $this->performers[] = $performer;
    }

    public function perform() {
        $performance = "Comedy Troupe starts performing:\n";
        foreach ($this->performers as $performer) {
            $performance .= $performer->perform();
        }
        return $performance;
    }
}
```

### Step 4: index.php

This is where we bring our comedy show to life.

```php
// index.php

require_once 'Performer.php';
require_once 'Comedian.php';
require_once 'ComedyTroupe.php';

// Solo comedians
$jerry = new Comedian("Jerry");
$elaine = new Comedian("Elaine");

// A comedy troupe
$funnyFolks = new ComedyTroupe();
$funnyFolks->add($jerry);
$funnyFolks->add($elaine);

// Another solo comedian
$kramer = new Comedian("Kramer");

// The big comedy troupe
$comedyFestival = new ComedyTroupe();
$comedyFestival->add($funnyFolks);
$comedyFestival->add($kramer);

echo $comedyFestival->perform();
```

### What to Expect When You Run the Code

When you run `index.php`, you should see output showing both individual comedians and the troupes performing. It will demonstrate how both leaves (individual comedians) and composites (comedy troupes) can be treated uniformly.

### The Order of Creation

1. Define the `Performer` interface.
2. Create the `Comedian` class (leaf).
3. Develop the `ComedyTroupe` class (composite).
4. Use `index.php` to demonstrate the pattern.

### The Humorous Twist

When explaining this, you can use humor like, "Think of a comedian as a single joke and a comedy troupe as a full comedy special on Netflix. Both can make you laugh, but the troupe might include a variety of humor styles, just like our Composite pattern handles both single and grouped objects."

This approach not only makes learning about design patterns more enjoyable but also helps in understanding the practical application of these patterns in real-world scenarios.
