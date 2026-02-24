using System;

namespace Show
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            Console.WriteLine("Testing ConcreteClassA:");
            AbstractClass classA = new ConcreteClassA();
            classA.TemplateMethod();

            Console.WriteLine("\nTesting ConcreteClassB:");
            AbstractClass classB = new ConcreteClassB();
            classB.TemplateMethod(); 
        }
    }
}