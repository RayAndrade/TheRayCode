namespace Example;

class Program
{
    static void Main(string[] args)
    {
        Director director = new Director(); // Initializes the director
        Builder builder = new ConcreteBuilder(); // Initializes a concrete builder

        director.Construct(builder); // Directs the builder to build the product

        Product product = builder.GetResult(); // Retrieves the final product
        product.Show(); // Displays the product parts
    }
}