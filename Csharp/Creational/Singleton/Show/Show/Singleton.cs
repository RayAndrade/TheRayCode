using System;

namespace Show
{
    public sealed class Singleton
    {
        private static readonly object padlock = new object();
        private static Singleton instance = null;

        // Private constructor ensures that no instances can be created from outside this class
        private Singleton()
        {
            // Initialization code here, if needed
        }

        // Public method to access the single instance
        public static Singleton Instance
        {
            get
            {
                lock (padlock)
                {
                    if (instance == null)
                    {
                        instance = new Singleton();
                    }

                    return instance;
                }
            }
        }
        // Example method to demonstrate functionality
        public void ShowMessage(string message)
        {
            Console.WriteLine($"Singleton says: {message}");
        }
    }
}