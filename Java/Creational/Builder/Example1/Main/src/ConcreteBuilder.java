public class ConcreteBuilder implements Builder{
    private Product product = new Product();

    @Override
    public void buildPartA() {
        product.add("PartA");
    }

    @Override
    public void buildPartB() {
        product.add("PartB");
    }

    @Override
    public Product getResult() {
        return product;
    }
}
