using System;

namespace Singleton
{
    public sealed class Singleton
    {
        // Static variable which holds the single instance of the class
        private static readonly Singleton instance = new Singleton();

        // Private constructor to prevent instance creation from outside
        private Singleton() 
        {
            Console.WriteLine("Singleton instance created!");
        }

        // Public method to provide access to the instance
        public static Singleton Instance
        {
            get 
            {
                return instance;
            }
        }

        public void LogMessage(string message)
        {
            Console.WriteLine("Singleton instance says: " + message);
        }
    }
}