namespace Composite
{
    using System.Collections.Generic;
    
    public class Menu: MenuComponent
    {
        private readonly List<MenuComponent> _menuComponents = new List<MenuComponent>();
        private readonly string _name;
        private readonly string _description;

        public Menu(string name, string description)
        {
            _name = name;
            _description = description;
        }

        public override void Add(MenuComponent menuComponent)
        {
            _menuComponents.Add(menuComponent);
        }

        public override void Remove(MenuComponent menuComponent)
        {
            _menuComponents.Remove(menuComponent);
        }

        public override void Print()
        {
            System.Console.WriteLine($"\n{_name}: {_description}");
            System.Console.WriteLine("----------------------");

            foreach (var menuComponent in _menuComponents)
            {
                menuComponent.Print();
            }
        }
    
    }
}