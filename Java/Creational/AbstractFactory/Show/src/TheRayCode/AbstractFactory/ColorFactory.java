package TheRayCode.AbstractFactory;

public class ColorFactory extends AbstractFactory{
    @Override
    Color getColor(String color) {
        if(color==null){
            return null;
        }
        if (color.equalsIgnoreCase("RED")){
            return new Red();
        } else if (color.equalsIgnoreCase("BLUE")){
            return new Blue();
        } else if (color.equalsIgnoreCase("GREEN")){
            return new Green();
        }
        return null;
    }

    @Override
    Shape getShape(String shape) {
        return null;
    }
}
