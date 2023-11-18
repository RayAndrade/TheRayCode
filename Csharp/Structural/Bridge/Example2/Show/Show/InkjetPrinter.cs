using System;

namespace Show
{
    public class InkjetPrinter : Printer
    {
        public void Print(string content)
        {
            Console.WriteLine("Inkjet Printer: " + content);
        }
    }
}