[up](../README.md)

Let's add a humorous twist to the Composite design pattern example in PHP. We'll still use the file system analogy, but with a more whimsical approach.

### Step 1: Define the Component Interface

**CosmicEntity.php**
```php
<?php

// The CosmicEntity interface declares universal operations for all objects,
// whether they're a tiny SpacePea or a gigantic SpaceWhale.
interface CosmicEntity {
    public function getMass();
    public function getIdentification();
}
```

### Step 2: Create Leaf Objects

**SpacePea.php**
```php
<?php

require_once 'CosmicEntity.php';

// The SpacePea class represents those tiny, insignificant specks floating
// in the vastness of space. They can't contain other entities, but they're
// essential for... well, something, probably.
class SpacePea implements CosmicEntity {
    private $name;
    private $mass;

    public function __construct($name, $mass) {
        $this->name = "Tiny " . $name;
        $this->mass = $mass;
    }

    public function getMass() {
        return $this->mass;
    }

    public function getIdentification() {
        return $this->name;
    }
}
```

### Step 3: Create Composite Objects

**SpaceWhale.php**
```php
<?php

require_once 'CosmicEntity.php';

// The SpaceWhale class represents those enormous entities that roam the
// cosmos, gobbling up SpacePeas. They can contain other entities, and they
// often sing melancholic songs about the loneliness of space.
class SpaceWhale implements CosmicEntity {
    private $name;
    private $minions;

    public function __construct($name) {
        $this->name = "Majestic " . $name;
        $this->minions = [];
    }

    public function addMinion(CosmicEntity $entity) {
        $this->minions[] = $entity;
    }

    public function getMass() {
        $totalMass = 0;
        foreach ($this->minions as $minion) {
            $totalMass += $minion->getMass();
        }
        return $totalMass;
    }

    public function getIdentification() {
        return $this->name;
    }
}
```

### Step 4: Demonstrate the Composite Pattern

**index.php**
```php
<?php

require_once 'SpacePea.php';
require_once 'SpaceWhale.php';

// Create some SpacePeas
$pea1 = new SpacePea("Pea1", 1);
$pea2 = new SpacePea("Pea2", 2);

// Create a SpaceWhale and add SpacePeas to it
$whale = new SpaceWhale("Whaley McWhaleface");
$whale->addMinion($pea1);
$whale->addMinion($pea2);

// Create a baby SpaceWhale and add it to the parent whale
$babyWhale = new SpaceWhale("Mini McWhaleface");
$babyWhale->addMinion(new SpacePea("BabyPea", 0.5));
$whale->addMinion($babyWhale);

// Display the mass of the SpaceWhale
echo "Total Mass of '" . $whale->getIdentification() . "': " . $whale->getMass() . " space units";
```

### Order of Creation

1. **CosmicEntity.php**: Define the cosmic interface.
2. **SpacePea.php**: Implement the tiny, yet significant, SpacePeas.
3. **SpaceWhale.php**: Implement the grand, space-roaming SpaceWhales.
4. **index.php**: Demonstrate the cosmic dance of SpacePeas and SpaceWhales.

### Expected Output

When you run `index.php`, you should see the total mass of the SpaceWhale, including all its SpacePeas and baby SpaceWhales. The output will be something like:

```
Total Mass of 'Majestic Whaley McWhaleface': 3.5 space units
```

This whimsical example demonstrates the Composite pattern in a fun and engaging way. Students can learn how both tiny SpacePeas and gigantic SpaceWhales are treated uniformly through the `CosmicEntity` interface, all while enjoying a light-hearted narrative about the cosmic adventures of Whaley McWhaleface and its minions.
