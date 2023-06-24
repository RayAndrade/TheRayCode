public class Main {
    public static void main(String[] args) {
        ShapeFactory shapeFactory = new ShapeFactory();

        // Create shapes using the factory
        Shape circle = shapeFactory.createShape("circle");
        Shape rectangle = shapeFactory.createShape("rectangle");

        // Draw the shapes
        circle.draw();
        rectangle.draw();
    }
}