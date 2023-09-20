Let's use the Interpreter design pattern to interpret a simple language that represents "animal actions". 
For instance, our language can have expressions like "cat sleep" or "dog bark".

### Order of Creation:

1. `IExpression.cs`: An interface implemented by every 'real' expression.
2. `AnimalExpression.cs`: Represents the animal in the expression.
3. `ActionExpression.cs`: Represents the action in the expression.
4. `CommandExpression.cs`: Combines both the animal and the action.
5. `ExpressionParser.cs`: Utility class to parse the input and create the expression tree.
6. `Program.cs`: To demonstrate the usage.

### IExpression.cs:

```csharp
public interface IExpression
{
    void Interpret(Context context);
}
```

### Context.cs:

This class represents the global information, the result of interpretation.

```csharp
public class Context
{
    public string Output { get; set; }
}
```

### AnimalExpression.cs:

```csharp
public class AnimalExpression : IExpression
{
    private readonly string _animal;

    public AnimalExpression(string animal)
    {
        _animal = animal;
    }

    public void Interpret(Context context)
    {
        context.Output = _animal;
    }
}
```

### ActionExpression.cs:

```csharp
public class ActionExpression : IExpression
{
    private readonly string _action;

    public ActionExpression(string action)
    {
        _action = action;
    }

    public void Interpret(Context context)
    {
        context.Output += " " + _action;
    }
}
```

### CommandExpression.cs:

```csharp
public class CommandExpression : IExpression
{
    private readonly IExpression _animalExpression;
    private readonly IExpression _actionExpression;

    public CommandExpression(IExpression animal, IExpression action)
    {
        _animalExpression = animal;
        _actionExpression = action;
    }

    public void Interpret(Context context)
    {
        _animalExpression.Interpret(context);
        _actionExpression.Interpret(context);
    }
}
```

### ExpressionParser.cs:

```csharp
public class ExpressionParser
{
    public IExpression Parse(string input)
    {
        var tokens = input.Split(' ');

        if (tokens.Length != 2)
            throw new ArgumentException("Invalid command");

        IExpression animalExpression = new AnimalExpression(tokens[0]);
        IExpression actionExpression = new ActionExpression(tokens[1]);

        return new CommandExpression(animalExpression, actionExpression);
    }
}
```

### Program.cs:

```csharp
class Program
{
    static void Main(string[] args)
    {
        string input = "cat sleep";
        var parser = new ExpressionParser();
        var expression = parser.Parse(input);

        var context = new Context();
        expression.Interpret(context);

        Console.WriteLine(context.Output);  // Output: "cat sleep"
    }
}
```

In this example, we're interpreting commands made of two words: the animal and the action. The `ExpressionParser` will construct an expression tree from these commands, which is then interpreted to generate the output.


```
cat sleep
```

