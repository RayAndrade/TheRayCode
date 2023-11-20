namespace Show
{
    public class MilkDecorator: CoffeeDecorator
    {
        public MilkDecorator(CoffeeComponent coffeeComponent) : base(coffeeComponent)
        {
        }
        public override string GetDescription()
        {
            return base.GetDescription() + ", Milk";
        }

        public override double GetCost()
        {
            return base.GetCost() + 0.50;
        }
    }
}