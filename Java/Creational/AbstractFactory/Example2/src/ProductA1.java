public class ProductA1  implements AbstractProductA{
    @Override
    public void interact(AbstractProductB b) {
        System.out.println("ProductA1 interacts with " + b.getClass().getSimpleName());
    }
}
