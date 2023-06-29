namespace Show2
{
    public class PepperoniPizzaBuilder : IPizzaBuilder
    {
        private Pizza pizza;

        public PepperoniPizzaBuilder()
        {
            pizza = new Pizza();
        }
        
        public void BuildCrust()
        {
            pizza.SetCrust("Thick crust");
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
            pizza.SetToppings("Pepperoni, sliced onions, bell peppers");
        }

        public Pizza GetPizza()
        {
            return pizza;
        }
    }
}