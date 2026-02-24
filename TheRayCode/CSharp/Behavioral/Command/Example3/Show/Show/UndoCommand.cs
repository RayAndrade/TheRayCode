namespace Show
{
    public class UndoCommand: ICommand
    {
        private readonly CommandHistory _history;

        public UndoCommand(CommandHistory history)
        {
            _history = history;
        }

        public void Execute()
        {
            if (_history.HasCommands())
            {
                _history.Pop().Undo();
            }
        }

        public void Undo()
        {
            // Undoing an undo is usually not implemented.
        }
    }
}