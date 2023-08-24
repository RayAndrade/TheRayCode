Let's build an **AnimalFactory**.

In AbstractFactory.php, we define an AbstractFactory class with an abstract createPet() method. This will be the base for our specific pet factories.

```
abstract class AbstractFactory {
    abstract public function createPet();
}
```

Then we create an **AbstractPet**. In **AbstractPet.php**, we define an AbstractPet class with an abstract *makeSound()* method. Each specific pet will define this method to specify their sound.

```
abstract class AbstractPet {
    abstract public function makeSound();
}
```
Next, we create of the specific pet classes: **Dog**, **Cat** and **Bird**.
Each will be extended by the **AbstractPet** an *abstract class* which make each of the animals of the same type.

For the **Dog**:

```
class Dog extends AbstractPet {
    public function makeSound() {
        return "Woof! I'm a good boy!";
    }
}
```
the **Cat**.

```
class Cat extends AbstractPet {
    public function makeSound() {
        return "Meow! Feed me, hooman!";
    }
}
```

and the **Bird**

```
class Bird extends AbstractPet {
    public function makeSound() {
        return "Meow! Feed me, hooman!";
    }
}
```
Here, each pet class extends **AbstractPet** and defines *makeSound() method accordingly*.


Next for our factories.

For the **DogFactory**.

```
class DogFactory extends AbstractFactory {
    public function createPet() {
        return new Dog();
    }
}
```

The **CatFactory**

```
class CatFactory extends AbstractFactory {
    public function createPet() {
        return new Cat();
    }
}
```

And the **BirdFactory**

```
class BirdFactory extends AbstractFactory {
    public function createPet() {
        return new Bird();
    }
}
```

We put this altogether in the **index.php** to give a demo of our work

First we have the needed *includes/requierds*

```
require_once 'AbstractFactory.php';
require_once 'AbstractPet.php';
require_once 'Dog.php';
require_once 'Cat.php';
require_once 'Bird.php';
require_once 'DogFactory.php';
require_once 'CatFactory.php';
require_once 'BirdFactory.php';
```

next we will build a funtion that will create our pets"

```
function petSounds(AbstractFactory $factory) {
    $pet = $factory->createPet();
    echo $pet->makeSound() . "<br/>\n";
}
```

and now for the action

```
petSounds(new DogFactory());
petSounds(new CatFactory());
petSounds(new BirdFactory());
```

Our result in the browser is:

```
Woof! I'm a good boy!
Meow! Feed me, hooman!
Tweet tweet! I'm bird-brained!
```
The Ray Code is AWESOME!!!
