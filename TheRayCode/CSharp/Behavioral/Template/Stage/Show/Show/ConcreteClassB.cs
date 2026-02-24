using System;

namespace Show
{
    public class ConcreteClassB: AbstractClass
    {
        protected override void RequiredOperations()
        {
            Console.WriteLine("ConcreteClassB: Implemented RequiredOperations.");
        }
        
        // OptionalHook is not overridden, so it will use the default implementation from AbstractClass
    }
}