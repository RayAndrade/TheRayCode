using System;
using TheRayCode.Factory.DesignPatterns;

namespace Factory
{
    internal static class Program
    {
        public static void Main(string[] args)
        {
            new Client().Main();
            Console.WriteLine("Choose 1, 2, 3 or 0 to exit");
        }
    }
}