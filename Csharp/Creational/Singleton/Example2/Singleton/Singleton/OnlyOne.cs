using System;

namespace Singleton
{
    public sealed class OnlyOne
    {
        // Static variable to hold the unique instance of the OnlyOne
        private static readonly Lazy<OnlyOne> instance = new Lazy<OnlyOne>(() => new OnlyOne());

        // Private constructor to prevent external instantiation
        private OnlyOne()
        {
            Console.WriteLine("OnlyOne instance created.");
        }

        // Public method to provide access to the instance
        public static OnlyOne Instance
        {
            get
            {
                return instance.Value;
            }
        }

        // Demo method to showcase the OnlyOne in action
        public void LogMessage(string message)
        {
            Console.WriteLine($"OnlyOne says: {message}");
        }
    }
}