using System;

namespace Command
{
    internal class Invoker
    {
        private ICommand _onStart;

        private ICommand _onFinish;

        // Initialize commands.
        public void SetOnStart(ICommand command)
        {
            this._onStart = command;
        }

        public void SetOnFinish(ICommand command)
        {
            this._onFinish = command;
        }
        
        public void DoSomethingImportant()
        {
            Console.WriteLine("Invoker: Make a request");
            _onStart?.Execute();

            Console.WriteLine("Invoker: ...doing something really important...");
            
            Console.WriteLine("Invoker: Does anybody want something done after I finish?");
            _onFinish?.Execute();
        }

    }
}