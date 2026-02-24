[up](../README.md)

Creating a goofy example of the Interpreter design pattern in C# can be a fun and educational exercise. The Interpreter pattern is used to define a grammatical representation for a language and provides an interpreter to deal with this grammar. For this example, let's design a simple language that interprets emoji expressions and translates them into text phrases. 

### Project Structure:

1. **`EmojiContext.cs`**: Holds the context of the interpretation, i.e., the emoji string.
2. **`AbstractExpression.cs`**: An abstract class that declares an interpret method.
3. **`SmileExpression.cs`**, **`SadExpression.cs`**, etc.: Concrete classes that implement the interpret method for specific emojis.
4. **`ExpressionInterpreter.cs`**: Acts as a client that builds and interprets emoji expressions.
5. **`Program.cs`**: Entry point of the application to demonstrate the usage of the interpreter.

### Class Descriptions and Implementation:

1. **EmojiContext.cs**
   - `public class EmojiContext`
   - Contains a string `EmojiText` which will hold the emoji string to interpret.

2. **AbstractExpression.cs**
   - `public abstract class AbstractExpression`
   - Declares the `Interpret` method which takes an `EmojiContext` and returns a string.

3. **Concrete Expression Classes (e.g., SmileExpression.cs)**
   - `public class SmileExpression : AbstractExpression`
   - Overrides `Interpret` method. If the emoji matches (e.g., `:)`), it returns a string like "Happy".

4. **ExpressionInterpreter.cs**
   - `public class ExpressionInterpreter`
   - Contains a method `InterpretExpressions` which takes `EmojiContext` and interprets it by using a collection of expressions.

5. **Program.cs**
   - Demonstrates the usage of the Interpreter pattern.
   - Create an instance of `EmojiContext` and `ExpressionInterpreter`.
   - Call `ExpressionInterpreter.InterpretExpressions` with the context.

### Example Code Snippets:

**EmojiContext.cs**
```csharp
public class EmojiContext
{
    public string EmojiText { get; set; }
}
```

**AbstractExpression.cs**
```csharp
public abstract class AbstractExpression
{
    public abstract string Interpret(EmojiContext context);
}
```

**SmileExpression.cs**
```csharp
public class SmileExpression : AbstractExpression
{
    public override string Interpret(EmojiContext context)
    {
        if (context.EmojiText.Contains(":)"))
            return "Happy";
        return "";
    }
}
```

**ExpressionInterpreter.cs**
```csharp
public class ExpressionInterpreter
{
    private readonly List<AbstractExpression> expressions = new List<AbstractExpression>();

    public ExpressionInterpreter()
    {
        expressions.Add(new SmileExpression());
        // Add other expressions here
    }

    public string InterpretExpressions(EmojiContext context)
    {
        return expressions.Select(expression => expression.Interpret(context)).Aggregate((current, next) => current + " " + next).Trim();
    }
}
```

**Program.cs**
```csharp
class Program
{
    static void Main(string[] args)
    {
        var context = new EmojiContext { EmojiText = "Today I feel :)" };
        var interpreter = new ExpressionInterpreter();

        var result = interpreter.InterpretExpressions(context);
        Console.WriteLine($"Interpretation: {result}");
    }
}
```

### Order of Class Creation:

1. **`EmojiContext.cs`**
2. **`AbstractExpression.cs`**
3. **Concrete Expressions (e.g., `SmileExpression.cs`)**
4. **`ExpressionInterpreter.cs`**
5. **`Program.cs`**

### Expected Output in Terminal:

```
Interpretation: Happy
```

This example provides a goofy yet educational way to demonstrate the Interpreter design pattern. Each class and method serves a specific role in interpreting a string of emojis into textual phrases. You can expand this by adding more emoji expressions and their corresponding interpretations.
