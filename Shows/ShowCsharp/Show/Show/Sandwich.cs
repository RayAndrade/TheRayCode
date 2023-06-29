using System;
using System.Collections.Generic;

namespace Show
{
    public class Sandwich
    {
        public string Bread { get; set; }
        public string Meat { get; set; }
        public string Cheese { get; set; }
        public List<string> Vegetables { get; set; }

        public void Display()
        {
            Console.WriteLine("Enjoy your delicious sandwich:");
            Console.WriteLine($"Bread: {Bread}");
            Console.WriteLine($"Meat: {Meat}");
            Console.WriteLine($"Cheese: {Cheese}");
            Console.WriteLine("Vegetables:");
            foreach (var vegetable in Vegetables)
            {
                Console.WriteLine($"- {vegetable}");
            }
        }
    }
}