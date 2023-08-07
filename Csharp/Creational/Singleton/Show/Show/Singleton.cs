using System;

namespace Show
{
    public sealed class Singleton
    {
        private static readonly object padlock = new object();
        private static Singleton instance = null;
        
        private Singleton() 
        {
            // Initialization code here, if needed
        }

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