namespace Show
{
    public class IcingDecorator: CakeDecorator
    {
        public IcingDecorator(CakeComponent cakeComponent) : base(cakeComponent)
        {
        }
        public override string Description => base.Description + ", with Icing";

        public override double Cost => base.Cost + 2.00; // additional cost for icing
    }
}