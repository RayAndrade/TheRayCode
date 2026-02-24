[up](../README.md)

Let's adjust the example to represent Menus and MenuItems, which fits well with the Composite pattern.

Order of class creation:
1. `MenuComponent` - The abstract base component.
2. `MenuItem` - Represents a single menu item, which is a leaf.
3. `Menu` - Represents a combination of menus and menu items, acting as the composite.
4. `Program` - Demonstrates how the Composite pattern works.

### 1. MenuComponent.cs
```csharp
namespace CompositePattern
{
    public abstract class MenuComponent
    {
        public virtual void Add(MenuComponent menuComponent)
        {
            throw new System.NotImplementedException();
        }

        public virtual void Remove(MenuComponent menuComponent)
        {
            throw new System.NotImplementedException();
        }

        public virtual void Print()
        {
            throw new System.NotImplementedException();
        }
    }
}
```

### 2. MenuItem.cs
```csharp
namespace CompositePattern
{
    public class MenuItem : MenuComponent
    {
        private readonly string _name;
        private readonly string _description;
        private readonly double _price;

        public MenuItem(string name, string description, double price)
        {
            _name = name;
            _description = description;
            _price = price;
        }

        public override void Print()
        {
            System.Console.WriteLine($"{_name}: {_description} - ${_price}");
        }
    }
}
```

### 3. Menu.cs
```csharp
using System.Collections.Generic;

namespace CompositePattern
{
    public class Menu : MenuComponent
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
```

### 4. Program.cs
```csharp
namespace CompositePattern
{
    class Program
    {
        static void Main(string[] args)
        {
            // Create menu items
            MenuItem pizza = new MenuItem("Pizza", "Cheese pizza", 7.99);
            MenuItem salad = new MenuItem("Salad", "Mixed greens with vinaigrette", 5.99);
            MenuItem pasta = new MenuItem("Pasta", "Spaghetti with marinara sauce", 8.99);
            MenuItem iceCream = new MenuItem("Ice Cream", "Vanilla ice cream", 3.99);
            
            // Create Lunch and Dinner menus
            Menu lunchMenu = new Menu("Lunch Menu", "Lunch specials");
            lunchMenu.Add(pizza);
            lunchMenu.Add(salad);

            Menu dinnerMenu = new Menu("Dinner Menu", "Dinner specials");
            dinnerMenu.Add(pasta);
            dinnerMenu.Add(iceCream);
            
            // Display menus
            System.Console.WriteLine("==== LUNCH ====");
            lunchMenu.Print();
            
            System.Console.WriteLine("==== DINNER ====");
            dinnerMenu.Print();
        }
    }
}
```

**Explanation**:
- `MenuComponent`: It's the abstract base component. All other elements in the hierarchy inherit from it.

- `MenuItem`: Represents an individual dish/item in the menu. It has properties like name, description, and price and a method to `Print` its details.

- `Menu`: Represents a menu that can have multiple `MenuComponent` (i.e., `MenuItem` or other `Menu`). It provides methods to add, remove, and print its components.

- `Program`: We create individual menu items, then add them to Lunch and Dinner menus, and finally, print these menus.
