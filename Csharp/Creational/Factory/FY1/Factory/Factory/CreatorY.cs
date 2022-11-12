namespace Factory
{
    public class CreatorY: Creator
    {
        public override Product FactoryMethod()
        {
            return new ProductY();
        }
    }
}