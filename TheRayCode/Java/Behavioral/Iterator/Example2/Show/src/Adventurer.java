public class Adventurer {
    private String name;
    private Inventory inventory;

    public Adventurer(String name) {
        this.name = name;
        this.inventory = new Inventory();
    }

    public void addItem(String itemName) {
        inventory.addItem(itemName);
    }

    public Iterator getInventoryIterator() {
        return inventory.createIterator();
    }

    public String getName() {
        return name;
    }
}
