using System;

namespace Show
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            BeverageRecipe tea = new TeaRecipe();
            Console.WriteLine("Making tea...");
            tea.PrepareRecipe();

            Console.WriteLine();

            BeverageRecipe coffee = new CoffeeRecipe();
            Console.WriteLine("Making coffee...");
            coffee.PrepareRecipe();

        }
    }
}