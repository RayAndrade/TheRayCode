namespace Show
{
    public class SugarDecorator: CoffeeDecorator
    {
        public SugarDecorator(CoffeeComponent coffeeComponent) : base(coffeeComponent)
        {
        }
        public override string GetDescription()
        {
            return base.GetDescription() + ", Sugar";
        }

        public override double GetCost()
        {
            return base.GetCost() + 0.20; // additional cost for sugar
        }
    }
}