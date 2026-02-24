using System;

namespace Show
{
    public class HighlanderSingleton
    {
        // The single instance of Highlander
        private static HighlanderSingleton _instance;

        // Lock object for thread safety
        private static readonly object _lock = new object();

        // Private constructor to prevent direct instantiation
        private HighlanderSingleton()
        {
            // Initialization code here (if any)
        }

        // Public static method to get the instance
        public static HighlanderSingleton Instance
        {
            get
            {
                lock (_lock)
                {
                    if (_instance == null)
                    {
                        _instance = new HighlanderSingleton();
                    }
                    return _instance;
                }
            }
        }

        // Example method
        public void SayCatchphrase()
        {
            Console.WriteLine("There can only be one!");
        }
    }
}