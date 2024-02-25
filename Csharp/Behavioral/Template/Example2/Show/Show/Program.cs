namespace Show
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            AbstractClass a = new ConcreteClassA();
            AbstractClass b = new ConcreteClassB();

            // The template method is called.
            a.TemplateMethod();
            b.TemplateMethod();
        }
    }
}