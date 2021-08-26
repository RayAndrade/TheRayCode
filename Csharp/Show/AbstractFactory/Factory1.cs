namespace AbstractFactory
{
    public class Factory1: AbstractFactory
    {
        public ProductA CreateProductA()
        {
            return new ProductA1();
        }
        public ProductB CreateProductB()
        {
            return new ProductB1();
        }
    }
}