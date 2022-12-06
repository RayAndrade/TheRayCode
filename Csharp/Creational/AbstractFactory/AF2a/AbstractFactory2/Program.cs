using System;
using AbstractFactory2.factroies;

namespace AbstractFactory2
{
    class Program
    {
        static void Main(string[] args)
        {
            Client entrepreuner = new Client(new ElegantClothesFactory());
            Console.WriteLine($"Entrepreuner:{entrepreuner.DecribeYourCloths()}");
            
            Client student = new Client(new CasualClothesFactory() );
            Console.WriteLine($"Student:{student.DecribeYourCloths()}");

            Console.ReadKey();
        }
    }
}