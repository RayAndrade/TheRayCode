using System;

namespace Show
{
    public class JugglingPig: Animal
    {
        public override void PerformAct(string trick)
        {
            if (trick == "juggle")
            {
                Console.WriteLine("🐖 Pig juggles apples, but eats one midway! Classic Pig!");
            }
            else
            {
                Console.WriteLine("🐖 Pig's hooves are too slippery today! Passing the mic...");
                NextAnimal?.PerformAct(trick);
            }
        }

    }
}