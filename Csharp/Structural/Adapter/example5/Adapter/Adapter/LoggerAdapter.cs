using System;

namespace Adapter
{
    public class LoggerAdapter: ILogger
    {
        private FileLogger _fileLogger;

        public LoggerAdapter(FileLogger fileLogger)
        {
            _fileLogger = fileLogger;
        }

        public void Log(string message)
        {
            // Logic to log message to file.
            Console.WriteLine($"FileLogger: Logging message to file: {message}");
        }
    }
}