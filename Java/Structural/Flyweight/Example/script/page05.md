[home](./page01.md) | [back](./page04.md) | [next](./page06.md)

Create class
```
ShapeFactory
```
 This factory class is responsible for creating and managing the Flyweight objects (Color instances, in this case). It ensures that identical objects are shared and not recreated.

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
