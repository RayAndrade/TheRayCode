namespace Show
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            ISandwichBuilder builder = new SandwichBuilder();
            SandwichMaker maker = new SandwichMaker(builder);
            maker.MakeSandwich();
            Sandwich sandwich = builder.GetSandwich();

            sandwich.Display();
        }
    }
}