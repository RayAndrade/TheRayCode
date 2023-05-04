package TheRayCode.Factory;

public class Main {
    public static void main(String[] args) {
        PetFactory factory = new PetFactory();

        Pet bird = factory.createPet("bird");
        System.out.println(bird.getType()); // Output: I am a bird.

        Pet dog = factory.createPet("dog");
        System.out.println(dog.getType()); // Output: I am a dog.

        Pet cat = factory.createPet("cat");
        System.out.println(cat.getType()); // Output: I am a cat.
    }
}
