namespace Show
{
    public class CreatorY: Creator
    {
        public override Product FactoryMethod()
        {
            return new ProductB();
        }
    }
}