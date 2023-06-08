# [TheRayCode](../../README.md) is AWESOME!!! 

| **[Creational Patterns](../README.md)** | **[Structural Patterns](../../Structural/README.md)** | **[Behavioral Patterns](../../Behavioral/README.md)** |

**PHP Creational Patterns**


|Pattern|   |   |   |   |
|---|---|---|---|---|
| Abstract Factory | [**C++**](../../../CPP/Creational/AbstractFactory/README.md) | [**C#**](../../../Csharp/Creational/AbstractFactory/README.md) | [Java](../../../Java/Creational/AbstractFactory/README.md) | [PHP](../../../PHP/Creational/AbstractFactory/README.md) |

**PHP Abstract Factory Design Pattern**

[script](./script/page01.md)

The **Abstract Factory Pattern** is a design pattern often used in programming, including in PHP. It's a part of the *Creational Design Patterns*, focusing on ways to handle object creation mechanisms, intending to create suitable objects based on the context or the logic of the program.

As a PHP developer, you might need to understand the Abstract Factory pattern for several reasons:

- Code Organization and Modularity: Abstract Factory promotes well-organized and modular code. This can simplify your codebase, make it easier to navigate, and make it more maintainable.

- Code Reusability: By defining an interface for creating families of related objects, without specifying their concrete classes, you increase the reusability of your code. You can use the same abstract factory to instantiate different concrete objects.

- Dependency Inversion Principle: This pattern can help achieve a higher level of abstraction in your code and apply the dependency inversion principle, which is one of the principles of the SOLID principles for object-oriented design. This principle states that high-level modules should not depend on low-level modules, and both should depend on abstractions.

- Flexibility and Scalability: The Abstract Factory pattern can help improve the flexibility and scalability of your PHP applications. By using this pattern, you can easily introduce new classes and functionality without breaking existing code. This is very beneficial when working on large, complex projects.

- Product Consistency: The Abstract Factory pattern ensures that the product (the object created) is consistent and compatible with other objects. This avoids incompatible combinations of objects in the application.

- Unit Testing and Mocking: It can be useful for unit testing and mocking, because the abstract factory can be easily substituted with a mock object.

Remember, though, while design patterns like the Abstract Factory pattern can be very useful, they are not a silver bullet. They should be used when they help solve problems more effectively, not for their own sake.

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


[TheRayCode.ORG](https://www.TheRayCode.org)

[RayAndrade.COM](https://www.RayAndrade.com)


[Facebook](https://www.facebook.com/TheRayCode/) | [Twitter @TheRayCode](https://www.twitter.com/TheRayCode/) | [YouTube](https://www.youtube.com/TheRayCode/)
