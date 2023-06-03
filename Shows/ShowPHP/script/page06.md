[home](./page01.md)

[back](./page05.md)

at index

```
require_once 'AbstractFactory.php';
require_once 'AbstractPet.php';
require_once 'Dog.php';
require_once 'Cat.php';
require_once 'Bird.php';
require_once 'DogFactory.php';
require_once 'CatFactory.php';
require_once 'BirdFactory.php';

function petSounds(AbstractFactory $factory) {
    $pet = $factory->createPet();
    echo $pet->makeSound() . "\n";
}

petSounds(new DogFactory());
petSounds(new CatFactory());
petSounds(new BirdFactory());
```

This script loads all the necessary class files and then creates pets using the factories, printing the sounds they make.

[page 7](./page07.md)
