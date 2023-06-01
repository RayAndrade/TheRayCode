[home](./page01.md)

[back](./page06.md)

In the Demo


```php
require_once 'AbstractPetFactory.php';
require_once 'Dog.php';
require_once 'Cat.php';
require_once 'PetFactory.php';
```

```
class Demo {  }
```

```
public static function run() {  }
```

```
$dogFactory = new DogFactory();
$catFactory = new CatFactory();

$dog = $dogFactory->createDog();
echo $dog->bark() . "<br/>\n";

$cat = $catFactory->createCat();
echo $cat->meow() . "<br/>\n";
```

```
Demo::run();
```

[page 8](./page08.md)
