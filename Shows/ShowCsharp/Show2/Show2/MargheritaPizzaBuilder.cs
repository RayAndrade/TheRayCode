namespace Show2
{
    public class MargheritaPizzaBuilder: IPizzaBuilder
    {
        private Pizza pizza;

        public MargheritaPizzaBuilder()
        {
            pizza = new Pizza();
        }
        
        public void BuildCrust()
        {
            pizza.SetCrust("Thin crust");
        }

        public void BuildSauce()
        {
            pizza.SetSauce("Tomato sauce");
        }

        public void BuildCheese()
        {
            pizza.SetCheese("Mozzarella cheese");
        }

        public void BuildToppings()
        {
            pizza.SetToppings("Fresh basil, sliced tomatoes");
        }

        public Pizza GetPizza()
        {
            return pizza;
        }
    }
}