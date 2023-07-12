namespace Show
{
    public class Animal
    {
        private ICommunicationStrategy _strategy;

        public Animal(ICommunicationStrategy strategy)
        {
            _strategy = strategy;
        }

        public void SetStrategy(ICommunicationStrategy strategy)
        {
            _strategy = strategy;
        }

        public void Communicate()
        {
            _strategy.Communicate();
        }
    }
}