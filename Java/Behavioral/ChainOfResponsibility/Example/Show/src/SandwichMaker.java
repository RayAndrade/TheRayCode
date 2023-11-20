public abstract class SandwichMaker {
    protected SandwichMaker nextMaker;

    public void setNextMaker(SandwichMaker nextMaker) {
        this.nextMaker = nextMaker;
    }

    public abstract void addIngredient(String ingredient);
}
