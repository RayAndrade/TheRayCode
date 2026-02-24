import java.util.ArrayList;
import java.util.List;

public class Inventory {
    private List<Item> items = new ArrayList<>();

    public void addItem(String itemName) {
        items.add(new Item(itemName));
    }

    public Iterator createIterator() {
        return new InventoryIterator(items);
    }
}
