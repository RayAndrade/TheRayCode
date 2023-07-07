namespace Show1
{
    public interface IPizzaBuilder
    {
        void BuildDough();
        void BuildSauce();
        void BuildTopping();
        Pizza GetPizza();
    }
}