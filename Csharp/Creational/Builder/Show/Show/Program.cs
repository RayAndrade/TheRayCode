using System;

namespace Show
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            ComputerDirector director = new ComputerDirector();
            ComputerBuilder builder = new GamingComputerBuilder();
            
            Computer gamingComputer = director.Build(builder);

            Console.WriteLine("Gaming Computer Specs:");
            Console.WriteLine(gamingComputer.ToString());

        }
    }
}