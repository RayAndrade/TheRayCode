using System;

namespace Singleton
{
    public sealed class Singleton
    {
        // Static variable to hold the unique instance of the Singleton
        private static readonly Lazy<Singleton> instance = new Lazy<Singleton>(() => new Singleton());

        // Private constructor to prevent external instantiation
        private Singleton()
        {
            Console.WriteLine("Singleton instance created.");
        }

        // Public method to provide access to the instance
        public static Singleton Instance
        {
            get
            {
                return instance.Value;
            }
        }

        // Demo method to showcase the Singleton in action
        public void LogMessage(string message)
        {
            Console.WriteLine($"Singleton says: {message}");
        }
    }
}