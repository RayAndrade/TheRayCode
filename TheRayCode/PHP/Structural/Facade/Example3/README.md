[up](../README.md)

The Facade design pattern provides a unified interface to a set of interfaces in a subsystem. It defines a higher-level interface that makes the subsystem easier to use.

Let's use a simple example to demonstrate the Facade pattern. Let's say we have a subsystem for a home theater with classes for `Projector`, `DVDPlayer`, and `Amplifier`. Instead of controlling each of these components separately, we can use the `HomeTheaterFacade` to provide a simplified interface.

Here's how we can structure it:

1. `Projector.php`:
```php
<?php
// Projector.php

class Projector {
    public function on() {
        echo "Projector is ON.<br>";
    }

    public function off() {
        echo "Projector is OFF.<br>";
    }
}
```

2. `DVDPlayer.php`:
```php
<?php
// DVDPlayer.php

class DVDPlayer {
    public function on() {
        echo "DVD Player is ON.<br>";
    }

    public function off() {
        echo "DVD Player is OFF.<br>";
    }

    public function play() {
        echo "DVD is playing.<br>";
    }

    public function stop() {
        echo "DVD is stopped.<br>";
    }
}
```

3. `Amplifier.php`:
```php
<?php
// Amplifier.php

class Amplifier {
    public function on() {
        echo "Amplifier is ON.<br>";
    }

    public function off() {
        echo "Amplifier is OFF.<br>";
    }

    public function setVolume(int $level) {
        echo "Amplifier volume set to " . $level . ".<br>";
    }
}
```

4. `HomeTheaterFacade.php`:
```php
<?php
// HomeTheaterFacade.php

require_once 'Projector.php';
require_once 'DVDPlayer.php';
require_once 'Amplifier.php';

class HomeTheaterFacade {
    private Projector $projector;
    private DVDPlayer $dvdPlayer;
    private Amplifier $amplifier;

    public function __construct(Projector $projector, DVDPlayer $dvdPlayer, Amplifier $amplifier) {
        $this->projector = $projector;
        $this->dvdPlayer = $dvdPlayer;
        $this->amplifier = $amplifier;
    }

    public function watchMovie() {
        $this->projector->on();
        $this->dvdPlayer->on();
        $this->dvdPlayer->play();
        $this->amplifier->on();
        $this->amplifier->setVolume(5);
    }

    public function endMovie() {
        $this->dvdPlayer->stop();
        $this->dvdPlayer->off();
        $this->amplifier->off();
        $this->projector->off();
    }
}
```

5. `index.php`:
```php
<?php
// index.php

require_once 'HomeTheaterFacade.php';

$projector = new Projector();
$dvdPlayer = new DVDPlayer();
$amplifier = new Amplifier();

$homeTheater = new HomeTheaterFacade($projector, $dvdPlayer, $amplifier);

$homeTheater->watchMovie();
echo "<br>";
$homeTheater->endMovie();
```

In the browser, when you access `index.php`, you should see:
```
Projector is ON.
DVD Player is ON.
DVD is playing.
Amplifier is ON.
Amplifier volume set to 5.
DVD is stopped.
DVD Player is OFF.
Amplifier is OFF.
Projector is OFF.
```

**Explanation:**

- `Projector`, `DVDPlayer`, and `Amplifier`: These are individual subsystem classes, each with their own set of functionalities.
- `HomeTheaterFacade`: This class is the facade that provides a unified interface to control the subsystems. It encapsulates the complexities of the individual subsystems and provides simple methods like `watchMovie` and `endMovie` for the client to use.
- `index.php`: This is the client code. It uses the `HomeTheaterFacade` to control the home theater system.

Order of creating the classes:
1. `Projector.php`
2. `DVDPlayer.php`
3. `Amplifier.php`
4. `HomeTheaterFacade.php`
5. `index.php`

Remember, the primary benefit of the Facade pattern is to offer a simplified interface to a more complex system, making it easier to use.


