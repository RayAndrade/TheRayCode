namespace AbstractFactory
{
    class ConcreteFactory1:AbstractFactory
    {
        public ProductA CreateProductA()
        {
            return new SolidProductA1();
        }

        public ProductB CreateProductB()
        {
            return new SolidProductB1();
        }
    }
}