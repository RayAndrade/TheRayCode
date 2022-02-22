namespace TheRayCode.Factory.DesignPatterns
{
    class Creator1 : Creator
    {
        public override Product FactoryMethod()
        {
            return new Product1();
        }
    }
}