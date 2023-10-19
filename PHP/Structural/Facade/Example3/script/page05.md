[home](./page01.md)

[back](./page04.md)

**HomeTheaterFacade.php:**

```
HomeTheaterFacade
```


```
require_once 'Projector.php';
require_once 'DVDPlayer.php';
require_once 'Amplifier.php';
```

```
private Projector $projector;
private DVDPlayer $dvdPlayer;
private Amplifier $amplifier;
```

**1-3** **construct**
```
public function __construct(Projector $projector, DVDPlayer $dvdPlayer, Amplifier $amplifier) {
    $this->projector = $projector;
    $this->dvdPlayer = $dvdPlayer;
    $this->amplifier = $amplifier;
}
```

**2-3** **watchMovie**
```
public function watchMovie() {
    $this->projector->on();
    $this->dvdPlayer->on();
    $this->dvdPlayer->play();
    $this->amplifier->on();
    $this->amplifier->setVolume(5);
}
```

**3-3** **endMovie**
```
public function endMovie() {
    $this->dvdPlayer->stop();
    $this->dvdPlayer->off();
    $this->amplifier->off();
    $this->projector->off();
}
```



[page 6](./page06.md)
