[up](../README.md)

Let's implement a Singleton pattern in C#. This pattern ensures a class has only one instance and provides a global point of access to it.

### Structure:

1. `Singleton.cs`: This contains the Singleton class which ensures only one instance is created.
2. `Program.cs`: This is the main driver class that demonstrates the Singleton pattern.

### Step 1: Create Singleton class (`Singleton.cs`)

```csharp
// Singleton.cs
using System;

namespace SingletonExample
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
```

**Explanation:**
- The `sealed` keyword ensures that the class cannot be inherited.
- The class maintains a static instance of itself which is lazily instantiated (in this case, we used eager initialization). 
- The private constructor ensures that the class cannot be instantiated from outside.
- The `Instance` property provides a global point of access.

### Step 2: Create the Program class to demonstrate Singleton (`Program.cs`)

```csharp
// Program.cs
using System;

namespace SingletonExample
{
    class Program
    {
        static void Main(string[] args)
        {
            // Trying to get instances of Singleton class
            Singleton singleton1 = Singleton.Instance;
            Singleton singleton2 = Singleton.Instance;

            singleton1.LogMessage("Hello from the first instance!");

            // Verifying that both instances are indeed the same
            if (ReferenceEquals(singleton1, singleton2))
            {
                Console.WriteLine("Both instances are the same!");
            }
            else
            {
                Console.WriteLine("Different instances exist!");
            }
        }
    }
}
```

**Explanation:**
- We obtain the singleton instance using the `Instance` property.
- We call a method (`LogMessage`) from the singleton to verify that it works.
- We then compare two instances of the singleton to confirm that they are indeed the same.

### Order:

1. `Singleton.cs`: This forms the backbone of the pattern. It contains the actual singleton logic.
2. `Program.cs`: After having the singleton class ready, you'd need a client (or driver) code to test and demonstrate it.

When you run `Program.cs`, you should get an output that the Singleton instance was created only once and both `singleton1` and `singleton2` are the same instances.
