using System;

namespace Show
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            CakeComponent cake = new BasicCake();
            cake = new IcingDecorator(cake);
            cake = new SprinklesDecorator(cake);

            Console.WriteLine($"{cake.Description} Cost: ${cake.Cost}");
            // Output: Basic Cake, with Icing, with Sprinkles Cost: $7.00
        }
    }
}