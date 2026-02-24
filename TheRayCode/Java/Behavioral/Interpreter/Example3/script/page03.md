[home](./page01.md) | [back](./page02.md) | [next](./page04.md)

So take care of the error we creat the missing class
```
InterpreterContext
```
we add to the the top, we are going to need
```
import java.util.HashMap;
import java.util.Map;
```
the code for **InterpreterContext** is

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



[page 4](./page04.md)
