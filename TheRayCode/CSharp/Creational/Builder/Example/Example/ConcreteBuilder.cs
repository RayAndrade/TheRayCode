namespace Example;

public class ConcreteBuilder: Builder
{
    private Product _product = new Product(); // The product instance being built

    public override void BuildPartA()
    {
        _product.Add("PartA"); // Adds PartA to the product
    }

    public override void BuildPartB()
    {
        _product.Add("PartB"); // Adds PartB to the product
    }

    public override Product GetResult()
    {
        return _product; // Returns the fully built product
    }
}