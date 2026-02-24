public class ConcreteBuilder implements Builder{

    private Product product = new Product();

    @Override
    public void buildPartA() {
        product.setPartA("Concrete Part A");
    }

    @Override
    public void buildPartB() {
        product.setPartB("Concrete Part B");
    }

    @Override
    public void buildPartC() {
        product.setPartC("Concrete Part C");
    }

    @Override
    public Product getResult() {
        return product;
    }
}
