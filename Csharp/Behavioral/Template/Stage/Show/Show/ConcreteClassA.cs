using System;

namespace Show
{
    public class ConcreteClassA: AbstractClass
    {
        protected override void RequiredOperations()
        {
            Console.WriteLine("ConcreteClassA: Implemented RequiredOperations.");
        }
        
        protected override void OptionalHook()
        {
            Console.WriteLine("ConcreteClassA: Overridden OptionalHook.");
        }
    }
}