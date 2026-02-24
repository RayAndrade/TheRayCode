public class Main {
    public static void main(String[] args) {

        Animal[] animals = new Animal[]{
                new Dog(),
                new Cat(),
                new Elephant()
        };

        HouseOwner owner = new HouseOwner();
        for (Animal animal : animals) {
            animal.accept(owner);
        }

    }
}