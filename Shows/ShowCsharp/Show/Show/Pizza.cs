using System;

namespace Show
{
    public class Pizza
    {
        public string Dough { get; set; }
        public string Sauce { get; set; }
        public string Topping { get; set; }
        public void DisplayPizza()
        {
            Console.WriteLine($"Dough: {Dough}, Sauce: {Sauce}, Topping: {Topping}");
        }
    }
}