using System;

namespace TheRayCode
{
    using System;
    using System.Collections.Generic;
    
    internal class Program
    {
        static void Main(string[] args)
        {
            var animals = new List<Animal>
            {
                new Lion("Simba"),
                new Elephant("Dumbo")
            };
            
            var funnyVisitor = new FunnyFactsVisitor();
            var scientificVisitor = new ScientificReportVisitor();
            
            Console.WriteLine("---- Funny Facts Report ----");
            foreach (var animal in animals)
            {
                animal.Accept(funnyVisitor);
            }
            
            Console.WriteLine("\n---- Scientific Report ----");
            foreach (var animal in animals)
            {
                animal.Accept(scientificVisitor);
            }
        }
    }
}