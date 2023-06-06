namespace Show
{
    public class Director : IPizzaBuilder
    {
        private IPizzaBuilder _pizzaBuilder;
        
        public Director(IPizzaBuilder pizzaBuilder) {  }
        
        
        public void BuildDough()
        {
            throw new System.NotImplementedException();
        }

        public void BuildSauce()
        {
            throw new System.NotImplementedException();
        }

        public void BuildTopping()
        {
            throw new System.NotImplementedException();
        }

        public Pizza GetPizza()
        {
            throw new System.NotImplementedException();
        }
    }
}