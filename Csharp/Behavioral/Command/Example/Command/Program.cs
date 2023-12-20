using System;

namespace Command
{
 
    class Program
    {
        static void Main(string[] args)
        {
            // The client code can parameterize an invoker with any commands.
            Invoker invoker = new Invoker();
            invoker.SetOnStart(new SimpleCmd("Command Start"));
            Receiver receiver = new Receiver();
            invoker.SetOnFinish(new ComplexCmd(receiver, "Do Stuff", "Do Complex Command"));

            invoker.DoSomethingImportant();
            
            Console.WriteLine("The Ray Code is AWESOME!!!");
        }
    }
}
