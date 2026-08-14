public class Cat implements Animal  {
    @Override
    public void accept(AnimalVisitor visitor) {
        visitor.visit(this);
    }
}
