[up](../README.md)[script]()

For the Visitor design pattern, I'll provide a simplified example that aligns with the descriptions from the "Design Patterns" book by the Gang of Four (GoF). The Visitor pattern allows you to add new operations to existing object structures without modifying their classes. It's particularly useful for operations across a collection of different types of objects.

In this example, let's consider a document structure with two types of elements: `TextElement` and `ImageElement`. We'll implement a Visitor that can `print` details of these elements.

### Step 1: Element Interface

**Element.java**
```java
public interface Element {
    void accept(Visitor visitor);
}
```
This interface declares an `accept` method for accepting a visitor. Each concrete element class implements this interface.

### Step 2: Concrete Element Classes

**TextElement.java**
```java
public class TextElement implements Element {
    private String text;

    public TextElement(String text) {
        this.text = text;
    }

    public String getText() {
        return text;
    }

    @Override
    public void accept(Visitor visitor) {
        visitor.visit(this);
    }
}
```

**ImageElement.java**
```java
public class ImageElement implements Element {
    private String imageName;

    public ImageElement(String imageName) {
        this.imageName = imageName;
    }

    public String getImageName() {
        return imageName;
    }

    @Override
    public void accept(Visitor visitor) {
        visitor.visit(this);
    }
}
```
These classes represent different types of elements in a document. Each has a unique property (`text` for `TextElement` and `imageName` for `ImageElement`) and implements the `accept` method to allow a visitor to visit it.

### Step 3: Visitor Interface

**Visitor.java**
```java
public interface Visitor {
    void visit(TextElement textElement);
    void visit(ImageElement imageElement);
}
```
This interface declares a visit method for each type of element. Concrete visitors will implement this interface to perform specific actions on each element type.

### Step 4: Concrete Visitor

**ElementPrinter.java**
```java
public class ElementPrinter implements Visitor {

    @Override
    public void visit(TextElement textElement) {
        System.out.println("Text: " + textElement.getText());
    }

    @Override
    public void visit(ImageElement imageElement) {
        System.out.println("Image: " + imageElement.getImageName());
    }
}
```
This concrete visitor implements the `visit` methods to print details of each element.

### Step 5: Main Class

**Main.java**
```java
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
```
In the `Main` class, we create an array of `Element` objects, instantiate our `ElementPrinter` visitor, and iterate over the elements, allowing the visitor to visit each one.

### Order of Creation
1. **Element.java**: Define the element interface.
2. **Visitor.java**: Define the visitor interface.
3. **TextElement.java** and **ImageElement.java**: Implement the concrete elements.
4. **ElementPrinter.java**: Implement the concrete visitor.
5. **Main.java**: Demonstrate the usage of the pattern.

### Expected Output When Running the Code
When you run `Main.java`, the output will be:
```
Text: Hello
Image: world.jpg
```

This example demonstrates the Visitor pattern by allowing you to add a new operation (`print`) without modifying the existing element classes. Visitors can be extended to implement other operations, like saving, editing, or rendering elements, providing great flexibility.
