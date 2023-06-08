package TheRayCode.Builder;

public class DessertBuilder {
    private String name;
    private int sugar;
    private int butter;
    private boolean isBaked;

    public DessertBuilder setName(String name) {
        this.name = name;
        return this;
    }

    public DessertBuilder setSugar(int sugar) {
        this.sugar = sugar;
        return this;
    }

    public DessertBuilder setButter(int butter) {
        this.butter = butter;
        return this;
    }

    public DessertBuilder setBaked(boolean isBaked) {
        this.isBaked = isBaked;
        return this;
    }

    public Dessert build() {
        return new Dessert(name, sugar, butter, isBaked);
    }
}
