using System;

namespace Show
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            GumballMachine gumballMachine = new GumballMachine(5);

            Console.WriteLine("Testing Gumball Machine");
            gumballMachine.InsertQuarter();
            gumballMachine.TurnCrank();

            Console.WriteLine("Current gumballs: " + gumballMachine.Count);
        }
    }
}