// Press Shift twice to open the Search Everywhere dialog and type `show whitespaces`,
// then press Enter. You can now see whitespace characters in your code.
public class Main {
    public static void main(String[] args) {
        DessertFactory dessertFactory = new DessertFactory();

        Dessert dessert1 = dessertFactory.getDessert("Cake");
        dessert1.prepare();

        Dessert dessert2 = dessertFactory.getDessert("IceCream");
        dessert2.prepare();
    }
}