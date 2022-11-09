namespace Show
{
    abstract class Creator
    {
        public abstract Product FactoryMethod();
        public string SomeOperation()
        {
            var product = FactoryMethod();
            var result = "Creator: This creator's code has just worked with "
                         + product.Operation();

            return result;
        }
    }
}