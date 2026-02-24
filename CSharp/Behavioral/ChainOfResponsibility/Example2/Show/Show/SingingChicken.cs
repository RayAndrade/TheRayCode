using System;

namespace Show
{
    public class SingingChicken: Animal
    {
        public override void PerformAct(string trick)
        {
            if (trick == "sing")
            {
                Console.WriteLine("🐔 Chicken grabs the mic and clucks a lovely tune!");
            }
            else
            {
                Console.WriteLine("🐔 Chicken forgot the lyrics! Passing the mic...");
                NextAnimal?.PerformAct(trick);
            }
        }
  
    }
}