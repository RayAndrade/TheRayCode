[up](../README.md)


Sure, let's use the builder pattern to design an airplane. The airplane will have wings, an engine, and a cockpit.

### File Structure:

1. `AirplaneBuilder.php`
2. `Airplane.php`
3. `JetAirplaneBuilder.php`
4. `index.php`

#### 1. AirplaneBuilder.php

This is an interface that will declare the building steps for our airplanes.

```php
<?php
// AirplaneBuilder.php

interface AirplaneBuilder {
    public function buildWings();
    public function buildEngine();
    public function buildCockpit();
    public function getAirplane();
}
```

#### 2. Airplane.php

This is the product class that will be built by the builder.

```php
<?php
// Airplane.php

class Airplane {
    private $wings;
    private $engine;
    private $cockpit;

    public function setWings($wings) {
        $this->wings = $wings;
    }

    public function setEngine($engine) {
        $this->engine = $engine;
    }

    public function setCockpit($cockpit) {
        $this->cockpit = $cockpit;
    }

    public function showSpecifications() {
        return "Airplane: [Wings: {$this->wings}, Engine: {$this->engine}, Cockpit: {$this->cockpit}]";
    }
}
```

#### 3. JetAirplaneBuilder.php

This will be a concrete builder implementing the `AirplaneBuilder` interface to construct a Jet airplane.

```php
<?php
// JetAirplaneBuilder.php
include 'Airplane.php';
include 'AirplaneBuilder.php';

class JetAirplaneBuilder implements AirplaneBuilder {
    private $airplane;

    public function __construct() {
        $this->airplane = new Airplane();
    }

    public function buildWings() {
        $this->airplane->setWings('Jet Wings');
    }

    public function buildEngine() {
        $this->airplane->setEngine('Jet Engine');
    }

    public function buildCockpit() {
        $this->airplane->setCockpit('Jet Cockpit');
    }

    public function getAirplane() {
        return $this->airplane;
    }
}
```

#### 4. index.php

Here's how we demonstrate the builder pattern in action.

```php
<?php
// index.php

include 'JetAirplaneBuilder.php';

// Building an airplane using the Builder pattern
$airplaneBuilder = new JetAirplaneBuilder();
$airplaneBuilder->buildWings();
$airplaneBuilder->buildEngine();
$airplaneBuilder->buildCockpit();

$airplane = $airplaneBuilder->getAirplane();
echo $airplane->showSpecifications();
```

### Explanation:

1. `AirplaneBuilder`: This is the interface that provides a contract for building parts of the airplane.
2. `Airplane`: This is the product class. It represents the object we want to build.
3. `JetAirplaneBuilder`: A concrete builder that constructs the individual parts for a Jet airplane.
4. `index.php`: It demonstrates how we can use the builder to create an airplane.

### Browser Output:

When you visit `index.php`, you should see:

```
Airplane: [Wings: Jet Wings, Engine: Jet Engine, Cockpit: Jet Cockpit]
```

This indicates that the airplane (specifically a jet) was successfully constructed using the Builder pattern.


