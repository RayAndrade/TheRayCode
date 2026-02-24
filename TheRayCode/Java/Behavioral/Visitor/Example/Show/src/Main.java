public class Main {
    public static void main(String[] args) {

        Element[] elements = new Element[]{
                new TextElement("Hello"),
                new ImageElement("world.jpg")
        };

        ElementPrinter printer = new ElementPrinter();
        for (Element element : elements) {
            element.accept(printer);
        }

    }
}