using System;

namespace TheRayCode.Facade
{
  
    class Program
    {
        static void Main(string[] args)
        {
            // The client code may have some of the subsystem's objects already
            // created. In this case, it might be worthwhile to initialize the
            // Facade with these objects instead of letting the Facade create
            // new instances.
            SubsystemA subsystemA = new SubsystemA();
            SubsystemB subsystemB = new SubsystemB();
            Facade facade = new Facade(subsystemA, subsystemB);
            Client.ClientCode(facade);
        }
    }
}
