namespace Adapter
{
    public class Client
    {
        private ILogger _logger;

        public Client(ILogger logger)
        {
            _logger = logger;
        }

        public void DoWork()
        {
            // Some logic here...
            _logger.Log("This is a log message.");
        }
    }
}