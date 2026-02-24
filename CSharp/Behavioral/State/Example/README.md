[up](../README.md)

Creating a C# example using the State design pattern involves several steps. This pattern allows an object to alter its behavior when its internal state changes. It's like the object changes its class. Let's go through a simple scenario to illustrate this pattern:

### Scenario: Traffic Light System

Let's consider a traffic light system with three states - Red, Yellow, and Green.

### Step 1: Define the State Interface

**TrafficLightState.cs**
```csharp
public interface ITrafficLightState
{
    void Change(TrafficLight light);
    string GetState();
}
```

This interface declares methods for changing the state and getting the current state's name.

### Step 2: Create Concrete States

Each state (Red, Yellow, Green) implements the `ITrafficLightState` interface.

**RedLightState.cs**
```csharp
public class RedLightState : ITrafficLightState
{
    public void Change(TrafficLight light)
    {
        light.SetState(new GreenLightState());
    }

    public string GetState()
    {
        return "Red Light";
    }
}
```

**GreenLightState.cs** and **YellowLightState.cs** are similar, but `Change` method switches to the next appropriate state.

Here's the implementation for the `GreenLightState.cs` and `YellowLightState.cs` classes, following the same pattern as the `RedLightState.cs` I provided earlier.

### GreenLightState.cs
This class represents the green light state of the traffic light. When the traffic light is in this state and `Change` is called, it transitions to the yellow light state.

```csharp
public class GreenLightState : ITrafficLightState
{
    public void Change(TrafficLight light)
    {
        light.SetState(new YellowLightState());
    }

    public string GetState()
    {
        return "Green Light";
    }
}
```

### YellowLightState.cs
This class represents the yellow light state of the traffic light. When the traffic light is in this state and `Change` is called, it transitions to the red light state.

```csharp
public class YellowLightState : ITrafficLightState
{
    public void Change(TrafficLight light)
    {
        light.SetState(new RedLightState());
    }

    public string GetState()
    {
        return "Yellow Light";
    }
}
```

In these implementations, the `Change` method in each state class switches the traffic light to the next appropriate state. The `GetState` method returns a string indicating the current state, which is used for display purposes in the `Program.cs`'s `Main` method.

With these classes, along with the previously described `RedLightState.cs`, `TrafficLight.cs`, and `Program.cs`, you have a complete implementation of the State design pattern in a traffic light context. Each class should be in its own `.cs` file as per your requirement.



### Step 3: Create Context Class

**TrafficLight.cs**
```csharp
public class TrafficLight
{
    private ITrafficLightState _state;

    public TrafficLight(ITrafficLightState initialState)
    {
        _state = initialState;
    }

    public void SetState(ITrafficLightState state)
    {
        _state = state;
    }

    public void Change()
    {
        _state.Change(this);
    }

    public string GetState()
    {
        return _state.GetState();
    }
}
```

The `TrafficLight` class has a method `Change` which delegates the behavior to the current state object.

### Step 4: Program Entry Point

**Program.cs**
```csharp
class Program
{
    static void Main(string[] args)
    {
        var trafficLight = new TrafficLight(new RedLightState());

        for (int i = 0; i < 6; i++)
        {
            Console.WriteLine($"The light is {trafficLight.GetState()}");
            trafficLight.Change();
            Thread.Sleep(1000); // Just to simulate time delay
        }
    }
}
```

This code creates a traffic light initially in the red state, then changes its state every second, cycling through red, green, and yellow.

### Order of Creation

1. **ITrafficLightState Interface**: Defines the common interface for all states.
2. **Concrete States**: RedLightState, GreenLightState, YellowLightState.
3. **Context Class**: TrafficLight.
4. **Program Entry**: Program.cs with the Main method.

### Expected Terminal Output

When you run the program, you should see an output like this in the terminal, changing every second:

```
The light is Red Light
The light is Green Light
The light is Yellow Light
The light is Red Light
The light is Green Light
The light is Yellow Light
```

Each .cs file should be created separately as mentioned, following the order of creation for a structured approach. This example provides a clear understanding of how the State design pattern works in a real-world scenario.
