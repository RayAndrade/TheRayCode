# TheRayCode is AWESOME!!!

**State**

**[C#](../README.md)** 

**[Creational Patterns](../Creational/README.md)** | **[Structural Patterns](../Structural/README.md)** | **[Behavioral Patterns](../README.md)**

**C# Behavioral Patterns**

* **[ChainOfResponsibility](../ChainOfResponsibility/README.md)**
* **[Iterator](../Iterator/README.md)**
* **[Mediator](../Mediator/README.md)**
* **[Memento](../Memento/README.md)**
* **[Observer](../Observer/README.md)**
* **[State](./README.md)**
* **[Strategy](../Strategy/README.md)**
* **[Template](../Template/README.md)**
* **[Visitor](../Visitor/README.md)**

**C# State Design Pattern**

[taarget](./Show/README.md)


[Example 1](./SE1/README.md)

I need an example of the State design pattern in c#. Place each class in its own .cs page. Place the demo in the main method file named Program. Describe the utility of each file. Describe when you would use the State design pattern in. Use sleep eat cycle as your states.

let's implement the State pattern in C#. The State pattern allows an object to alter its behavior when its internal state changes. The object will appear to change its class.

Let's use the context of a person who can be in different states such as Sleeping or Eating.

**IState.cs**

This file defines an interface for all states. Each state will implement the Handle method, which takes the Context (the person) and alters its state.

```
public interface IState
{
    void Handle(Context context);
}
```
**SleepState.cs**

This file defines the SleepState class that implements IState. When Handle is called, it changes the state of the context to sleeping.

```
public class SleepState : IState
{
    public void Handle(Context context)
    {
        Console.WriteLine("Going to Sleep");
        context.SetState(this);
    }

    public override string ToString()
    {
        return "Sleeping";
    }
}
```
**EatState.cs**

This file defines the EatState class that implements IState. When Handle is called, it changes the state of the context to eating.

```
public class EatState : IState
{
    public void Handle(Context context)
    {
        Console.WriteLine("Going to Eat");
        context.SetState(this);
    }

    public override string ToString()
    {
        return "Eating";
    }
}
```
**Context.cs**

This file defines the Context class. In the context of our example, this is the person whose state can change. The Request method delegates state changing to the current IState object.

```
public class Context
{
    private IState _state;

    public Context()
    {
        _state = new SleepState();
    }

    public void SetState(IState state)
    {
        _state = state;
    }

    public void Request()
    {
        _state.Handle(this);
    }
}
```
**Program.cs**

This is the entry point for the application. It creates a Context (person) and changes its state from sleeping to eating.

```
public class Program
{
    public static void Main(string[] args)
    {
        Context context = new Context();

        SleepState sleepState = new SleepState();
        sleepState.Handle(context);
        Console.WriteLine(context.ToString());

        EatState eatState = new EatState();
        eatState.Handle(context);
        Console.WriteLine(context.ToString());
    }
}
```

When we compile and run we get

```
Going to Sleep
Show.Context
Going to Eat
Show.Context
```
The State design pattern is used when an object's behavior should change with its state, and when complex conditions tie object behavior to its state. This pattern is used to avoid complex conditional or multibranch statements. This example demonstrated that a person can be in different states (sleeping, eating) and how this can be cleanly handled with the State pattern.



[TheRayCode.ORG](https://www.TheRayCode.org)

[RayAndrade.COM](https://www.RayAndrade.com)

[Facebook](https://www.facebook.com/TheRayCode/) | [Twitter @TheRayCode](https://www.twitter.com/TheRayCode/) | [YouTube](https://www.youtube.com/TheRayCode/)
