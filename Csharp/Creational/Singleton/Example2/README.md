
This code demonstrates the implementation of the Singleton pattern in C#. Here's a breakdown of the code:

1. **OnlyOne.cs**

   - The `OnlyOne` class is defined as `sealed` to prevent subclassing, which ensures no derived class can create more instances.
   
   - A static variable `instance` holds the unique instance of the `OnlyOne` class. The `Lazy<T>` type is used to ensure that the instance is created lazily, i.e., when it's actually accessed. This also ensures thread safety without the need for locks or other synchronization mechanisms.
   
   - The private constructor ensures that no other class can instantiate the `OnlyOne` class directly. When the instance is created, it writes a message to the console to indicate that the instance was created.
   
   - The public `Instance` property provides access to the unique instance of `OnlyOne`.
   
   - A demo method, `LogMessage`, is added to showcase the behavior of the singleton.

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

Program.cs

Two references, o1 and o2, attempt to get the unique instance of OnlyOne. Despite the two calls, only one instance of OnlyOne is created, and both references point to the same instance.

- The program checks if o1 and o2 refer to the same instance and prints a message to the console if they do.

- The LogMessage method of OnlyOne is invoked to display a message.



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

When you run this code, the expected output will be:
```
OnlyOne instance created.
Both instances are the same.
OnlyOne says: Hello from the Singleton pattern!
```
This design pattern ensures that a particular class has only one instance and provides a global point of access to that instance. Singleton is commonly used for objects like configurations, thread pools, or logging services where you want to centralize certain operations or maintain a single state across the application.
