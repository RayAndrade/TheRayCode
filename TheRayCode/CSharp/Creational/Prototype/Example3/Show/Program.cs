using System;

namespace Show
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            // Create an initial doctor object
            ConcreteDoctor originalDoctor = new ConcreteDoctor("Dr. Smith", "Cardiology");

            // Clone the doctor object
            ConcreteDoctor clonedDoctor = originalDoctor.Clone() as ConcreteDoctor;

            // Displaying the result
            Console.WriteLine("Original Doctor: " + originalDoctor.Name + " - " + originalDoctor.Specialty);
            Console.WriteLine("Cloned Doctor: " + clonedDoctor.Name + " - " + clonedDoctor.Specialty);
        }
    }
}