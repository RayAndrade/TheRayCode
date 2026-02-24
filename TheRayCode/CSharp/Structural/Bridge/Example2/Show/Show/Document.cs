namespace Show
{
    public class Document
    {
        private Printer printer;

        public Document(Printer printer)
        {
            this.printer = printer;
        }

        public void Print(string content)
        {
            printer.Print(content);
        }

    }
}