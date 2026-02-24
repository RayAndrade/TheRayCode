namespace Show
{
    public abstract class CoffeeDecorator : CoffeeComponent
    {
        protected CoffeeComponent _coffeeComponent;

        public CoffeeDecorator(CoffeeComponent coffeeComponent)
        {
            _coffeeComponent = coffeeComponent;
        }

        public override string GetDescription()
        {
            return _coffeeComponent.GetDescription();
        }

        public override double GetCost()
        {
            return _coffeeComponent.GetCost();
        }
    }
}