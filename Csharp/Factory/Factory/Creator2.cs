namespace TheRayCode.Factory.DesignPatterns
{
    class Creator2 : Creator
    {
        public override IProduct FactoryMethod()
        {
            return new Product2();
        }
    }
}