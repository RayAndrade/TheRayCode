using System;

namespace Show
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            AbstractClass a = new ConcreteClassA();
            a.TemplateMethod();

            Console.WriteLine();

            AbstractClass b = new ConcreteClassB();
            b.TemplateMethod();
        }
    }
}