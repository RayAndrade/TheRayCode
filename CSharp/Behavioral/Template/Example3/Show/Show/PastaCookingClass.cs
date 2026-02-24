using System;

namespace Show
{
    public class PastaCookingClass: CookingClass
    {
        protected override void PrepareIngredients()
        {
            Console.WriteLine("Gathering tomatoes, basil, garlic, and pasta - let the fun begin!");
        }

        protected override void Cook()
        {
            Console.WriteLine("Cooking the pasta al dente and simmering the sauce to perfection.");
        }
    }
}