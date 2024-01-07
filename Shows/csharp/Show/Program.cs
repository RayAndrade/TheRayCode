using System;

namespace Show
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            SubsystemA subsystemA = new SubsystemA();
            SubsystemB subsystemB = new SubsystemB();
            Facade facade = new Facade(subsystemA, subsystemB);
            Client.ClientCode(facade);
        }
    }
}