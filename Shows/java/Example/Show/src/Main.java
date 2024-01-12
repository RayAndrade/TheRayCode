public class Main {
    public static void main(String[] args) {

        Circle circle1 = new Circle(ShapeFactory.getColor("Red"));
        circle1.setX(10);
        circle1.setY(20);
        circle1.draw();

        Circle circle2 = new Circle(ShapeFactory.getColor("Blue"));
        circle2.setX(20);
        circle2.setY(30);
        circle2.draw();

        Circle circle3 = new Circle(ShapeFactory.getColor("Red"));
        circle3.setX(30);
        circle3.setY(40);
        circle3.draw();
    }


 }