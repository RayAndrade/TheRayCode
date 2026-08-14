public class Main {
    public static void main(String[] args) {
        Adventurer adventurer = new Adventurer("Sir Lancelot");

        adventurer.addItem("Sword of Java");
        adventurer.addItem("Shield of Debugging");
        adventurer.addItem("Helmet of IDEs");
        adventurer.addItem("Boots of Compiling");

        Iterator inventoryIterator = adventurer.getInventoryIterator();

        System.out.println(adventurer.getName() + "'s Inventory:");
        while (inventoryIterator.hasNext()) {
            Item item = inventoryIterator.next();
            System.out.println(" - " + item.getName());
        }

        System.out.println("\nSir Lancelot is ready for adventure... but not ready to debug NullPointerExceptions.");
    }
}