using System;

namespace TheRayCode.Factory
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            IToy doll = SantasBag.CreateToy("doll");
            IToy car = SantasBag.CreateToy("car");
            IToy train = SantasBag.CreateToy("train");
            
            doll.Play();
            car.Play();
            train.Play();

            Console.ReadKey();
        }
    }
}