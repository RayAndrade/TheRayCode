[home](./page01.md) | [back](./page03.md) | [next](./page05.md)

Next we create the
```
AndExpression
```
**class** and it
```
 implements Expression
```
at the top we add
```
private Expression expr1;
private Expression expr2;

public AndExpression(Expression expr1, Expression expr2) {
    this.expr1 = expr1;
    this.expr2 = expr2;
}
```
And for **interpret** we have
```
return expr1.interpret(context) && expr2.interpret(context);
```

[page 5](./page05.md)
