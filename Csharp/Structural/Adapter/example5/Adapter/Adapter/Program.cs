namespace Adapter
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            // Create an instance of FileLogger (Adaptee)
            FileLogger fileLogger = new FileLogger();
        
            // Create an instance of LoggerAdapter (Adapter)
            ILogger logger = new LoggerAdapter(fileLogger);

            // Create an instance of Client with ILogger interface
            Client client = new Client(logger);
            client.DoWork();
        }
    }
}