namespace Factory
{
    public class CreatorX: Creator
    {
        public override Product FactoryMethod()
        {
            return new ProductA();
        }
    }
}