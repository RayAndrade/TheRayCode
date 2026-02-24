[up](../README.md)

The Builder pattern is useful when an object needs to be created with numerous possible configurations. Let's build a story around constructing a robot with various parts.

### File Structure:

1. `RobotBuilder.php`
2. `Robot.php`
3. `BasicRobotBuilder.php`
4. `index.php`

#### 1. RobotBuilder.php

This is an interface that will declare the building steps for our robots.

```php
<?php
// RobotBuilder.php

interface RobotBuilder {
    public function buildHead();
    public function buildArms();
    public function buildLegs();
    public function getRobot();
}
```

#### 2. Robot.php

This is the product class that will be built by the builder.

```php
<?php
// Robot.php

class Robot {
    private $head;
    private $arms;
    private $legs;

    public function setHead($head) {
        $this->head = $head;
    }

    public function setArms($arms) {
        $this->arms = $arms;
    }

    public function setLegs($legs) {
        $this->legs = $legs;
    }

    public function showParts() {
        return "Robot: [Head: {$this->head}, Arms: {$this->arms}, Legs: {$this->legs}]";
    }
}
```

#### 3. BasicRobotBuilder.php

This will be a concrete builder implementing the `RobotBuilder` interface.

```php
<?php
// BasicRobotBuilder.php
include 'Robot.php';
include 'RobotBuilder.php';

class BasicRobotBuilder implements RobotBuilder {
    private $robot;

    public function __construct() {
        $this->robot = new Robot();
    }

    public function buildHead() {
        $this->robot->setHead('Basic Head');
    }

    public function buildArms() {
        $this->robot->setArms('Basic Arms');
    }

    public function buildLegs() {
        $this->robot->setLegs('Basic Legs');
    }

    public function getRobot() {
        return $this->robot;
    }
}
```

#### 4. index.php

Here's how we demonstrate the builder pattern in action.

```php
<?php
// index.php

include 'BasicRobotBuilder.php';

// Building a robot using the Builder pattern
$robotBuilder = new BasicRobotBuilder();
$robotBuilder->buildHead();
$robotBuilder->buildArms();
$robotBuilder->buildLegs();

$robot = $robotBuilder->getRobot();
echo $robot->showParts();
```

### Explanation:

1. `RobotBuilder`: This is the interface that provides a contract for building parts of the robot.
2. `Robot`: This is the product class. It represents the object we want to build.
3. `BasicRobotBuilder`: A concrete builder that constructs the individual parts for a basic robot.
4. `index.php`: It demonstrates how we can use the builder to create a robot.

### Browser Output:

When you visit `index.php`, you should see:

```
Robot: [Head: Basic Head, Arms: Basic Arms, Legs: Basic Legs]
```

This shows that the robot was successfully constructed using the Builder pattern.
