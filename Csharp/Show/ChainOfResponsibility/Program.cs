using System;
//using System.Collections.Generic;

namespace ChainOfResponsibility
{
   class Program
    {
        static void Main(string[] args)
        {
            // The client code can parameterize an invoker with any commands.
            Invoker invoker = new Invoker();
            invoker.SetOnStart(new SimpleCmd("Say Hi!"));
            Receiver receiver = new Receiver();
            invoker.SetOnFinish(new ComplexCmd(receiver, "Send email", "Save report"));

            invoker.DoSomethingImportant();
            
            Console.WriteLine("The Ray Code is AWESOME!!!");
        }
    }
}
