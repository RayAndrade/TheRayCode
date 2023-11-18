using System;

namespace Show
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            Shape redCircle = new Circle(100, 100, 10, new RedDrawAPI());
            Shape blueRectangle = new Rectangle(50, 60, 10, 20, new BlueDrawAPI());

            redCircle.Draw();
            blueRectangle.Draw();

        }
    }
}