namespace Show
{
    public class SandwichMaker
    {
        private ISandwichBuilder builder;

        public SandwichMaker(ISandwichBuilder builder)
        {
            this.builder = builder;
        }

        public void MakeSandwich()
        {
            builder.BuildBread();
            builder.BuildMeat();
            builder.BuildCheese();
            builder.BuildVegetables();
        }
    }
}