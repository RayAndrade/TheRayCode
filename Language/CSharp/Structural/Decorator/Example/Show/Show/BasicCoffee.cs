namespace Show
{
    public class BasicCoffee: CoffeeComponent
    {
        public override string GetDescription()
        {
            return "Basic Coffee";
        }

        public override double GetCost()
        {
            return 1.00; // base price
        }
    }
}