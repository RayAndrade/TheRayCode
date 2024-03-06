public class HouseOwner implements AnimalVisitor{
    @Override
    public void visit(Dog dog) {
        System.out.println("What a cute dog! Let's play fetch.");
    }

    @Override
    public void visit(Cat cat) {
        System.out.println("Oh, a cat. Please don't scratch the sofa!");
    }

    @Override
    public void visit(Elephant elephant) {
        System.out.println("How did an elephant get in here?! Who left the door open?");
    }
}
