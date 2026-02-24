import java.util.HashMap;
import java.util.Map;
public class CharacterFactory {
    private static final Map<java.lang.Character, Character> charMap = new HashMap<>();

    public static Character getCharacter(char ch) {
        // Autoboxing will convert 'ch' from 'char' to 'Character'
        Character character = charMap.get(ch);
        if (character == null) {
            character = new Character(ch);
            charMap.put(ch, character); // Autoboxing handles the conversion here
        }
        return character;
    }
}
