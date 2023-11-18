using System;
using System.Collections.Generic;

namespace Show
{
    public class Directory : IFileSystemItem
    {
        private string _name;
        private List<IFileSystemItem> _items = new List<IFileSystemItem>();

        public Directory(string name)
        {
            _name = "🌟 " + name; // Adding a star for a super touch
        }
        
        public void AddItem(IFileSystemItem item)
        {
            _items.Add(item);
        }

        public void Display(string indent = "")
        {
            Console.WriteLine($"{indent}{_name} (Directory)");
            foreach (var item in _items)
            {
                item.Display(indent + "  ");
            }
        }
    }
}