namespace Show
{
    public class LightsDecorator: TreeDecorator
    {
        public LightsDecorator(ChristmasTree tree) : base(tree)
        {
        }
        public override string Decorate()
        {
            return base.Decorate() + DecorateWithLights();
        }

        private string DecorateWithLights()
        {
            return " with Lights";
        }
    }
}