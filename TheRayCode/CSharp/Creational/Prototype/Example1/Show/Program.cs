using System;

namespace MealPrototype
{
    class Program
    {
        static void Main(string[] args)
        {
            // Original meal
            MealPrototype originalMeal = new MealPrototype("Spaghetti", "Noodles, Sauce, Meatballs");
            Console.WriteLine("Original Meal:");
            Console.WriteLine(originalMeal);

            // Cloning the meal
            MealPrototype clonedMeal = (MealPrototype)originalMeal.Clone();

            // Modify the cloned meal's name
            clonedMeal.Name = "Spaghetti (Clone)";
            Console.WriteLine("\nCloned Meal (with modifications):");
            Console.WriteLine(clonedMeal);

            // Comparison of original and cloned
            Console.WriteLine("\nComparison of Original and Clone:");
            Console.WriteLine($"Original Meal Name: {originalMeal.Name}");
            Console.WriteLine($"Cloned Meal Name: {clonedMeal.Name}");

            // New creation for comparison
            MealPrototype newMeal = new MealPrototype("Pizza", "Dough, Cheese, Sauce");
            Console.WriteLine("\nNewly Created Meal:");
            Console.WriteLine(newMeal);

            Console.WriteLine("\nMoral of the story:");
            Console.WriteLine("Cloned meals sometimes feel like impostors, but they save cooking time.");
        }
    }
}