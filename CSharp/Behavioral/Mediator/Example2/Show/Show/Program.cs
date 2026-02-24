using System;

namespace Show
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            Expression ghost = new TerminalExpression("ghost");
            Expression scream = new TerminalExpression("scream");
            Expression haunted = new NonTerminalExpression(ghost, scream);

            Console.WriteLine("Does the house have a ghost that screams? " + haunted.Interpret("ghost scream"));

        }
    }
}