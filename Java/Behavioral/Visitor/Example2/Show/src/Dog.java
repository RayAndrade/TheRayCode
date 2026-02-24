public class Dog implements Animal{
    @Override
    public void accept(AnimalVisitor visitor) {
        visitor.visit(this);
    }
}
