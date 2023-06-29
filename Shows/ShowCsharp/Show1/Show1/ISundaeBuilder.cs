namespace Show1
{
    public interface ISundaeBuilder
    {
        void BuildBaseFlavor();
        void BuildToppings();
        void BuildSauce();
        Sundae GetSundae();
    }
}