using System;

namespace Show
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            HighlanderSingleton duncan = HighlanderSingleton.Instance;
            duncan.SayCatchphrase();

            HighlanderSingleton anotherDuncan = HighlanderSingleton.Instance;
            anotherDuncan.SayCatchphrase();

            // Check if both instances are the same
            Console.WriteLine(Object.ReferenceEquals(duncan, anotherDuncan));
        }
    }
}