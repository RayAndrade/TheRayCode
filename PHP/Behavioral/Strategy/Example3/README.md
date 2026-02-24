[up](../README.md)

Alright, let's approach the Strategy design pattern with a military context.

### Context:
Different strategies can be employed in battle. Depending on the situation, a commanding officer might decide to use an aerial attack, a naval bombardment, or an infantry assault.

1. **BattleStrategy Interface**:
   This will define a contract that every battle strategy should follow.

2. **AerialAttack, NavalBombardment, and InfantryAssault Classes**:
   These are concrete strategies implementing the `BattleStrategy` interface.

3. **BattleContext Class**:
   This class will have a reference to a BattleStrategy and can execute a particular battle plan.

### Directory Structure:

```
├── index.php
├── BattleStrategy.php
├── AerialAttack.php
├── NavalBombardment.php
└── InfantryAssault.php
```

### File: BattleStrategy.php
```php
<?php

interface BattleStrategy {
    public function execute();
}
```

### File: AerialAttack.php
```php
<?php

include_once 'BattleStrategy.php';

class AerialAttack implements BattleStrategy {
    public function execute() {
        return "Executing aerial attack!";
    }
}
```

### File: NavalBombardment.php
```php
<?php

include_once 'BattleStrategy.php';

class NavalBombardment implements BattleStrategy {
    public function execute() {
        return "Executing naval bombardment!";
    }
}
```

### File: InfantryAssault.php
```php
<?php

include_once 'BattleStrategy.php';

class InfantryAssault implements BattleStrategy {
    public function execute() {
        return "Launching infantry assault!";
    }
}
```

### File: BattleContext.php
```php
<?php

class BattleContext {
    private $strategy;

    public function __construct(BattleStrategy $strategy) {
        $this->strategy = $strategy;
    }

    public function executeStrategy() {
        return $this->strategy->execute();
    }
}
```

### File: index.php
```php
<?php

include_once 'BattleStrategy.php';
include_once 'AerialAttack.php';
include_once 'NavalBombardment.php';
include_once 'InfantryAssault.php';
include_once 'BattleContext.php';

// Execute different battle strategies
$aerialBattle = new BattleContext(new AerialAttack());
$navalBattle = new BattleContext(new NavalBombardment());
$infantryBattle = new BattleContext(new InfantryAssault());

echo $aerialBattle->executeStrategy() . "<br>";
echo $navalBattle->executeStrategy() . "<br>";
echo $infantryBattle->executeStrategy();
```

### What you should see in the browser:

```
Executing aerial attack!
Executing naval bombardment!
Launching infantry assault!
```

### Explanation:

1. **BattleStrategy.php**: This interface ensures that every strategy will have a method `execute`.

2. **AerialAttack.php**: Represents an aerial strategy.

3. **NavalBombardment.php**: Represents a naval strategy.

4. **InfantryAssault.php**: Represents an infantry-based strategy.

5. **BattleContext.php**: It acts as a context where any given battle strategy can be applied.

6. **index.php**: Demonstrates different battle strategies in action.

Using this pattern, new strategies (like a tank assault or cyber warfare) can be added seamlessly without altering the existing code, embodying the open/closed principle.
