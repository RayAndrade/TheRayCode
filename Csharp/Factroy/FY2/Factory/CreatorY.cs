namespace TheRayCode.Factory.DesignPatterns
{
    class CreatorY : Creator
    {
        public override Product FactoryMethod()
        {
            return new ProductB();
        }
    }
}