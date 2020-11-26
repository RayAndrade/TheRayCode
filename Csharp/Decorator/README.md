# TheRayCode
TheRayCode C# 
# TheRayCode
## heading 2
### heading 3
#### heading 4


BUILD ORDER:

Component
should be public abstract all others will be abstract only

```python
public abstract class Component
```

add:

```csharp
public abstract string Operation();
```

=================================

```csharp
Decorator
```

```python
abstract class Decorator: Component
```

add:

```python
protected Component _component;
```

public Decorator(Component component)
{
    this._component = component;
}

public void SetComponent(Component component)
{
    this._component = component;
}

// The Decorator delegates all work to the wrapped component.
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



=================================

ConcreteComponent

class ConcreteComponent : Component

implement missing method

replace throw with:

return "ConcreteComponent";


=================================

ConcreteDecoratorA

class ConcreteDecoratorA : Decorator

implement missing member

add:
public override string Operation()
{
   return $"ConcreteDecoratorA({base.Operation()})";
}

=================================
ConcreteDecoratorB

class ConcreteDecoratorB : Decorator

implement missing member

add:

public override string Operation()
{
    return $"ConcreteDecoratorB({base.Operation()})";
}


=================================
Client

class Client

add:

public void ClientCode(Component component)
{
    Console.WriteLine("RESULT: " + component.Operation());
}

The client code works with all objects using the Component interface. This way it can stay independent of the concrete classes of components it works with.

=================================
GOTO:

Program

Client client = new Client();

var simple = new ConcreteComponent();
Console.WriteLine("Client: I get a simple component:");
client.ClientCode(simple);
Console.WriteLine();

// other decorators as well.
ConcreteDecoratorA decorator1 = new ConcreteDecoratorA(simple);
ConcreteDecoratorB decorator2 = new ConcreteDecoratorB(decorator1);

Console.WriteLine("Client: Now I've got a decorated component:");
client.ClientCode(decorator2);



[Github](https://www.TheRayCode.com)
