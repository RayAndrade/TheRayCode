package TheRayCode.Visitor.shapes;

import TheRayCode.Visitor.visitor.Visitor;

public interface Shape {
    void move(int x, int y);
    void draw();
    String accept(Visitor visitor);
}
