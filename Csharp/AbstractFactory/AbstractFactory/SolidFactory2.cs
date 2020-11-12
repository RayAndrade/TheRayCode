namespace AbstractFactory
{
    class SolidFactory2: IAbstractFactory
    {
        public IAbstractProductA CreateProductA()
        {
            return new SolidProductA2();
        }

        public IAbstractProductB CreateProductB()
        {
            return new SolidProductB2();
        }
    }
}