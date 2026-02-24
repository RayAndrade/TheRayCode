using System;

namespace Show
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            var chicken = new SingingChicken();
            var pig = new JugglingPig();
            var llama = new DancingLlama();

            chicken.SetNext(pig);
            pig.SetNext(llama);

            Console.WriteLine("The talent show begins! Chicken's turn:\n");
            chicken.PerformAct("dance");

            Console.WriteLine("\nNow, Pig takes the stage:\n");
            chicken.PerformAct("juggle");

            Console.WriteLine("\nAlright, Llama! Show them what you got:\n");
            chicken.PerformAct("dance");

        }
    }
}