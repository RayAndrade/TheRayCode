using System;

namespace Show
{
    public class ConcreteClassB: AbstractClass
    {
        protected override void RequiredOperations1()
        {
            Console.WriteLine("ConcreteClassB: Implemented RequiredOperations1");
        }

        protected override void RequiredOperation2()
        {
            Console.WriteLine("ConcreteClassB: Implemented RequiredOperation2");
        }
        
        // Hook1 is not overridden here, so it will do nothing.
    }
}