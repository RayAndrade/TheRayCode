using System;

namespace Show
{
    public class RedDrawAPI : IDrawAPI
    {
        public void DrawCircle(int radius, int x, int y)
        {
            Console.WriteLine($"Drawing Circle[Color: red, radius: {radius}, x: {x}, y: {y}]");
        }

        public void DrawRectangle(int width, int height, int x, int y)
        {
            Console.WriteLine($"Drawing Rectangle[Color: red, width: {width}, height: {height}, x: {x}, y: {y}]");
        }
    }
}