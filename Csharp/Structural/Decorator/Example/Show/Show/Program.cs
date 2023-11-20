using System;

namespace Show
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            CoffeeComponent myCoffee = new BasicCoffee();
            myCoffee = new MilkDecorator(myCoffee);
            myCoffee = new SugarDecorator(myCoffee);

            Console.WriteLine($"{myCoffee.GetDescription()} Cost: ${myCoffee.GetCost()}");
            // Output: Basic Coffee, Milk, Sugar Cost: $1.50
        }
    }
}