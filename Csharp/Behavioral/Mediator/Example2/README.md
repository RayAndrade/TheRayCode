[up](../README.md)

Designing a "scary" example of the Interpreter design pattern in C# can be an engaging way to teach your students about this pattern. The Interpreter pattern is used to define a grammatical representation for a language and provides an interpreter to deal with this grammar. Here's a thematic example involving a fictional "Haunted House Language" where commands lead to spooky actions.

### Project Structure

1. `Expression.cs` - Abstract Expression
2. `TerminalExpression.cs` - Terminal Expression
3. `NonTerminalExpression.cs` - Non-Terminal Expression
4. `Context.cs` - Context class
5. `Client.cs` - Client class
6. `Program.cs` - Main entry point

### Implementation

#### 1. `Expression.cs`
```csharp
public interface Expression {
    bool Interpret(string context);
}
```
*Represents the abstract expression with a method for interpreting.*

#### 2. `TerminalExpression.cs`
```csharp
public class TerminalExpression : Expression {
    private string data;

    public TerminalExpression(string data) {
        this.data = data;
    }

    public bool Interpret(string context) {
        return context.Contains(data);
    }
}
```
*Implements `Expression`. Interprets context strings containing specific data.*

#### 3. `NonTerminalExpression.cs`
```csharp
public class NonTerminalExpression : Expression {
    private Expression expr1;
    private Expression expr2;

    public NonTerminalExpression(Expression expr1, Expression expr2) {
        this.expr1 = expr1;
        this.expr2 = expr2;
    }

    public bool Interpret(string context) {
        return expr1.Interpret(context) && expr2.Interpret(context);
    }
}
```
*Combines two expressions. Interprets when both expressions return true.*

#### 4. `Context.cs`
```csharp
public class Context {
    // Contextual data or methods can be added here
}
```
*Holds information global to the interpreter.*

#### 5. `Client.cs`
```csharp
public class Client {
    // Client-specific implementation can be added here
}
```
*Uses the Interpreter classes.*

#### 6. `Program.cs`
```csharp
class Program {
    static void Main(string[] args) {
        Expression ghost = new TerminalExpression("ghost");
        Expression scream = new TerminalExpression("scream");
        Expression haunted = new NonTerminalExpression(ghost, scream);

        Console.WriteLine("Does the house have a ghost that screams? " + haunted.Interpret("ghost scream"));
    }
}
```
*Demonstrates usage of the Interpreter pattern. In this case, it checks if a string contains both "ghost" and "scream".*

### Creation Order

1. `Expression.cs` - Base for other expressions.
2. `TerminalExpression.cs` and `NonTerminalExpression.cs` - Implement the base.
3. `Context.cs` and `Client.cs` - Contextual and usage classes.
4. `Program.cs` - Brings everything together.

### Expected Output in Terminal

```
Does the house have a ghost that screams? True
```

This demonstrates the Interpreter pattern in a fun and thematic way. Each class and method serves a specific role, following the design principles of the pattern.
