namespace TheRayCode.Factory.DesignPatterns
{
    class Creator2 : Creator
    {
        public override Product FactoryMethod()
        {
            return new Product2();
        }
    }
}