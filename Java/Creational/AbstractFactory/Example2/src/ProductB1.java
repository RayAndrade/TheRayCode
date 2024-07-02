public class ProductB1 implements AbstractProductB{
    @Override
    public void interact(AbstractProductA a) {
        System.out.println("ProductB1 interacts with " + a.getClass().getSimpleName());
    }
}
