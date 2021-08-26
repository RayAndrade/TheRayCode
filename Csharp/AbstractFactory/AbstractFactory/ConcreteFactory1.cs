namespace AbstractFactory
{
    public class ConcreteFactory1: AbstractFactory
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