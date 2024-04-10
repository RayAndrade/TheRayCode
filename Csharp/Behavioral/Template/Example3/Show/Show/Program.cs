namespace Show
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            CookingClass pastaClass = new PastaCookingClass();
            pastaClass.MakeDish();

            // Feel free to add more classes like `PizzaCookingClass` to extend the example.
        }
    }
}