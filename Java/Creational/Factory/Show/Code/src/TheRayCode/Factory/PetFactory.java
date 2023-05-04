package TheRayCode.Factory;

public class PetFactory {
    public Pet createPet(String type) {
        if (type.equals("bird")) {
            return new Bird();
        } else if (type.equals("dog")) {
            return new Dog();
        } else if (type.equals("cat")) {
            return new Cat();
        } else {
            throw new IllegalArgumentException("Unknown pet type: " + type);
        }
    }
}
