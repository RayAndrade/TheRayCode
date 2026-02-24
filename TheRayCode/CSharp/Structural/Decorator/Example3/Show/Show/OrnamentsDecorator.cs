namespace Show
{
    public class OrnamentsDecorator: TreeDecorator
    {
        public OrnamentsDecorator(ChristmasTree tree) : base(tree)
        {
        }
        public override string Decorate()
        {
            return base.Decorate() + DecorateWithOrnaments();
        }

        private string DecorateWithOrnaments()
        {
            return " with Ornaments";
        }
    }
}