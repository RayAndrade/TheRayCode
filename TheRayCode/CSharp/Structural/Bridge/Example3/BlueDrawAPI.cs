using System;

namespace Show
{
    public class BlueDrawAPI : IDrawAPI
    {
        public void DrawCircle(int radius, int x, int y)
        {
            Console.WriteLine($"Drawing Circle[Color: blue, radius: {radius}, x: {x}, y: {y}]");
        }

        public void DrawRectangle(int width, int height, int x, int y)
        {
            Console.WriteLine($"Drawing Rectangle[Color: blue, width: {width}, height: {height}, x: {x}, y: {y}]");
        }
    }
}