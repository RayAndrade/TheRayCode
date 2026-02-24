namespace Show
{
    public class WriteTextCommand : ICommand
    {
        private readonly string _textToAdd;
        private readonly TextEditor _editor;

        public WriteTextCommand(TextEditor editor, string textToAdd)
        {
            _editor = editor;
            _textToAdd = textToAdd;
        }

        public void Execute()
        {
            _editor.AppendText(_textToAdd);
        }

        public void Undo()
        {
            // Here, we assume the text to remove is the same as the text added.
            _editor.RemoveText(_textToAdd.Length);
        }
    }
}