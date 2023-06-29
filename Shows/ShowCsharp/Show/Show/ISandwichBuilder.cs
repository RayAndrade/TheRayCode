namespace Show
{
    public interface ISandwichBuilder
    {
        void BuildBread();
        void BuildMeat();
        void BuildCheese();
        void BuildVegetables();
        Sandwich GetSandwich();
    }
}