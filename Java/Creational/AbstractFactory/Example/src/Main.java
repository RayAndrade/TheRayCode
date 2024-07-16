public class Main {
    public static void main(String[] args) {
        printAnimal(new DogFactory());
        printAnimal(new CatFactory());
        printAnimal(new BirdFactory());
    }
    public static void printAnimal(AnimalFactory factory) {
        Animal animal = factory.createAnimal();
        System.out.println("Created a " + animal.getSpecies());
        System.out.println("It " + animal.makeSound());
    }
}