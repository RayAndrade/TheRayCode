namespace AbstractFactory
{
    class SolidFactory1: IAbstractFactory
    {
        public IAbstractProductA CreateProductA()
        {
            return new SolidProductA1();
        }

        public IAbstractProductB CreateProductB()
        {
            return new SolidProductB1();
        }
    }
}