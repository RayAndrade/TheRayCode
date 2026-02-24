public class Circle implements Shape {
    private Color color; // Intrinsic state shared
    private int x, y;    // Extrinsic state unique to each circle

    public Circle(Color color) {
        this.color = color;
    }

    public void setX(int x) {
        this.x = x;
    }

    public void setY(int y) {
        this.y = y;
    }
    @Override
    public void draw() {
        System.out.println("Drawing a " + color.getColor() + " circle at (" + x + "," + y + ")");
    }
}
