namespace Show2
{
    public class PizzaChef
    {
        private IPizzaBuilder pizzaBuilder;

        public void SetPizzaBuilder(IPizzaBuilder builder)
        {
            pizzaBuilder = builder;
        }

        public Pizza BuildPizza()
        {
            pizzaBuilder.BuildCrust();
            pizzaBuilder.BuildSauce();
            pizzaBuilder.BuildCheese();
            pizzaBuilder.BuildToppings();
            return pizzaBuilder.GetPizza();
        }
    }
}