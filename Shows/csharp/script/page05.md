[home](./page01.md) | [back](./page04.md) | [next](./page06.md)

Create class
```
ShapeFactory
```
with code:
```
private static final Map<String, Color> colorMap = new HashMap<>();
```
import
```
import java.util.HashMap;
import java.util.Map;
```
add code:
```
public static Color getColor(String color) {
   colorMap.putIfAbsent(color, new Color(color));
   return colorMap.get(color);
}
```


[page 6](./page06.md)
