using System;

namespace Show
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            var editor = new TextEditor();
            var history = new CommandHistory();

            var writeCommand = new WriteTextCommand(editor, "Hello, World!");
            writeCommand.Execute();
            history.Push(writeCommand);

            Console.WriteLine("Text after write command: " + editor.GetContent());

            var undoCommand = new UndoCommand(history);
            undoCommand.Execute();

            Console.WriteLine("Text after undo: " + editor.GetContent());
        }
    }
}