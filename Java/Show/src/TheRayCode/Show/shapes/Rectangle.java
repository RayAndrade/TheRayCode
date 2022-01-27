package TheRayCode.Show.shapes;

public class Rectangle extends Shape {
    public int width;
    public int height;
    public Rectangle() {
    }
    public Rectangle(Rectangle target) {
        super(target);
        if (target != null) {
            this.width = target.width;
            this.height = target.height;
        }
    }

    @Override
    public Shape clone() {
        return new Rectangle(this);
    }
    public boolean equals(Object object) {
        if (!(object instanceof Rectangle) || !super.equals(object)) return false;
        Rectangle shape = (Rectangle) object;
        return shape.width == width && shape.height == height;
    }
}
