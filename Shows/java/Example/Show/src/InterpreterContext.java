import java.util.HashMap;
import java.util.Map;
public class InterpreterContext {
    private Map<String, String> translationMap;

    public InterpreterContext() {
        translationMap = new HashMap<>();
        translationMap.put("clean your room", "CLEAN_ROOM");
        // Add more translations as needed
    }

    public String getTranslation(String input) {
        return translationMap.getOrDefault(input.toLowerCase(), "UNKNOWN");
    }

}
