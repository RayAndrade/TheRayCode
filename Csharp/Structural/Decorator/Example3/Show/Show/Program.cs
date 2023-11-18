namespace Show
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            CompositeCake mainDessert = new CompositeCake("Main Dessert Platter");
            SimpleCake chocolateCake = new SimpleCake("Chocolate Cake");
            SimpleCake vanillaCake = new SimpleCake("Vanilla Cake");
            CompositeCake mixedFruitCake = new CompositeCake("Mixed Fruit Cake");

            mainDessert.Add(chocolateCake);
            mainDessert.Add(vanillaCake);
            mainDessert.Add(mixedFruitCake);

            mixedFruitCake.Add(new SimpleCake("Apple Cake"));
            mixedFruitCake.Add(new SimpleCake("Berry Cake"));

            mainDessert.Display(1);
        }
    }
}