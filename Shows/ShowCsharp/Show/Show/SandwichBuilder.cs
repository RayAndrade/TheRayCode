using System.Collections.Generic;

namespace Show
{
    public class SandwichBuilder: ISandwichBuilder
    {
        private Sandwich sandwich;

        public SandwichBuilder()
        {
            sandwich = new Sandwich();
        }
        
        public void BuildBread()
        {
            sandwich.Bread = "Soft and fresh bread";
        }

        public void BuildMeat()
        {
            sandwich.Meat = "Juicy chicken";
        }

        public void BuildCheese()
        {
            sandwich.Cheese = "Melted cheddar";
        }

        public void BuildVegetables()
        {
            sandwich.Vegetables = new List<string> { "Lettuce", "Tomato", "Onion" };
        }

        public Sandwich GetSandwich()
        {
            return sandwich;
        }
    }
}