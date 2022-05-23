namespace AbstractFactory
{
    class ConcreteFactory2: AbstractFactory
    {
        public ProductA CreateProductA()
        {
            return new SolidProductA2();
        }

        public ProductB CreateProductB()
        {
            return new SolidProductB2();
        }
    }
}