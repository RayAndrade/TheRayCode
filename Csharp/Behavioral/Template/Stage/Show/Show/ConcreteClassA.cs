using System;

namespace Show
{
    public class ConcreteClassA: AbstractClass
    {
        protected override void RequiredOperations1()
        {
            Console.WriteLine("ConcreteClassA: Implemented RequiredOperations1");
        }

        protected override void RequiredOperation2()
        {
            Console.WriteLine("ConcreteClassA: Implemented RequiredOperation2");
        }
        
        protected override void Hook1()
        {
            Console.WriteLine("ConcreteClassA: Overridden Hook1");
        }
    }
}