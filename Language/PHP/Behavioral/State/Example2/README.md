[up](../README.md)

The State Design Pattern allows an object to change its behavior when its internal state changes. This pattern can be likened to a finite state machine.

Let's break it down step by step, starting with a basic example: a simple audio player that has different states, like "Playing", "Paused", and "Stopped". 

**Order to Create Classes**:
1. `State.php` - An interface to represent states.
2. `PlayingState.php`, `PausedState.php`, `StoppedState.php` - Classes implementing the State interface to represent each state.
3. `AudioPlayer.php` - The context class that contains the state and delegates its behavior to the state class.
4. `index.php` - To demonstrate the behavior of the audio player in different states.

### 1. State.php
```php
<?php

interface State {
    public function play(AudioPlayer $player);
    public function pause(AudioPlayer $player);
    public function stop(AudioPlayer $player);
}
```

### 2. PlayingState.php
```php
<?php
include_once 'State.php';

class PlayingState implements State {
    public function play(AudioPlayer $player) {
        // Already playing
    }

    public function pause(AudioPlayer $player) {
        echo "Paused<br>";
        $player->setState(new PausedState());
    }

    public function stop(AudioPlayer $player) {
        echo "Stopped<br>";
        $player->setState(new StoppedState());
    }
}
```

### 3. PausedState.php
```php
<?php
include_once 'State.php';

class PausedState implements State {
    public function play(AudioPlayer $player) {
        echo "Playing<br>";
        $player->setState(new PlayingState());
    }

    public function pause(AudioPlayer $player) {
        // Already paused
    }

    public function stop(AudioPlayer $player) {
        echo "Stopped<br>";
        $player->setState(new StoppedState());
    }
}
```

### 4. StoppedState.php
```php
<?php
include_once 'State.php';

class StoppedState implements State {
    public function play(AudioPlayer $player) {
        echo "Playing<br>";
        $player->setState(new PlayingState());
    }

    public function pause(AudioPlayer $player) {
        // Can't pause if it's already stopped
    }

    public function stop(AudioPlayer $player) {
        // Already stopped
    }
}
```

### 5. AudioPlayer.php
```php
<?php
include_once 'PlayingState.php';
include_once 'PausedState.php';
include_once 'StoppedState.php';

class AudioPlayer {
    private $state;

    public function __construct() {
        $this->state = new StoppedState();
    }

    public function play() {
        $this->state->play($this);
    }

    public function pause() {
        $this->state->pause($this);
    }

    public function stop() {
        $this->state->stop($this);
    }

    public function setState(State $state) {
        $this->state = $state;
    }
}
```

### 6. index.php
```php
<?php
include_once 'AudioPlayer.php';

$player = new AudioPlayer();

$player->play();  // Playing
$player->pause(); // Paused
$player->play();  // Playing
$player->stop();  // Stopped
```

**What you should see in the browser when accessing `index.php`:**
```
Playing
Paused
Playing
Stopped
```

**Explanation**:
- The `State` interface defines methods for each possible action.
- Each concrete state (`PlayingState`, `PausedState`, and `StoppedState`) implements the `State` interface and provides the appropriate behavior.
- The `AudioPlayer` class (context) maintains a reference to the current state and delegates its behavior to the current state object.
- The `index.php` file demonstrates the behavior of the `AudioPlayer` as it transitions between states.
- 



[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/TheRayCode/)

[The Ray Code](https://www.TheRayCode.org)

[Ray Andrade](https://www.RayAndrade.com)

