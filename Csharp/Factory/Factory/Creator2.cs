namespace TheRayCode.Factory.DesignPatterns
{
    class Creator2
    {
        public override IProduct FactoryMethod()
        {
            return new Product2();
        }
    }
}