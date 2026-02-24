[home](./page01.md) | [back](./page05.md) | [next](./page07.md)

And now let's create the
```
InterpreterClient
```
It has code
```
private InterpreterContext context;

public InterpreterClient(InterpreterContext context) {
    this.context = context;
}

public boolean interpret(String input) {
    Expression expression = parseInputToExpression(input);
    return expression.interpret(context);
}

private Expression parseInputToExpression(String input) {
       // For simplicity, assuming input is always "clean your room"
    return new CleanRoomExpression(input);
}
```

[page 7](./page07.md)
