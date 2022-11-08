namespace Show
{
    abstract class Creator
    {
        public abstract Product FactoryMethod();
        
        public string SomeOperation()
        {
            var product = FactoryMethod();
            var result = "Creator: The same creator's code has just worked with "
                         + product.Operation();

            return result;
        }
    }
}