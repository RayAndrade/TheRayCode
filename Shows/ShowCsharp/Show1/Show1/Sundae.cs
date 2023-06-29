using System;

namespace Show1
{
    public class Sundae
    {
        private string baseFlavor;
        private string toppings;
        private string sauce;

        public void SetBaseFlavor(string flavor)
        {
            baseFlavor = flavor;
        }

        public void SetToppings(string toppings)
        {
            this.toppings = toppings;
        }

        public void SetSauce(string sauce)
        {
            this.sauce = sauce;
        }

        public void Display()
        {
            Console.WriteLine("Enjoy your delightful sundae!");
            Console.WriteLine($"Base Flavor: {baseFlavor}");
            Console.WriteLine($"Toppings: {toppings}");
            Console.WriteLine($"Sauce: {sauce}");
        }
    }
}