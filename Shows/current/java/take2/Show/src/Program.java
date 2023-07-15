public class Program {
    public static void main(String[] args) {
        DessertFactory dessertFactory = new DessertFactory();

        Dessert dessert1 = dessertFactory.getDessert("ICECREAM");
        dessert1.prepare();

        Dessert dessert2 = dessertFactory.getDessert("CAKE");
        dessert2.prepare();
    }
}
