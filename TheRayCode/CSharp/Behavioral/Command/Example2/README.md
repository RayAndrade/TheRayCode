[up](../README.md)

Certainly! I'll guide you through an implementation of the Command design pattern in C#. The Command pattern encapsulates a request as an object, thereby letting you parameterize clients with different requests, queue or log requests, and support undoable operations.

### Structure

1. **Command Interface**: An interface for executing an operation.
2. **Concrete Command**: Implements the Command interface and defines the binding between a Receiver object and an action.
3. **Receiver**: Knows how to perform the operations associated with carrying out a request.
4. **Invoker**: Asks the command to carry out the request.
5. **Client**: Creates a ConcreteCommand object and sets its receiver.

### Implementation

#### 1. Command Interface (Command.cs)
```csharp
public interface ICommand
{
    void Execute();
}
```

#### 2. Concrete Command (ConcreteCommand.cs)
```csharp
public class ConcreteCommand : ICommand
{
    private readonly Receiver _receiver;

    public ConcreteCommand(Receiver receiver)
    {
        _receiver = receiver;
    }

    public void Execute()
    {
        _receiver.Action();
    }
}
```

#### 3. Receiver (Receiver.cs)
```csharp
public class Receiver
{
    public void Action()
    {
        Console.WriteLine("Action is performed by the Receiver.");
    }
}
```

#### 4. Invoker (Invoker.cs)
```csharp
public class Invoker
{
    private ICommand _command;

    public void SetCommand(ICommand command)
    {
        _command = command;
    }

    public void ExecuteCommand()
    {
        _command.Execute();
    }
}
```

#### 5. Client (Program.cs)
```csharp
class Program
{
    static void Main(string[] args)
    {
        var receiver = new Receiver();
        var command = new ConcreteCommand(receiver);
        var invoker = new Invoker();

        invoker.SetCommand(command);
        invoker.ExecuteCommand();
    }
}
```

### Explanation

- **Command.cs**: This file defines the `ICommand` interface with an `Execute` method.
- **ConcreteCommand.cs**: This implements `ICommand` and invokes the method on the `Receiver`.
- **Receiver.cs**: This class contains the actual logic to be executed.
- **Invoker.cs**: Holds a command and can call its `Execute` method.
- **Program.cs**: Sets up the command pattern relationships and executes the command.

### Order of Creation
1. Start with the `Command` interface.
2. Create the `Receiver` class.
3. Implement the `ConcreteCommand` class.
4. Define the `Invoker` class.
5. Finally, demonstrate the pattern in `Program.cs`.

### Output in Terminal
When you run the Program.cs, you should see:

```
Action is performed by the Receiver.
```

This output indicates that the command has been successfully executed by the receiver through the invoker.
