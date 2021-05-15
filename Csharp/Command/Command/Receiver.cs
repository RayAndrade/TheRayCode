using System;

namespace Command
{
    public class Receiver
    {
        public void DoSomething(string a)
        {
            Console.WriteLine($"Receiver: Relieved first item ({a}.)");
        }

        public void DoSomethingElse(string b)
        {
            Console.WriteLine($"Receiver: Received Second Item ({b}.)");
        }
    }
}