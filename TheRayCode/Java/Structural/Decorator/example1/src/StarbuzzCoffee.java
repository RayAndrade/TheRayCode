public class StarbuzzCoffee {
    public static void main(String args[]) {
        Beverage beverage = new Espresso();
        System.out.println(beverage.getDescription() + " $" + beverage.cost());

        Beverage beverage2 = new HouseBlend();
        beverage2 = new Milk(beverage2);
        beverage2 = new Sugar(beverage2);
        System.out.println(beverage2.getDescription() + " $" + beverage2.cost());

        Beverage beverage3 = new Espresso();
        beverage3 = new WhippedCream(beverage3);
        System.out.println(beverage3.getDescription() + " $" + beverage3.cost());
    }

}
