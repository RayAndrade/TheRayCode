using System;

namespace Adapter
{
    public class FileLogger
    {
        public void LogMessageToFile(string message)
        {
            // Logic to log message to file.
            Console.WriteLine($"FileLogger: Logging message to file: {message}");
        }

    }
}