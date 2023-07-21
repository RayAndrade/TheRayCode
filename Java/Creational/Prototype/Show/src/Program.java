public class Program {
    public static void main(String[] args) {
        DessertFactory dessertFactory = new DessertFactory();

        Dessert dessert1 = dessertFactory.getDessert("pie");
        dessert1.prepare();

        Dessert dessert2 = dessertFactory.getDessert("sundae");
        dessert2.prepare();
     }
}
