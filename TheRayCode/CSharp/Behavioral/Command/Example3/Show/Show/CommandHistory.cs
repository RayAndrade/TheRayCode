using System.Collections.Generic;

namespace Show
{
    public class CommandHistory
    {
        private readonly Stack<ICommand> _commands = new Stack<ICommand>();

        public void Push(ICommand command)
        {
            _commands.Push(command);
        }

        public ICommand Pop()
        {
            return _commands.Pop();
        }

        public bool HasCommands()
        {
            return _commands.Count > 0;
        }

    }
}