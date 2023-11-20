namespace Show
{
    public class TreeDecorator: ChristmasTree
    {
        protected ChristmasTree _tree;

        public TreeDecorator(ChristmasTree tree)
        {
            _tree = tree;
        }
        
        public override string Decorate()
        {
            return _tree.Decorate();
        }
    }
}