namespace Show
{
    class CreatorX: Creator
    {
        public override Product FactoryMethod()
        {
            return new ProductA();
        }
    }
}