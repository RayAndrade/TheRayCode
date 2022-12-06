using System;
using AbstractFactory.Properties.factroies;

namespace AbstractFactory
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            Client entrepreuner = new Client(new ElegantClothesFactory());
            Console.WriteLine($"Entrepreuner:{entrepreuner.DecribeYourCloths()}");
            
            Client student = new Client(new CasualClothesFactory() );
            Console.WriteLine($"Student:{student.DecribeYourCloths()}");

            Console.ReadKey();
        }
    }
}