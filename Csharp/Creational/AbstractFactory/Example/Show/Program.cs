using System;

namespace Show
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            IAbstractFactory factory1 = new ConcreteFactory1();
            ClientMethod(factory1);
            
            IAbstractFactory factory2 = new ConcreteFactory2();
            ClientMethod(factory2);
        }
        static void ClientMethod(IAbstractFactory factory)
        {
            var productA = factory.CreateProductA();
            var productB = factory.CreateProductB();
            
            Console.WriteLine(productA.FunctionA());
            Console.WriteLine(productB.FunctionB());
        }
    }
}