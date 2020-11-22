package TheRayCode.Show;

import TheRayCode.Show.editor.ImageEditor;
import TheRayCode.Show.shapes.Circle;
import TheRayCode.Show.shapes.CompoundShape;
import TheRayCode.Show.shapes.Dot;
import TheRayCode.Show.shapes.Rectangle;
import java.awt.*;

public class Demo {
    public static void main(String[] args) {
        System.out.println("The Ray Code is AWESOME!!!");
        ImageEditor editor = new ImageEditor();

        editor.loadShapes(
                new Circle(10, 10, Color.BLUE),

                new CompoundShape(
                        new Circle(110, 110, Color.RED),
                        new Dot(160, 160, Color.RED)
                ),

                new CompoundShape(
                        new Rectangle(250, 250, Color.GREEN),
                        new Dot(240, 240, Color.GREEN),
                        new Dot(240, 360, Color.GREEN),
                        new Dot(360, 360, Color.GREEN),
                        new Dot(360, 240, Color.GREEN)
                )
        );

    }
}
