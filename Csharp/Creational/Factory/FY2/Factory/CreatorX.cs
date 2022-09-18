namespace TheRayCode.Factory.DesignPatterns
{
    class CreatorX : Creator
    {
        public override Product FactoryMethod()
        {
            return new ProductA();
        }
    }
}