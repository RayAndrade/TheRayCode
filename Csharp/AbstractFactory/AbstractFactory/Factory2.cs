namespace AbstractFactory
{
    public class Factory2: AbstractFactory
    {
        public ProductA CreateProductA()
        {
            return new ProductA2();
        }

        public ProductB CreateProductB()
        {
            return new ProductB2();
        }
    }
}