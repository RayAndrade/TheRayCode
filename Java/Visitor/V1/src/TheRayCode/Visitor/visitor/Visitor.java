package TheRayCode.Visitor.visitor;

import TheRayCode.Visitor.shapes.Dot;
import TheRayCode.Visitor.shapes.Circle;
import TheRayCode.Visitor.shapes.Rectangle;
import TheRayCode.Visitor.shapes.CompoundShape;


public interface Visitor {

    String visitDot(Dot dot);

    String visitCircle(Circle circle);

    String visitRectangle(Rectangle rectangle);

    String visitCompoundGraphic(CompoundShape cg);
}
