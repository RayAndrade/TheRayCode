namespace Show1
{
    public class SundaeMaker
    {
        private ISundaeBuilder sundaeBuilder;

        public void SetSundaeBuilder(ISundaeBuilder builder)
        {
            sundaeBuilder = builder;
        }

        public Sundae BuildSundae()
        {
            sundaeBuilder.BuildBaseFlavor();
            sundaeBuilder.BuildToppings();
            sundaeBuilder.BuildSauce();
            return sundaeBuilder.GetSundae();
        }
    }
}