namespace TheRayCode.Factory.DesignPatterns
{
    class ConcreteCreator1 : Creator
    {
        public override IProduct FactoryMethod()
        {
            return new ConcreteProduct1();
        }
    }
}