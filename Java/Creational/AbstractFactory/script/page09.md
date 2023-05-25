[home](./page01.md)

[back](./page08.md)

now we go to main we add

```
public static void printAnimal(AnimalFactory factory) {
    Animal animal = factory.createAnimal();
    System.out.println("Created a " + animal.getSpecies());
    System.out.println("It " + animal.makeSound());
}
```

and in main we add

```
printAnimal(new DogFactory());
printAnimal(new CatFactory());
printAnimal(new BirdFactory());
```

[page 10](./page10.md)
