namespace Show
{
    public class JailbreakContext
    {
        private IJailbreakStrategy _strategy;

        public JailbreakContext(IJailbreakStrategy strategy)
        {
            this._strategy = strategy;
        }

        public void SetStrategy(IJailbreakStrategy strategy)
        {
            this._strategy = strategy;
        }

        public string ExecuteStrategy()
        {
            return _strategy.Execute();
        }
    }
}