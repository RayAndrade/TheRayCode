# TheRayCode
## Decorator pattern c++

Decorator is a structural pattern that allows adding new behaviors to objects dynamically by placing them inside special wrapper objects.

Using decorators you can wrap objects countless number of times since both target objects and decorators follow the same interface. 
The resulting object will get a stacking behavior of all wrappers.

This example illustrates the structure of the Decorator design pattern. It focuses on answering these questions:
<ol>
<li>What classes does it consist of?</li>
<li>What roles do these classes play?</li>
<li>In what way the elements of the pattern are related?</li>
</ol>

The **Component** should be public abstract all others will be abstract only.
The base Component interface defines operations that can be altered by decorators.

```c#
public abstract class Component
{
    public abstract string Operation();
}
```

**Concrete Components** provide default implementations of the operations.
There might be several variations of these classes.
The Decorator delegates all work to the wrapped component.
```c#
class ConcreteComponent : Component
{
    public override string Operation()
    {
        return "ConcreteComponent";
     }
}
```

The base Decorator class follows the same interface as the other components. 
The primary purpose of this class is to define the wrapping interface for all concrete decorators. 
The default implementation of the wrapping code might include a field for storing a wrapped component and the means to initialize it.
```c#
abstract class Decorator : Component
{
    protected Component _component;

    public Decorator(Component component)
    {
        this._component = component;
    }

    public void SetComponent(Component component)
    {
        this._component = component;
    }

    public override string Operation()
    {
        if (this._component != null)
        {
            return this._component.Operation();
        }
        else
        {
            return string.Empty;
        }
    }
}
```

Decorators may call parent implementation of the operation, instead of calling the wrapped object directly. 
This approach simplifies extension of decorator classes.
Concrete Decorators call the wrapped object and alter its result in some way.
```c#
class ConcreteDecoratorA : Decorator
{
    public ConcreteDecoratorA(Component comp) : base(comp)
    {
    }

    public override string Operation()
    {
        return $"ConcreteDecoratorA({base.Operation()})";
    }
}
```
 Decorators can execute their behavior either before or after the call to a wrapped object.
```c#
class ConcreteDecoratorB : Decorator
{
    public ConcreteDecoratorB(Component comp) : base(comp)
    {  }

    public override string Operation()
    {
        return $"ConcreteDecoratorB({base.Operation()})";
    }
}
```
 The client code works with all objects using the Component interface.
 This way it can stay independent of the concrete classes of components it works with.
 
```c#
 public class Client
{
    public void ClientCode(Component component)
    {
        Console.WriteLine("RESULT: " + component.Operation());
    }
}

```
 
Note how decorators can wrap not only simple components but the other decorators as well.

```c#
class Program
{
    static void Main(string[] args)
    {
        Client client = new Client();

        var simple = new ConcreteComponent();
        Console.WriteLine("Client: I get a simple component:");
        client.ClientCode(simple);
        Console.WriteLine();

        ConcreteDecoratorA decorator1 = new ConcreteDecoratorA(simple);
        ConcreteDecoratorB decorator2 = new ConcreteDecoratorB(decorator1);
        Console.WriteLine("Client: Now I've got a decorated component:");
        client.ClientCode(decorator2);
    }
}
```

Let's compile and run.
We get:
```run
Client: I get a simple component:
RESULT: ConcreteComponent

Client: Now I've got a decorated component:
RESULT: ConcreteDecoratorB(ConcreteDecoratorA(ConcreteComponent))
```

The Ray Code is AWESOME!!!

[Wikipedia](https://en.wikipedia.org/wiki/Decorator_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)
