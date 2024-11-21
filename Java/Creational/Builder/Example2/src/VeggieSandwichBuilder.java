public class VeggieSandwichBuilder implements SandwichBuilder{
    private Sandwich sandwich = new Sandwich();

    @Override
    public void buildBread() {
        sandwich.setBread("Whole Wheat Bread");
    }

    @Override
    public void buildProtein() {
        sandwich.setProtein("Tofu");
    }

    @Override
    public void buildCondiments() {

    }

    @Override
    public void buildVeggies() {

    }

    @Override
    public Sandwich getSandwich() {
        return null;
    }
}
