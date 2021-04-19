# TheRayCode
## Composite pattern c#

The **Composite** design pattern is a structural design pattern that lets you compose objects into tree structures and then work with those structures as if they were individual objects.

The component interface declares common operations for both simple and complex objects of a particular composition.
The base Component class declares common operations for both the simple and complex objects of a composition.

The base **Component** may implement some default behavior and leave it to concrete classes (by declaring the methods containing the behavior as *abstract*).
In some cases, it would be beneficial to define the child-management operations right in the base Component class. 
This way, you won't need to expose any concrete component classes to the client code, even during the object tree assembly. 
The downside is that these methods will be empty for the leaf-level components.
You can provide a method that lets the client code figure out whether a component can bear children.

```c++
abstract class Component
{
    public Component() { }
    public abstract string Operation();
    public virtual void Add(Component component)
    {
        throw new NotImplementedException();
    }
    public virtual void Remove(Component component)
    {
        throw new NotImplementedException();
    }
    public virtual bool IsComposite()
    {
        return true;
    }
}
```

The Leaf class represents the end objects of a composition. 
A leaf can't have any children.

The **Leaf** is extend by **Component**.
Usually, it's the Leaf objects that do the actual work, whereas Composite objects only delegate to their sub-components.

```c#
class Leaf : Component
{
    public override string Operation()
    {
        return "Leaf";
    }
    public override bool IsComposite()
    {
        return false;
    }
}
```

The **Composite** class represents the complex components that may have children. 
It too is extended with the **Component** class.
Usually, the Composite objects delegate the actual work to their children and then *sum-up* the result.

The **Composite** executes its primary logic in a particular way. 
It traverses recursively through all its children, collecting and summing their results. 
Since the composite's children pass these calls to their children and so forth, the *whole* object tree is traversed as a result.
```c#
class Composite : Component
{
    protected List<Component> _children = new List<Component>();
    public override void Add(Component component)
    {
        this._children.Add(component);
    }
    public override void Remove(Component component)
    {
         this._children.Remove(component);
    }
    public override string Operation()
    {
        int i = 0;
        string result = "Branch(";
        foreach (Component component in this._children)
        {
            result += component.Operation();
            if (i != this._children.Count - 1)
            {
                result += "+";
            }
            i++;
        }
        return result + ")";
    }
}
```
The client code works with all of the components via the base interface.

Thanks to the fact that the child-management operations are declared in the base **Component** class, the client code can work with any component, simple or complex, without depending on their concrete classes.
```c#
class Client
{
    public void ClientCode(Component leaf)
    {
        Console.WriteLine($"RESULT: {leaf.Operation()}\n");
    }
    public void ClientCode2(Component component1, Component component2)
    {
        if (component1.IsComposite())
        {
            component1.Add(component2);
        }
            
        Console.WriteLine($"RESULT: {component1.Operation()}");
    }
}
```
This way the client code can support the simple leaf components well as the complex composites.
Let's put this altogether in the **Program** class.

```c#
class Program
{
    static void Main(string[] args)
    {
        Client client = new Client();

        Leaf leaf = new Leaf();
        Console.WriteLine("Client: I get a simple component:");
        client.ClientCode(leaf);

        Composite tree = new Composite();
        Composite branch1 = new Composite();
        branch1.Add(new Leaf());
        branch1.Add(new Leaf());
        Composite branch2 = new Composite();
        branch2.Add(new Leaf());
        tree.Add(branch1);
        tree.Add(branch2);
        Console.WriteLine("Client: Now I've got a composite tree:");
        client.ClientCode(tree);

        Console.Write("Client: I don't need to check the components classes even when managing the tree:\n");
        client.ClientCode2(tree, leaf);
    }
}
```
When we compile it and run we should get:
```run
Client: I get a simple component:
RESULT: Leaf

Client: Now I've got a composite tree:
RESULT: Branch(Branch(Leaf+Leaf)+Branch(Leaf))

Client: I don't need to check the components classes even when managing the tree:
RESULT: Branch(Branch(Leaf+Leaf)+Branch(Leaf)+Leaf)
```


[Wikipedia](https://en.wikipedia.org/wiki/Composite_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)
