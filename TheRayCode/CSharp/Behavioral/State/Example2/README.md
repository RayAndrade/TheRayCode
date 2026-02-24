[up](../README.md)

Creating a fun and educational example of the State design pattern in C# can be a great way to engage your students in learning design patterns. Here, I'll provide a whimsical example involving a `LightBulb` that changes its state between `On`, `Off`, and `Broken`. 

### Project Structure
1. **LightBulbState.cs** (Abstract State)
2. **OnState.cs** (Concrete State)
3. **OffState.cs** (Concrete State)
4. **BrokenState.cs** (Concrete State)
5. **LightBulb.cs** (Context)
6. **Program.cs** (Main Program)

### LightBulbState.cs
```csharp
public abstract class LightBulbState
{
    public abstract void Handle(LightBulb lightBulb);
}
```

### OnState.cs
```csharp
public class OnState : LightBulbState
{
    public override void Handle(LightBulb lightBulb)
    {
        Console.WriteLine("The light bulb is already on. Be careful not to overuse it!");
    }
}
```

### OffState.cs
```csharp
public class OffState : LightBulbState
{
    public override void Handle(LightBulb lightBulb)
    {
        Console.WriteLine("Light bulb turned on.");
        lightBulb.State = new OnState();
    }
}
```

### BrokenState.cs
```csharp
public class BrokenState : LightBulbState
{
    public override void Handle(LightBulb lightBulb)
    {
        Console.WriteLine("The light bulb is broken. It needs to be replaced!");
    }
}
```

### LightBulb.cs
```csharp
public class LightBulb
{
    public LightBulbState State { get; set; }

    public LightBulb()
    {
        // Initial state
        State = new OffState();
    }

    public void Switch()
    {
        State.Handle(this);

        // Simulate the chance of breaking
        if (State is OnState && new Random().Next(10) == 0)
        {
            State = new BrokenState();
        }
    }
}
```

### Program.cs
```csharp
class Program
{
    static void Main(string[] args)
    {
        LightBulb bulb = new LightBulb();

        for (int i = 0; i < 5; i++)
        {
            bulb.Switch();
        }
    }
}
```

### Expected Output in Terminal
- On first switch: "Light bulb turned on."
- On subsequent switches while the bulb is on: "The light bulb is already on. Be careful not to overuse it!"
- If the bulb breaks: "The light bulb is broken. It needs to be replaced!"

```
On first switch: "Light bulb turned on.
The light bulb is broken. It needs to be replaced!
The light bulb is already on. Be careful not to overuse it!
The light bulb is broken. It needs to be replaced!
```


### Creation Order
1. Create the `LightBulbState` abstract class.
2. Implement concrete states: `OnState`, `OffState`, `BrokenState`.
3. Create the `LightBulb` class (the context).
4. Finally, create the `Program` class to demonstrate the behavior.

This example should help students understand how objects can alter their behavior when their internal state changes, without changing the classes of the objects themselves. It's a fun way to visualize the State design pattern in a real-world scenario.

