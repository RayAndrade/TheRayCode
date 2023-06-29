namespace Show2
{
    public interface IPizzaBuilder
    {
        void BuildCrust();
        void BuildSauce();
        void BuildCheese();
        void BuildToppings();
        Pizza GetPizza();
    }
}