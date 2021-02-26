namespace TheRayCode.Factory.DesignPatterns
{
    class Creator1 : Creator
    {
        public override IProduct FactoryMethod()
        {
            return new Product1();
        }
    }
}