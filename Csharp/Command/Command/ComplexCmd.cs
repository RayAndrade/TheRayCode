using System;

namespace Command
{
    public class ComplexCmd: ICommand
    {
        private Receiver _receiver;

        // Context data, required for launching the receiver's methods.
        private string _a;

        private string _b;

        // Complex commands can accept one or several receiver objects along
        // with any context data via the constructor.
        public ComplexCmd(Receiver receiver, string a, string b)
        {
            this._receiver = receiver ?? throw new ArgumentNullException(nameof(receiver));
            this._a = a;
            this._b = b;
        }

        public void Execute()
        {
            Console.WriteLine("ComplexCommand Executed");
            this._receiver.DoSomething(this._a);
            this._receiver.DoSomethingElse(this._b);
        }
    }
}