using System;

namespace Show
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            // Building a standard meal
            IMealBuilder standardMealBuilder = new StandardMealBuilder();
            Director director = new Director(standardMealBuilder);
            director.ConstructMeal();
            Meal standardMeal = director.GetMeal();
            Console.WriteLine(standardMeal);

            // Building a vegetarian meal
            IMealBuilder vegetarianMealBuilder = new VegetarianMealBuilder();
            director = new Director(vegetarianMealBuilder);
            director.ConstructMeal();
            Meal vegetarianMeal = director.GetMeal();
            Console.WriteLine(vegetarianMeal);
        }
    }
}