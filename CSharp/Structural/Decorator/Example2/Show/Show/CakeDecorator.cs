namespace Show
{
    public abstract class CakeDecorator : CakeComponent
    {
        protected CakeComponent cakeComponent;

        public CakeDecorator(CakeComponent cakeComponent)
        {
            this.cakeComponent = cakeComponent;
        }

        public override string Description => cakeComponent.Description;

        public override double Cost => cakeComponent.Cost;
    }
}