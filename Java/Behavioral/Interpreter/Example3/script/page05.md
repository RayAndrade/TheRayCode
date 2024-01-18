[home](./page01.md) | [back](./page04.md) | [next](./page06.md)

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





Next we create the
```
InterpreterContext
```
**class**

we are going to need
```
import java.util.HashMap;
import java.util.Map;
```
with the following code
```
private Map<String, String> translationMap;

public InterpreterContext() {
    translationMap = new HashMap<>();
    translationMap.put("clean your room", "CLEAN_ROOM");
    // Add more translations as needed
}

public String getTranslation(String input) {
    return translationMap.getOrDefault(input.toLowerCase(), "UNKNOWN");
}
```

This class holds the information that is global to the interpreter.

[page 6](./page06.md)
