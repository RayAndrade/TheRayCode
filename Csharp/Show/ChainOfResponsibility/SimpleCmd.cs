using System;

namespace Command
{
    public class SimpleCmd : ICommand
    {
        private readonly string _payload;

        public SimpleCmd(string payload)
        {
            this._payload = payload;
        }

        
        public void Execute()
        {
            Console.WriteLine($"A Simple Command: payload ({this._payload})");
        }
    }
}