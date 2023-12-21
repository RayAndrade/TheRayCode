namespace Show
{
    public class Animal
    {
        private IRiverCrossingStrategy _strategy;

        public Animal(IRiverCrossingStrategy strategy)
        {
            _strategy = strategy;
        }

        public void SetStrategy(IRiverCrossingStrategy strategy)
        {
            _strategy = strategy;
        }

        public string ExecuteStrategy()
        {
            return _strategy.CrossRiver();
        }
    }
}