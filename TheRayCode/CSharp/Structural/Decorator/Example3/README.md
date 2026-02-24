[up](../README.md)

The Decorator pattern in C# is a structural design pattern that allows behavior to be added to an individual object, either statically or dynamically, without affecting the behavior of other objects from the same class. It's often used to extend the functionality of classes in a flexible and reusable way.

In this example, we'll create a simple Christmas tree decorator. The scenario involves decorating a Christmas tree with various ornaments and lights. We'll have a basic `ChristmasTree` class, and then we'll use decorators to add different types of decorations to it.

### Project Structure
1. **ChristmasTree.cs:** The base component.
2. **TreeDecorator.cs:** The base decorator.
3. **LightsDecorator.cs:** A concrete decorator for adding lights.
4. **OrnamentsDecorator.cs:** Another concrete decorator for adding ornaments.
5. **Program.cs:** The main entry point to demonstrate the pattern.

### Implementation

#### 1. ChristmasTree.cs
```csharp
public abstract class ChristmasTree
{
    public abstract string Decorate();
}
```

#### 2. TreeDecorator.cs
```csharp
public abstract class TreeDecorator : ChristmasTree
{
    protected ChristmasTree _tree;

    public TreeDecorator(ChristmasTree tree)
    {
        _tree = tree;
    }

    public override string Decorate()
    {
        return _tree.Decorate();
    }
}
```

#### 3. LightsDecorator.cs
```csharp
public class LightsDecorator : TreeDecorator
{
    public LightsDecorator(ChristmasTree tree) : base(tree) { }

    public override string Decorate()
    {
        return base.Decorate() + DecorateWithLights();
    }

    private string DecorateWithLights()
    {
        return " with Lights";
    }
}
```

#### 4. OrnamentsDecorator.cs
```csharp
public class OrnamentsDecorator : TreeDecorator
{
    public OrnamentsDecorator(ChristmasTree tree) : base(tree) { }

    public override string Decorate()
    {
        return base.Decorate() + DecorateWithOrnaments();
    }

    private string DecorateWithOrnaments()
    {
        return " with Ornaments";
    }
}
```

#### 5. Program.cs
```csharp
class Program
{
    static void Main(string[] args)
    {
        ChristmasTree tree = new SimpleChristmasTree();
        tree = new LightsDecorator(tree);
        tree = new OrnamentsDecorator(tree);

        Console.WriteLine(tree.Decorate());
    }
}

public class SimpleChristmasTree : ChristmasTree
{
    public override string Decorate()
    {
        return "Christmas tree";
    }
}
```

### Order of Creation and Execution
1. Create the `ChristmasTree` abstract class.
2. Create the `TreeDecorator` abstract class.
3. Implement concrete decorators `LightsDecorator` and `OrnamentsDecorator`.
4. In `Program.cs`, demonstrate the usage by decorating a simple Christmas tree with lights and ornaments.

### Expected Output
When you run the `Program.cs`, the output will be:
```
Christmas tree with Lights with Ornaments
```
This shows how the decorators add additional behaviors (decorations) to the simple Christmas tree object without changing its structure.
