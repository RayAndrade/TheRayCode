namespace Show
{
    public class FruitDecorator: CakeDecorator
    {
        public FruitDecorator(CakeComponent cakeComponent) : base(cakeComponent)
        {
        }
        public override string Description => base.Description + ", with Fruit Topping";

        public override double Cost => base.Cost + 2.50; // additional cost for fruit topping
    }
}