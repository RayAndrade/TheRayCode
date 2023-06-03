[home](./page01.md)

[back](./page06.md)

let's put this altogether in the index page

```
require_once('DogFactory.php');
require_once('CatFactory.php');
require_once('BirdFactory.php');

$dogFactory = new DogFactory();
$catFactory = new CatFactory();
$birdFactory = new BirdFactory();

$dog = $dogFactory->createDog();
$cat = $catFactory->createCat();
$bird = $birdFactory->createBird();

$dog->bark();
$cat->meow();
$bird->tweet();
```



[page 8](./page08.md)
