# TheRayCode is AWESOME!!!

**Abstract Factory**

**[Java](../README.md)** 

**[Creational Patterns](../README.md)** | **[Structural Patterns](../../Structural/README.md)** | **[Behavioral Patterns](../../Behavioral/README.md)**

**Java Creational Patterns**

**[Factory](../Factory/README.md)** | **[AbstractFactory](../AbstractFactory/README.md)** | **[Builder](../Builder/README.md)** | **[Prototype](../Prototype/README.md)** | **[Singleton](../Singleton/README.md)**

**Java Abstract Factory Design Pattern**


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
        return "Chirps";
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

[script](./script/page01.md)


[TheRayCode.ORG](https://www.TheRayCode.org)

[RayAndrade.COM](https://www.RayAndrade.com)

[Facebook](https://www.facebook.com/TheRayCode/) | [Twitter @TheRayCode](https://www.twitter.com/TheRayCode/) | [YouTube](https://www.youtube.com/TheRayCode/)
