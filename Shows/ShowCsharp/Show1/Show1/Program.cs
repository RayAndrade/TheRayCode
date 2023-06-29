using System;

namespace Show1
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            SundaeMaker sundaeMaker = new SundaeMaker();

            // Create a chocolate sundae
            ISundaeBuilder chocolateBuilder = new ChocolateSundaeBuilder();
            sundaeMaker.SetSundaeBuilder(chocolateBuilder);
            Sundae chocolateSundae = sundaeMaker.BuildSundae();

            // Create a strawberry sundae
            ISundaeBuilder strawberryBuilder = new StrawberrySundaeBuilder();
            sundaeMaker.SetSundaeBuilder(strawberryBuilder);
            Sundae strawberrySundae = sundaeMaker.BuildSundae();

            // Display the sundaes
            chocolateSundae.Display();
            Console.WriteLine();
            strawberrySundae.Display();
        }
    }
}