using System;

namespace Show2
{
    public class Pizza
    {
        private string crust;
        private string sauce;
        private string cheese;
        private string toppings;

        public void SetCrust(string crust)
        {
            this.crust = crust;
        }

        public void SetSauce(string sauce)
        {
            this.sauce = sauce;
        }

        public void SetCheese(string cheese)
        {
            this.cheese = cheese;
        }

        public void SetToppings(string toppings)
        {
            this.toppings = toppings;
        }

        public void Display()
        {
            Console.WriteLine("Enjoy your delicious pizza!");
            Console.WriteLine($"Crust: {crust}");
            Console.WriteLine($"Sauce: {sauce}");
            Console.WriteLine($"Cheese: {cheese}");
            Console.WriteLine($"Toppings: {toppings}");
        }
    }
}