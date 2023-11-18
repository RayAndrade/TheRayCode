namespace Show
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            Printer inkjetPrinter = new InkjetPrinter();
            
            Document document = new Document(inkjetPrinter);

            document.Print("Hello, world!"); // Prints using the inkjet printer

            Printer laserPrinter = new LaserPrinter();
            document = new Document(laserPrinter);

            document.Print("Hello, world again!"); // Prints using the laser printer
        }
    }
}