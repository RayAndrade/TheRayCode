using System;

namespace Show
{
    public class File : IFileSystemItem
    {
        private string _name;

        public File(string name)
        {
            _name = "🐾 " + name; // Adding a paw print for flair
        }
        
        public void Display(string indent = "")
        {
            Console.WriteLine($"{indent}{_name} (File)");
        }
    }
}