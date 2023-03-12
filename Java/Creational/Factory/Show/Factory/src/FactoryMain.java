import systems.OS;

import java.util.Scanner;

public class FactoryMain {
    public static void main(String[] args) {

        Animal dog = AnimalFactory.getAnimal("dog");
        dog.speak(); // Output: Dog says: Bow-Wow.

        Animal cat = AnimalFactory.getAnimal("cat");
        cat.speak(); // Output: Cat says: Meow.
    }
}
