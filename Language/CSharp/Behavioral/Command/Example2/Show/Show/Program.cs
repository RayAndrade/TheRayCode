using System;

namespace Show
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            var receiver = new Receiver();
            var command = new ConcreteCommand(receiver);
            var invoker = new Invoker();

            invoker.SetCommand(command);
            invoker.ExecuteCommand();
        }
    }
}