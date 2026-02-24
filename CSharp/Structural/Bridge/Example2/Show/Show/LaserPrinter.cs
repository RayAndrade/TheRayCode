using System;

namespace Show
{
    public class LaserPrinter : Printer
    {
        public void Print(string content)
        {
            Console.WriteLine("Laser Printer: " + content);
        }
    }
}