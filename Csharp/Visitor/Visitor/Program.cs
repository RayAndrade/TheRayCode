using System;
using System.Collections.Generic;


namespace Show
{
    class Program
    {
        static void Main(string[] args)
        {
            
            List<IComponent> components = new List<IComponent>
            {
                new ComponentA(),
                new ComponentB()
            };

            Console.WriteLine("The client code works with all visitors via the base Visitor interface:");
            var visitor1 = new Visitor1();
            Client.ClientCode(components,visitor1);

            Console.WriteLine();

            Console.WriteLine("It allows the same client code to work with different types of visitors:");
            var visitor2 = new Visitor2();
            Client.ClientCode(components, visitor2);
            Console.WriteLine();
            Console.WriteLine("The Ray Code show is AWESOME!!!");
        }
    }
}