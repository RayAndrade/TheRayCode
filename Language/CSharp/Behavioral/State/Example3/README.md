[up](../README.md)

Creating a fun and educational example of the State design pattern in C# can be an excellent way to teach your students about design patterns in a memorable way. Here's an example using a classic scenario: a "Gumball Machine" that changes its behavior based on its current state (e.g., HasQuarter, NoQuarter, SoldOut, etc.).

### Project Structure
1. **GumballMachine.cs** - Main class representing the gumball machine.
2. **IState.cs** - Interface representing the state of the gumball machine.
3. **HasQuarterState.cs** - Concrete state when the machine has a quarter.
4. **NoQuarterState.cs** - Concrete state when the machine has no quarter.
5. **SoldOutState.cs** - Concrete state when the machine is sold out.
6. **Program.cs** - Entry point to demonstrate the State pattern.

### GumballMachine.cs
```csharp
public class GumballMachine
{
    public IState HasQuarterState { get; private set; }
    public IState NoQuarterState { get; private set; }
    public IState SoldOutState { get; private set; }

    public IState CurrentState { get; private set; }
    public int Count { get; private set; }

    public GumballMachine(int count)
    {
        HasQuarterState = new HasQuarterState(this);
        NoQuarterState = new NoQuarterState(this);
        SoldOutState = new SoldOutState(this);

        Count = count;
        CurrentState = count > 0 ? NoQuarterState : SoldOutState;
    }

    public void InsertQuarter() => CurrentState.InsertQuarter();
    public void EjectQuarter() => CurrentState.EjectQuarter();
    public void TurnCrank() => CurrentState.TurnCrank();
    public void ReleaseBall()
    {
        if (Count > 0)
        {
            Console.WriteLine("A gumball comes rolling out...");
            Count--;
        }
    }

    public void SetState(IState state) => CurrentState = state;
}
```

### IState.cs
```csharp
public interface IState
{
    void InsertQuarter();
    void EjectQuarter();
    void TurnCrank();
}
```

### HasQuarterState.cs
```csharp
public class HasQuarterState : IState
{
    private GumballMachine _gumballMachine;

    public HasQuarterState(GumballMachine gumballMachine)
    {
        _gumballMachine = gumballMachine;
    }

    public void InsertQuarter() => Console.WriteLine("You can't insert another quarter.");
    public void EjectQuarter()
    {
        Console.WriteLine("Quarter returned.");
        _gumballMachine.SetState(_gumballMachine.NoQuarterState);
    }
    public void TurnCrank()
    {
        Console.WriteLine("You turned...");
        _gumballMachine.SetState(_gumballMachine.SoldOutState);
        _gumballMachine.ReleaseBall();
    }
}
```

### NoQuarterState.cs
```csharp
public class NoQuarterState : IState
{
    private GumballMachine _gumballMachine;

    public NoQuarterState(GumballMachine gumballMachine)
    {
        _gumballMachine = gumballMachine;
    }

    public void InsertQuarter()
    {
        Console.WriteLine("You inserted a quarter.");
        _gumballMachine.SetState(_gumballMachine.HasQuarterState);
    }
    public void EjectQuarter() => Console.WriteLine("You haven't inserted a quarter.");
    public void TurnCrank() => Console.WriteLine("You turned, but there's no quarter.");
}
```

### SoldOutState.cs
```csharp
public class SoldOutState : IState
{
    private GumballMachine _gumballMachine;

    public SoldOutState(GumballMachine gumballMachine)
    {
        _gumballMachine = gumballMachine;
    }

    public void InsertQuarter() => Console.WriteLine("You can't insert a quarter, the machine is sold out.");
    public void EjectQuarter() => Console.WriteLine("You can't eject, you haven't inserted a quarter yet.");
    public void TurnCrank() => Console.WriteLine("You turned, but there are no gumballs.");
}
```

### Program.cs
```csharp
class Program
{
    static void Main()
    {
        GumballMachine gumballMachine = new GumballMachine(5);

        Console.WriteLine("Testing Gumball Machine");
        gumballMachine.InsertQuarter();
        gumballMachine.TurnCrank();

        Console.WriteLine("Current gumballs: " + gumballMachine.Count);
    }
}
```

### Terminal Output
When running the program, you might see something like this:
```
Testing Gumball Machine
You inserted a quarter.
You turned...
A gumb

all comes rolling out...
Current gumballs: 4
```

### Order of Creation
1. Define **IState**.
2. Create **NoQuarterState**, **HasQuarterState**, **SoldOutState**.
3. Implement **GumballMachine**.
4. Demonstrate with **Program.cs**.

This example showcases the State design pattern by changing the behavior of the GumballMachine based on its internal state. Each state class implements the IState interface, encapsulating the behavior specific to that state.
