import java.util.HashMap;
import java.util.Map;

public class ShapeFactory {
    private static final Map<String, Color> colorMap = new HashMap<>();

    public static Color getColor(String color) {
        colorMap.putIfAbsent(color, new Color(color));
        return colorMap.get(color);
    }
}
