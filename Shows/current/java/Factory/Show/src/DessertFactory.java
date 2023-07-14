public class DessertFactory {
    public Dessert getDessert(String dessertType) {
        if (dessertType == null) {
            return null;
        }
        if (dessertType.equalsIgnoreCase("CAKE")) {
            return new Cake();
        } else if (dessertType.equalsIgnoreCase("ICECREAM")) {
            return new IceCream();
        }
        return null;
    }
}
