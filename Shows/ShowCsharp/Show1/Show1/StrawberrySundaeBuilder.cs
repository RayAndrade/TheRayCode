namespace Show1
{
    public class StrawberrySundaeBuilder: ISundaeBuilder
    {
        private Sundae sundae;

        public StrawberrySundaeBuilder()
        {
            sundae = new Sundae();
        }
        
        public void BuildBaseFlavor()
        {
            sundae.SetBaseFlavor("Strawberry");
        }

        public void BuildToppings()
        {
            sundae.SetToppings("Fresh strawberries, cookie crumbs, whipped cream");
        }

        public void BuildSauce()
        {
            sundae.SetSauce("Strawberry sauce");
        }

        public Sundae GetSundae()
        {
            return sundae;
        }
    }
}