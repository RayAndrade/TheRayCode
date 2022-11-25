namespace Factory.Properties
{
    // Concrete Products provide various implementations of the Product
    // interface.
    class Product1 : IProduct
    {
        public string Operation()
        {
            return "{Result of Product1}";
        }
    }
}