
[script](./script/page01.md)

Here is a brief explanation of each class, abstract class and *interface* in the example:

**Animal** (interface): This is the Abstract Product interface. All the animals (dogs, cats, birds) implement this interface. They have a species name and a way to make sound.

**Labrador**, **PersianCat**, **Parrot** (classes): These are the Concrete Products, which implement the Animal interface. They provide specific implementations for the getSpecies and makeSound methods.

**AnimalFactory** (*interface*): This is the Abstract Factory interface. It has a method createAnimal that returns an Animal object.

**DogFactory**, **CatFactory**, **BirdFactory** (classes): These are the Concrete Factories, which implement the AnimalFactory interface. They provide a specific implementation for the createAnimal method, creating and returning an instance of a particular type of animal.


package AbstractFactory;

// Abstract product
```
interface Animal {
    String getSpecies();
    String makeSound();
}
```

// Concrete product - Dog family
```
class Labrador implements Animal {
    @Override
    public String getSpecies() {
        return "Labrador";
    }
    @Override
    public String makeSound() {
        return "Barks";
    }
}
```
// Concrete product - Cat family
```
class PersianCat implements Animal {
    @Override
    public String getSpecies() {
        return "Persian Cat";
    }
    @Override
    public String makeSound() {
        return "Meows";
    }
}
```
// Concrete product - Bird family
```
class Parrot implements Animal {
    @Override
    public String getSpecies() {
        return "Parrot";
    }
    @Override
    public String makeSound() {
        return "Poly wanna cracker";
    }
}
```

// Abstract Factory
```
interface AnimalFactory {
    Animal createAnimal();
}
```

// Concrete Factory - Dog family
```
class DogFactory implements AnimalFactory {
    @Override
    public Animal createAnimal() {
        return new Labrador();
    }
}
```
// Concrete Factory - Cat family
```
class CatFactory implements AnimalFactory {
    @Override
    public Animal createAnimal() {
        return new PersianCat();
    }
}
```
// Concrete Factory - Bird family
```
class BirdFactory implements AnimalFactory {
    @Override
    public Animal createAnimal() {
        return new Parrot();
    }
}
```

Interfaces

Animal: This interface is the abstract definition of what all "animals" should be able to do -- every animal should have a species and should be able to make a sound. This is a contract that all classes implementing this interface must fulfill.
Concrete Classes

**Labrador**, **PersianCat**, **Parrot**: These are concrete classes that implement the **Animal interface**. They provide the specific behaviors for the abstract methods defined in the interface.

**Labrador** is a type of dog and hence it implements the Animal interface and defines the getSpecies method to return "Labrador" and makeSound method to return "Barks".

**PersianCat** is a type of cat and hence it also implements the Animal interface, but in this case, getSpecies returns "Persian Cat" and makeSound returns "Meows".

**Parrot** is a bird and it too implements the Animal interface. For this class, getSpecies returns "Parrot" and makeSound returns "Chirps".

**Abstract Factory** Interface

**AnimalFactory**: This is an interface for the factories that produce animals. It provides an abstract createAnimal method, which should be implemented by any class that intends to be an "animal factory".

*Concrete* Factory Classes

**DogFactory**, **CatFactory**, **BirdFactory**: These are concrete implementations of the AnimalFactory interface.

**DogFactory** implements the createAnimal method from AnimalFactory to create an instance of Labrador.

**CatFactory** also implements the createAnimal method but in this case, it creates an instance of PersianCat.

**BirdFactory** is another concrete factory that implements createAnimal to create an instance of Parrot.

These factories encapsulate the creation of specific animals, and client code interacts with the factories to create animals, rather than creating them directly. This follows the principle of programming to an interface, not an implementation, allowing the client code to remain decoupled from the specific animal classes, which provides flexibility in adding new animal types in the future without modifying existing client code.

