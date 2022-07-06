using System;

namespace TheRayCode.DesignPatterns.State.Conceptual
{
    
    class Program
    {
        static void Main(string[] args)
        {
            // The client code.
            var context = new Context(new StateA());
            context.Request1();
            context.Request2();
        }
    }
}
