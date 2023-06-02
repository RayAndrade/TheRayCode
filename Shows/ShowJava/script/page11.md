[home](./page01.md)

[back](./page10.md)

These factories encapsulate the creation of specific animals, and client code interacts with the factories to create animals, rather than creating them directly. This follows the principle of programming to an interface, not an implementation, allowing the client code to remain decoupled from the specific animal classes, which provides flexibility in adding new animal types in the future without modifying existing client code.

in Main.java

Let's create a function that retuns an Anumal


```
public static void printAnimal(AnimalFactory factory) {
    Animal animal = factory.createAnimal();
    System.out.println("Created a " + animal.getSpecies());
    System.out.println("It " + animal.makeSound());
}
```

and in the main method


```
printAnimal(new DogFactory());
printAnimal(new CatFactory());
printAnimal(new BirdFactory());
```

[page 12](./page12.md)
