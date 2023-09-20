The Interpreter design pattern is used to provide a way to evaluate language grammar for particular languages. Here's a simple example using the pattern to interpret basic arithmetic expressions:

[code](Interpreter/src/)

1. **`Expression.java`** - This is the abstract expression class that declares an `interpret` method.

```java
// Expression.java
public interface Expression {
    int interpret();
}
```

2. **`NumberExpression.java`** - This is a terminal expression that implements the `Expression` interface for numbers.

```java
// NumberExpression.java
public class NumberExpression implements Expression {

    private int number;

    public NumberExpression(int number) {
        this.number = number;
    }

    @Override
    public int interpret() {
        return this.number;
    }
}
```

3. **`AddExpression.java`** - This is a non-terminal expression that implements the `Expression` interface for the addition operation.

```java
// AddExpression.java
public class AddExpression implements Expression {

    private Expression firstExpression;
    private Expression secondExpression;

    public AddExpression(Expression firstExpression, Expression secondExpression) {
        this.firstExpression = firstExpression;
        this.secondExpression = secondExpression;
    }

    @Override
    public int interpret() {
        return this.firstExpression.interpret() + this.secondExpression.interpret();
    }
}
```

4. **`SubtractExpression.java`** - This is a non-terminal expression for the subtraction operation.

```java
// SubtractExpression.java
public class SubtractExpression implements Expression {

    private Expression firstExpression;
    private Expression secondExpression;

    public SubtractExpression(Expression firstExpression, Expression secondExpression) {
        this.firstExpression = firstExpression;
        this.secondExpression = secondExpression;
    }

    @Override
    public int interpret() {
        return this.firstExpression.interpret() - this.secondExpression.interpret();
    }
}
```

5. **`Demo.java`** - This is the client class to demonstrate the Interpreter pattern.

```java
// Demo.java
public class Demo {

    // Typically, there would be a parser here to convert a string expression into the
    // Expression tree. For simplicity, we'll hand-code the tree.
    public static void main(String[] args) {
        Expression addExpression = new AddExpression(new NumberExpression(5), new NumberExpression(3));
        System.out.println("Result of 5 + 3: " + addExpression.interpret());

        Expression subtractExpression = new SubtractExpression(new NumberExpression(5), new NumberExpression(3));
        System.out.println("Result of 5 - 3: " + subtractExpression.interpret());
    }
}
```

**Order of creating classes:**
1. `Expression.java` - Define the interface for our expression tree.
2. `NumberExpression.java` - Define how numbers will be interpreted.
3. `AddExpression.java` and `SubtractExpression.java` - Define non-terminal expressions for addition and subtraction.
4. `Demo.java` - Use the above expressions to demonstrate the pattern.

**Explanation:**
- `Expression` is an interface with the `interpret` method that all terminal and non-terminal expressions will implement.
  
- `NumberExpression` is a terminal expression. It simply returns its number value when `interpret` is called.

- `AddExpression` and `SubtractExpression` are non-terminal expressions. They contain two expressions and when `interpret` is called, they perform their respective operations on the results of the `interpret` calls of their contained expressions.

- `Demo` constructs an expression tree and then evaluates it using the `interpret` method. In a real-world scenario, you'd probably have a parser that converts a string representation of an expression into this tree.


run code:
```
Result of 5 + 3: 8
Result of 5 - 3: 2
```
