public class WhippedCream extends CondimentDecorator{
    Beverage beverage;

    public WhippedCream(Beverage beverage) {
        this.beverage = beverage;
    }

    @Override
    public double cost() {
        return 0.35 + beverage.cost();
    }

    @Override
    public String getDescription() {
        return beverage.getDescription() + ", Whipped Cream";
    }
}
