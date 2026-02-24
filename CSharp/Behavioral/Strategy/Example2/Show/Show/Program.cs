using System;

namespace Show
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            Animal frog = new Animal(new JumpStrategy());
            Console.WriteLine($"Frog: {frog.ExecuteStrategy()}");

            Animal fish = new Animal(new SwimStrategy());
            Console.WriteLine($"Fish: {fish.ExecuteStrategy()}");

            Animal bird = new Animal(new FlyStrategy());
            Console.WriteLine($"Bird: {bird.ExecuteStrategy()}");
        }
    }
}