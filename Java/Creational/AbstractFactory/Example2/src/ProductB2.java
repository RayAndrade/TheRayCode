public class ProductB2 implements AbstractProductB {
    @Override
    public void interact(AbstractProductA a) {
        System.out.println("ProductB2 interacts with " + a.getClass().getSimpleName());
    }
}
