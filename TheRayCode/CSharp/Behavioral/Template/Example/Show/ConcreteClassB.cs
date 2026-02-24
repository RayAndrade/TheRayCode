using System;

namespace Show
{
    public class ConcreteClassB: AbstractClass
    {
        protected override void RequiredOperations()
        {
            Console.WriteLine("ConcreteClassB: Implemented RequiredOperations.");
        }
    }
}