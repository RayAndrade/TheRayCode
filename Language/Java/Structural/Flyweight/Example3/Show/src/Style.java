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
