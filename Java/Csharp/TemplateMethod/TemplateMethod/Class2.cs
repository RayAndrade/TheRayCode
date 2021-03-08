using System;

namespace TemplateMethod
{
    class Class2 : AbstractClass
    {
        protected override void RequiredOperations1()
        {
            Console.WriteLine("Class2 says: Implemented Operation1");
        }

        protected override void RequiredOperation2()
        {
            Console.WriteLine("Class2 says: Implemented Operation2");
        }

        protected override void Hook1()
        {
            Console.WriteLine("Class2 says: Overridden Hook1");
        }
    }
}