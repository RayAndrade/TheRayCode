namespace Example;

public class Product
{
    private List<string> _parts = new List<string>(); // List to store product parts

    // Adds a part to the product
    public void Add(string part)
    {
        _parts.Add(part);
    }

    // Display all parts of the product
    public void Show()
    {
        Console.WriteLine("Product Parts:");
        foreach (string part in _parts)
        {
            Console.WriteLine("- " + part);
        }
    }

}