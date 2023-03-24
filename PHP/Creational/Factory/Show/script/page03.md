[back](./page02.md)

<?php

// Define an interface for creating objects
interface AnimalFactory {
    public function createAnimal();
}

// Define a class for creating dog objects
class DogFactory implements AnimalFactory {
    public function createAnimal() {
        return new Dog();
    }
}

// Define a class for creating cat objects
class CatFactory implements AnimalFactory {
    public function createAnimal() {
        return new Cat();
    }
}

// Define an abstract class for animals
abstract class Animal {
    public abstract function speak();
}

// Define a class for dogs
class Dog extends Animal {
    public function speak() {
        echo "Woof!\n";
    }
}

// Define a class for cats
class Cat extends Animal {
    public function speak() {
        echo "Meow!\n";
    }
}

// Create a dog using the DogFactory
$dogFactory = new DogFactory();
$dog = $dogFactory->createAnimal();
$dog->speak(); // Output: Woof!

// Create a cat using the CatFactory
$catFactory = new CatFactory();
$cat = $catFactory->createAnimal();
$cat->speak(); // Output: Meow!

?>


[page 4](./page04.md)
