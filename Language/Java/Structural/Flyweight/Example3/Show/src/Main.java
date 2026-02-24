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