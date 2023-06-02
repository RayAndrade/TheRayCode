using System;

namespace Show
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            ShapeFactory shapeFactory = new ShapeFactory();
            ColorFactory colorFactory = new ColorFactory();
            
            Circle circle = shapeFactory.GetData((int)ShapeType.Circle).DataItem as Circle;
            circle.GetInfo();
            
            Red red = colorFactory.GetData((int)ColorType.Red).DataItem as Red;
            red.GetInfo();
        }
    }
}