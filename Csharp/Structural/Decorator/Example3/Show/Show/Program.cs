using System;

namespace Show
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            ChristmasTree tree = new SimpleChristmasTree();
            tree = new LightsDecorator(tree);
            tree = new OrnamentsDecorator(tree);

            Console.WriteLine(tree.Decorate());
        }
        
        public class SimpleChristmasTree : ChristmasTree
        {
            public override string Decorate()
            {
                return "Christmas tree";
            }
        }
    }
}