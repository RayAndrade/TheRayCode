using System;

namespace Show
{
    public class Car : IVehicle
    {
        public void StartEngine()
        {
            Console.WriteLine("The car engine starts. Vroom!");
        }
    }
}