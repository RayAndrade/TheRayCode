[up](../README.md)

Let's design a Super Hero Template pattern using the Template Method pattern. Here's what we will build:

* An abstract class `AbstractSuperHero` which will define the general characteristics and actions of a superhero. The template method here could be `describeHero` which will consist of the superhero's `origin`, `powers`, and `mission`.
* Concrete classes `SpiderMan` and `WonderWoman` will provide the actual details.

**1. AbstractSuperHero.php**

The abstract class defining the structure of our superheroes.

```php
<?php

abstract class AbstractSuperHero {
    
    // Template method
    public final function describeHero() {
        $this->origin();
        $this->powers();
        $this->mission();
    }

    // Abstract methods to be implemented by concrete classes
    abstract protected function origin();
    abstract protected function powers();
    abstract protected function mission();
}

?>
```

**2. SpiderMan.php**

A concrete class for SpiderMan.

```php
<?php

include_once 'AbstractSuperHero.php';

class SpiderMan extends AbstractSuperHero {
    protected function origin() {
        echo "<p>Origin: Bitten by a radioactive spider.</p>";
    }

    protected function powers() {
        echo "<p>Powers: Wall-crawling, enhanced strength, web-shooting.</p>";
    }

    protected function mission() {
        echo "<p>Mission: Protect New York City from villains.</p>";
    }
}

?>
```

**3. WonderWoman.php**

A concrete class for Wonder Woman.

```php
<?php

include_once 'AbstractSuperHero.php';

class WonderWoman extends AbstractSuperHero {
    protected function origin() {
        echo "<p>Origin: Princess of the Amazons from Themyscira.</p>";
    }

    protected function powers() {
        echo "<p>Powers: Super strength, speed, and agility. Wields the Lasso of Truth.</p>";
    }

    protected function mission() {
        echo "<p>Mission: Bring peace to the human world.</p>";
    }
}

?>
```

**4. index.php**

Demonstrating the Super Hero Template.

```php
<?php

include_once 'SpiderMan.php';
include_once 'WonderWoman.php';

$spiderMan = new SpiderMan();
$wonderWoman = new WonderWoman();

echo "<h2>SpiderMan</h2>";
$spiderMan->describeHero();

echo "<hr>";

echo "<h2>Wonder Woman</h2>";
$wonderWoman->describeHero();

?>
```

**Instructions:**

1. Start with `AbstractSuperHero.php`. This is your base class that sets the structure for describing a superhero.
2. Create `SpiderMan.php` and `WonderWoman.php`. They provide actual descriptions for each section.
3. Finally, `index.php` demonstrates the Template pattern in action.

**Browser Output (index.php)**:

You'll see:
```
SpiderMan
Origin: Bitten by a radioactive spider.
Powers: Wall-crawling, enhanced strength, web-shooting.
Mission: Protect New York City from villains.

---

Wonder Woman
Origin: Princess of the Amazons from Themyscira.
Powers: Super strength, speed, and agility. Wields the Lasso of Truth.
Mission: Bring peace to the human world.
```

This demonstrates how the Template Method pattern provides a consistent structure, but the actual content can be tailored by each concrete class.

----------------------------------------------------------------------------------------------------

Find Ray on:

[TheRayCode.ORG](https://www.TheRayCode.org)

[RayAndrade.COM](https://www.RayAndrade.com)

[Facebook](https://www.facebook.com/TheRayCode/) | [X @TheRayCode](https://www.x.com/TheRayCode/) | [YouTube](https://www.youtube.com/TheRayCode/)


