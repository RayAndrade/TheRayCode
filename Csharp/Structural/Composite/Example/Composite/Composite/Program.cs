namespace Composite
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            MenuItem pizza = new MenuItem("Pizza", "Cheese pizza", 7.99);
            MenuItem salad = new MenuItem("Salad", "Mixed greens with vinaigrette", 5.99);
            MenuItem pasta = new MenuItem("Pasta", "Spaghetti with marinara sauce", 8.99);
            MenuItem iceCream = new MenuItem("Ice Cream", "Vanilla ice cream", 3.99);
            
            // Create Lunch and Dinner menus
            Menu lunchMenu = new Menu("Lunch Menu", "Lunch specials");
            lunchMenu.Add(pizza);
            lunchMenu.Add(salad);

            Menu dinnerMenu = new Menu("Dinner Menu", "Dinner specials");
            dinnerMenu.Add(pasta);
            dinnerMenu.Add(iceCream);
            
            // Display menus
            System.Console.WriteLine("==== LUNCH ====");
            lunchMenu.Print();
            
            System.Console.WriteLine("==== DINNER ====");
            dinnerMenu.Print();

        }
    }
}