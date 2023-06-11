public class Dessert {
    private final String name;
    private final int sugar;  // grams
    private final int butter; // grams
    private final boolean isBaked;

    public Dessert(String name, int sugar, int butter, boolean isBaked) {
        this.name = name;
        this.sugar = sugar;
        this.butter = butter;
        this.isBaked = isBaked;
    }
    @Override
    public String toString() {
        return "Dessert{" +
                "name='" + name + '\'' +
                ", sugar=" + sugar +
                ", butter=" + butter +
                ", isBaked=" + isBaked +
                '}';
    }
}
