using System;

namespace Show
{
    public class SimpleCake: ICakeComponent
    {
        private string _name;

        public SimpleCake(string name)
        {
            _name = name;
        }

        public string GetName()
        {
            return _name;
        }

        public void Display(int depth)
        {
            Console.WriteLine(new String('-', depth) + _name);
        }
    }
}