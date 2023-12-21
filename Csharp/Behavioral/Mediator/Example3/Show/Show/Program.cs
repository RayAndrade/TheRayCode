using System;
namespace Show
{
    class Program
    {
        public static void Main(string[] args)
        {
             var context = new EmojiContext { EmojiText = "Today I feel :)" };
             var interpreter = new ExpressionInterpreter();
            
             var result = interpreter.InterpretExpressions(context);
             Console.WriteLine($"Interpretation: {result}");
        }
    }
}