using System;

namespace Show
{
    public class File: IFileSystemItem
    {
        private string _name;

        public File(string name)
        {
            _name = name;
        }
        
        public void Display(string indent = "")
        {
            Console.WriteLine($"{indent}{_name}");
        }
    }
}