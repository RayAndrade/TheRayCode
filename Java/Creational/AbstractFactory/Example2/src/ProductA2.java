public class ProductA2 implements AbstractProductA{
    @Override
    public void interact(AbstractProductB b) {
        System.out.println("ProductA2 interacts with " + b.getClass().getSimpleName());
    }
}
