namespace Show1
{
    public class Director
    {
        private IPizzaBuilder _pizzaBuilder;
        
        public Director(IPizzaBuilder pizzaBuilder)
        {
            this._pizzaBuilder = pizzaBuilder;
        }
        
        public void makePizza()
        {
            this._pizzaBuilder.BuildDough();
            this._pizzaBuilder.BuildSauce();
            this._pizzaBuilder.BuildTopping();
        }
    }
}