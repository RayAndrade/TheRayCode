using System;

namespace Show
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            Context context = new Context();

            SleepState sleepState = new SleepState();
            sleepState.Handle(context);
            Console.WriteLine(context.ToString());

            EatState eatState = new EatState();
            eatState.Handle(context);
            Console.WriteLine(context.ToString());
        }
    }
}