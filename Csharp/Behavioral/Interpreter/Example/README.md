
Let's break down the Interpreter design pattern in C# and structure it into individual .cs files.

### Overview:

The Interpreter pattern provides a way to evaluate language grammars or expressions for particular languages. In essence, it's about defining a domain language and interpreting sentences or expressions in that language. 

For this example, let's create a simple arithmetic expression evaluator. This evaluator will understand numbers, addition, and subtraction.

### Order of Creation:

1. `IExpression.cs`: An interface that will be implemented by every 'real' expression.
2. `NumberExpression.cs`: Represents terminal expression implementing numbers.
3. `AddExpression.cs`: Represents non-terminal expression implementing addition.
4. `SubtractExpression.cs`: Represents non-terminal expression implementing subtraction.
5. `ExpressionParser.cs`: A utility class to parse the input and create the expression tree.
6. `Program.cs`: To demonstrate the usage.

### IExpression.cs:

```csharp
public interface IExpression
{
    int Interpret();
}
```

### NumberExpression.cs:

```csharp
public class NumberExpression : IExpression
{
    private readonly int _number;

    public NumberExpression(int number)
    {
        _number = number;
    }

    public int Interpret()
    {
        return _number;
    }
}
```

### AddExpression.cs:

```csharp
public class AddExpression : IExpression
{
    private readonly IExpression _leftExpression;
    private readonly IExpression _rightExpression;

    public AddExpression(IExpression left, IExpression right)
    {
        _leftExpression = left;
        _rightExpression = right;
    }

    public int Interpret()
    {
        return _leftExpression.Interpret() + _rightExpression.Interpret();
    }
}
```

### SubtractExpression.cs:

```csharp
public class SubtractExpression : IExpression
{
    private readonly IExpression _leftExpression;
    private readonly IExpression _rightExpression;

    public SubtractExpression(IExpression left, IExpression right)
    {
        _leftExpression = left;
        _rightExpression = right;
    }

    public int Interpret()
    {
        return _leftExpression.Interpret() - _rightExpression.Interpret();
    }
}
```

### ExpressionParser.cs:

This utility class will convert a string like "5 + 3 - 2" into a tree of expressions.

```csharp
using System;
using System.Collections.Generic;

public class ExpressionParser
{
    public IExpression Parse(string input)
    {
        var tokens = input.Split(' ');
        var stack = new Stack<IExpression>();

        for (int i = 0; i < tokens.Length; i++)
        {
            switch (tokens[i])
            {
                case "+":
                    var leftAdd = stack.Pop();
                    var rightAdd = new NumberExpression(Convert.ToInt32(tokens[++i]));
                    stack.Push(new AddExpression(leftAdd, rightAdd));
                    break;

                case "-":
                    var leftSub = stack.Pop();
                    var rightSub = new NumberExpression(Convert.ToInt32(tokens[++i]));
                    stack.Push(new SubtractExpression(leftSub, rightSub));
                    break;

                default:
                    stack.Push(new NumberExpression(Convert.ToInt32(tokens[i])));
                    break;
            }
        }

        return stack.Pop();
    }
}
```

### Program.cs:

```csharp
class Program
{
    static void Main(string[] args)
    {
        string input = "5 + 3 - 2";
        var parser = new ExpressionParser();
        var expression = parser.Parse(input);

        Console.WriteLine($"{input} = {expression.Interpret()}");
    }
}
```

This demo will evaluate the expression "5 + 3 - 2" and print "6".
