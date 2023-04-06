using System;
using TheRayCode.Factory.Properties;

namespace TheRayCode.Factory
{
    internal abstract class Program
    {
        public static void Main(string[] args)
        {
            IToy doll = ToyFactory.CreateToy("doll");
            IToy car = ToyFactory.CreateToy("car");
            IToy train = ToyFactory.CreateToy("train");

            doll.Play();
            car.Play();
            train.Play();

            Console.ReadKey();
        }
    }
}