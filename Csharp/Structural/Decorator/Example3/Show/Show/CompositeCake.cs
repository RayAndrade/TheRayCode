using System;
using System.Collections.Generic;

namespace Show
{
    public class CompositeCake: ICakeComponent
    {
        private List<ICakeComponent> _children = new List<ICakeComponent>();
        private string _name;

        public CompositeCake(string name)
        {
            _name = name;
        }

        public void Add(ICakeComponent component)
        {
            _children.Add(component);
        }

        public string GetName()
        {
            return _name;
        }

        public void Display(int depth)
        {
            Console.WriteLine(new String('-', depth) + _name);
            foreach (ICakeComponent component in _children)
            {
                component.Display(depth + 2);
            }
        }
    }
}