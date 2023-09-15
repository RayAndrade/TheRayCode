**OnlyOne.cs**

```
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
```
**Program.cs**

```
using System;

namespace Singleton
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            // Try to create two instances of the OnlyOne. They should point to the same reference
            OnlyOne o1 = OnlyOne.Instance;
            OnlyOne o2 = OnlyOne.Instance;

            if (o1 == o2)
            {
                Console.WriteLine("Both instances are the same.");
            }

            // Use the OnlyOne's method
            o1.LogMessage("Hello from the Singleton pattern!");

            Console.ReadLine();
        }
    }
}
```
