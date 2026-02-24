import java.util.ArrayList;
import java.util.List;

public class Product {
    private List<String> parts = new ArrayList<>();

    public void add(String part) {
        parts.add(part);
    }

    public void show() {
        System.out.println("Product parts:");
        for (String part : parts) {
            System.out.println("- " + part);
        }
    }
}
