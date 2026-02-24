namespace Show
{
    public class SprinklesDecorator: CakeDecorator
    {
        public SprinklesDecorator(CakeComponent cakeComponent) : base(cakeComponent)
        {
        }
        public override string Description => base.Description + ", with Sprinkles";

        public override double Cost => base.Cost + 1.50; // additional cost for sprinkles
        
    }
}