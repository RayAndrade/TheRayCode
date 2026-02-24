public class Character {
    private final char value;

    public Character(char value) {
        this.value = value;
    }

    public void print(Style style) {
        System.out.println("Character: " + value + ", Style: " + style);
    }
}
