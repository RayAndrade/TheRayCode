[up](../README.md)


Certainly! Let's use a different theme for the Flyweight design pattern demonstration. We'll design a text editor that handles character objects efficiently. In a large document, many characters are repeated, so we can use the Flyweight pattern to share these characters to save memory.

Here's the structure of the project:

1. **Character.java**: Represents the Flyweight in our example. It encapsulates the intrinsic state, which is the character itself.

2. **Style.java**: Represents the extrinsic state that includes style information like font size, bold, italic etc.

3. **CharacterFactory.java**: A factory class for creating and managing the Character Flyweight objects.

4. **TextEditor.java**: Represents the context in which the Characters are used. It will create characters with different styles.

5. **Main.java**: The client code that demonstrates the use of the Flyweight pattern in the text editor.

### Character.java

```java
public class Character {
    private final char value;

    public Character(char value) {
        this.value = value;
    }

    public void print(Style style) {
        System.out.println("Character: " + value + ", Style: " + style);
    }
}
```

### Style.java

```java
public class Style {
    private final boolean bold;
    private final boolean italic;
    private final int fontSize;

    public Style(boolean bold, boolean italic, int fontSize) {
        this.bold = bold;
        this.italic = italic;
        this.fontSize = fontSize;
    }

    @Override
    public String toString() {
        return "[Bold: " + bold + ", Italic: " + italic + ", Font size: " + fontSize + "]";
    }
}
```

### CharacterFactory.java

```java
import java.util.HashMap;
import java.util.Map;

public class CharacterFactory {
    private static final Map<Character, Character> charMap = new HashMap<>();

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
```

### TextEditor.java

```java
public class TextEditor {
    public void addCharacter(char ch, Style style) {
        Character character = CharacterFactory.getCharacter(ch);
        character.print(style);
    }
}
```

### Main.java

```java
public class Main {
    public static void main(String[] args) {
        TextEditor editor = new TextEditor();

        Style style1 = new Style(false, true, 12);
        Style style2 = new Style(true, false, 14);

        editor.addCharacter('A', style1);
        editor.addCharacter('B', style2);
        editor.addCharacter('A', style1);
    }
}
```

### Expected Output in Terminal

When you run the `Main.java`, the output should be something like this:

```
Character: A, Style: [Bold: false, Italic: true, Font size: 12]
Character: B, Style: [Bold: true, Italic: false, Font size: 14]
Character: A, Style: [Bold: false, Italic: true, Font size: 12]
```

### Creation Order in the Project

1. **Character.java**: Define the intrinsic state (character value).
2. **Style.java**: Define the extrinsic state (style properties).
3. **CharacterFactory.java**: Implement the factory to manage Character Flyweights.
4. **TextEditor.java**: Context in which Characters are used with different styles.
5. **Main.java**: Demonstrate the usage of Flyweights in a text editor.

This example demonstrates the Flyweight pattern in the context of a text editor, where character objects are shared, and only their styles (extrinsic states) are unique.
