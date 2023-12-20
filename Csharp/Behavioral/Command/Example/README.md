[up](../README.md)

The Command design pattern is a behavioral pattern used in software design to encapsulate a request as an object, thereby allowing users to parameterize clients with queues, requests, and operations. It also allows for the support of undoable operations. In the context of C#, implementing this pattern typically involves creating a command interface, concrete command classes, a client, an invoker, and a receiver.

Let's break down an example in C#, with each class in its own `.cs` file for clarity:

### 1. `ICommand.cs` (Command Interface)
This interface declares an execution method that all concrete command classes will implement.

```csharp
public interface ICommand
{
    void Execute();
}
```

### 2. `Light.cs` (Receiver)
The receiver class performs the actual work. Here, we use a simple example of a `Light` that can be turned on and off.

```csharp
public class Light
{
    public void TurnOn() => Console.WriteLine("Light is on");
    public void TurnOff() => Console.WriteLine("Light is off");
}
```

### 3. `LightOnCommand.cs` and `LightOffCommand.cs` (Concrete Commands)
These classes implement the `ICommand` interface, invoking actions on the receiver.

```csharp
public class LightOnCommand : ICommand
{
    private Light _light;

    public LightOnCommand(Light light)
    {
        _light = light;
    }

    public void Execute()
    {
        _light.TurnOn();
    }
}

public class LightOffCommand : ICommand
{
    private Light _light;

    public LightOffCommand(Light light)
    {
        _light = light;
    }

    public void Execute()
    {
        _light.TurnOff();
    }
}
```

### 4. `RemoteControl.cs` (Invoker)
This class asks the command to carry out the request.

```csharp
public class RemoteControl
{
    private ICommand _command;

    public void SetCommand(ICommand command)
    {
        _command = command;
    }

    public void PressButton()
    {
        _command.Execute();
    }
}
```

### 5. `Program.cs` (Client)
This is the entry point where we tie everything together and demonstrate the pattern.

```csharp
class Program
{
    static void Main(string[] args)
    {
        var light = new Light();
        var lightOn = new LightOnCommand(light);
        var lightOff = new LightOffCommand(light);

        var remote = new RemoteControl();

        remote.SetCommand(lightOn);
        remote.PressButton(); // Output: Light is on

        remote.SetCommand(lightOff);
        remote.PressButton(); // Output: Light is off
    }
}
```

### Order of Creation and Execution
1. **Define the `ICommand` Interface**: It's the foundation of the command pattern.
2. **Create the `Receiver` Class (`Light.cs`)**: It's the class that knows how to perform the operations.
3. **Implement Concrete Commands (`LightOnCommand.cs` and `LightOffCommand.cs`)**: These classes encapsulate the action and its parameters.
4. **Create the `Invoker` Class (`RemoteControl.cs`)**: This will use command objects to perform actions.
5. **Assemble in the `Program.cs` file**: This is where you create instances and demonstrate the usage of the command pattern.

### Expected Terminal Output
When you run `Program.cs`, you should expect to see the following output in the terminal:
```
Light is on
Light is off
```

This simple example demonstrates the essence of the Command design pattern in a C# context. You can expand upon this by introducing more complex commands and receivers.
