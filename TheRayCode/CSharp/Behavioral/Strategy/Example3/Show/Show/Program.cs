using System;

namespace Show
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            var context = new JailbreakContext(new TunnelStrategy());
            Console.WriteLine(context.ExecuteStrategy());

            context.SetStrategy(new BribeGuardStrategy());
            Console.WriteLine(context.ExecuteStrategy());
        }
    }
}