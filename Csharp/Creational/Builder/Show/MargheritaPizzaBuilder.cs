namespace Show
{
    public class MargheritaPizzaBuilder : IPizzaBuilder
    {
        private Pizza _pizza = new Pizza();

        public MargheritaPizzaBuilder() {
            this.Reset();
        }

        public void Reset() {
            this._pizza = new Pizza();
        }
        
        public void BuildDough()
        {
            this._pizza.Dough = "Regular";
        }

        public void BuildSauce()
        {
            this._pizza.Sauce = "Tomato";
        }

        public void BuildTopping()
        {
            this._pizza.Topping = "Cheese";
        }

        public Pizza GetPizza()
        {
            Pizza result = this._pizza;
            this.Reset();
            return result;
        }
    }
}