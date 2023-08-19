public class Sugar extends CondimentDecorator{

    Beverage beverage;

    public Sugar(Beverage beverage) {
        this.beverage = beverage;
    }

    @Override
    public double cost() {
        return 0.15 + beverage.cost();
    }

    @Override
    public String getDescription() {
        return beverage.getDescription() + ", Sugar";
    }
}
