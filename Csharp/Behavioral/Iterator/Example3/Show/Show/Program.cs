using System;

namespace Show
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            Context context = new Context { Input = "Today I am smile and not sad" };

            Expression smile = new SmileExpression();
            Expression sad = new SadExpression();

            context.Input = smile.Interpret(context);
            context.Input = sad.Interpret(context);

            Console.WriteLine(context.Input);
        }
    }
}