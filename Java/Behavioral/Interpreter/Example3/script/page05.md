[home](./page01.md) | [back](./page04.md) | [next](./page06.md)

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
