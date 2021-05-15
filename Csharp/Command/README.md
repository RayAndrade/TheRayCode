# TheRayCode
## Command pattern c#

Command is a behavioral design pattern that turns a request into a stand-alone object that contains all information about the request. 
This transformation lets you pass requests as a method arguments, delay or queue a request’s execution, and support undoable operations.
The Command interface declares a method for executing a command.
```c#
public interface ICommand
{
    void Execute();
}
```
Some commands can implement simple operations on their own.

```c#
public class SimpleCmd : ICommand
{
    private readonly string _payload;
    public SimpleCmd(string payload)
    {
        this._payload = payload;
    }
    public void Execute()
    {
        Console.WriteLine($"A Simple Command: payload ({this._payload})");
    }
}
```

However, some commands can delegate more complex operations to other objects, called "receivers.
Context data, required for launching the receiver's methods.
Complex commands can accept one or several receiver objects along with any context data via the constructor.
```c#
public class ComplexCmd: ICommand
{
    private Receiver _receiver;

    private string _a;

    private string _b;

    public ComplexCmd(Receiver receiver, string a, string b)
    {
        this._receiver = receiver ?? throw new ArgumentNullException(nameof(receiver));
        this._a = a;
        this._b = b;
    }

    public void Execute()
    {
        Console.WriteLine("ComplexCommand Executed");
        this._receiver.DoSomething(this._a);
        this._receiver.DoSomethingElse(this._b);
    }
}
```
The Invoker is associated with one or several commands. 
It sends a request to the command.
Initialize commands.
The Invoker does not depend on concrete command or receiver classes.
The Invoker passes a request to a receiver indirectly, by executing a command.
```c#
internal class Invoker
{
    private ICommand _onStart;
    private ICommand _onFinish;

    public void SetOnStart(ICommand command)
    {
        this._onStart = command;
    }

    public void SetOnFinish(ICommand command)
    {
        this._onFinish = command;
    }
        
    public void DoSomethingImportant()
    {
        Console.WriteLine("Invoker: Make a request");
        _onStart?.Execute();
        Console.WriteLine("Invoker: ...doing something really important...");
        Console.WriteLine("Invoker: Does anybody want something done after I finish?");
        _onFinish?.Execute();
    }
}
```

The Receiver classes contain some important business logic. 
They know how to perform all kinds of operations, associated with carrying out a request. In fact, any class may serve as a Receiver.

```c#
public class Receiver
{
    public void DoSomething(string a)
    {
        Console.WriteLine($"Receiver: Relieved first item ({a}.)");
    }

    public void DoSomethingElse(string b)
    {
        Console.WriteLine($"Receiver: Received Second Item ({b}.)");
    }
}
```
The client code can parameterize an invoker with any commands.

```c
class Program
{
    static void Main(string[] args)
    {
        Invoker invoker = new Invoker();
        invoker.SetOnStart(new SimpleCmd("Command Start"));
        Receiver receiver = new Receiver();
        invoker.SetOnFinish(new ComplexCmd(receiver, "Do Stuff", "Do Complex Command"));
        invoker.DoSomethingImportant();
    }
}
```
Let's compile this and run. 
We should get:
```run
Invoker: Make a request
A Simple Command: payload (Command Start)
Invoker: ...doing something really important...
Invoker: Does anybody want something done after I finish?
ComplexCommand Executed
Receiver: Relieved first item (Do Stuff.)
Receiver: Received Second Item (Do Complex Command.)

```

The Ray Code is AWESOME!!!

[Wikipedia](https://en.wikipedia.org/wiki/Command_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)
