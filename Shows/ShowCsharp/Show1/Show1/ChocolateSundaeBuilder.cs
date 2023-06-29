namespace Show1
{
    public class ChocolateSundaeBuilder: ISundaeBuilder
    {
        private Sundae sundae;

        public ChocolateSundaeBuilder()
        {
            sundae = new Sundae();
        }
        
        public void BuildBaseFlavor()
        {
            sundae.SetBaseFlavor("Chocolate");
        }

        public void BuildToppings()
        {
            sundae.SetToppings("Sprinkles, nuts, whipped cream");
        }

        public void BuildSauce()
        {
            sundae.SetSauce("Chocolate sauce");
        }

        public Sundae GetSundae()
        {
            return sundae;
        }
    }
}