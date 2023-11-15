using System;

namespace Show
{
    public class Motorcycle : IVehicle
    {
        public void StartEngine()
        {
            Console.WriteLine("The motorcycle engine starts. Vroom Vroom!");
        }
    }
}