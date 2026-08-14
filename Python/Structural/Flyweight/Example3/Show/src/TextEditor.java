public class TextEditor {
    public void addCharacter(char ch, Style style) {
        Character character = CharacterFactory.getCharacter(ch);
        character.print(style);
    }
}
