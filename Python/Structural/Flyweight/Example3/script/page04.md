[home](./page01.md) | [back](./page03.md) | [next](./page05.md)

Create class **CharacterFactory**
```
CharacterFactory
```
at the top we add
```
import java.util.HashMap;
import java.util.Map;
```
**1**
```
private static final Map<Character, Character> charMap = new HashMap<>();
```
**2**
````
public static Character getCharacter(char ch) {
    // Autoboxing will convert 'ch' from 'char' to 'Character'
    Character character = charMap.get(ch);
    if (character == null) {
        character = new Character(ch);
        charMap.put(ch, character); // Autoboxing handles the conversion here
    }
    return character;
}
```


[page 5](./page05.md)
