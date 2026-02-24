[up](../README.md)

Creating a C# project with the Singleton design pattern and using the character Duncan MacLeod from "Highlander" as a thematic example sounds like an engaging. Here's how you can structure your project:

### 1. Project Structure
- **HighlanderSingleton.cs**: The Singleton class.
- **Program.cs**: The main entry point to demonstrate the Singleton.

### 2. HighlanderSingleton.cs
This file will contain your Singleton class. In the context of your theme, let's name it `HighlanderSingleton` to represent the concept of "there can only be one."

```csharp
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
```

**Explanation**:
- `_instance`: A private static variable that holds the single instance of `HighlanderSingleton`.
- `_lock`: A lock object to ensure thread safety.
- The constructor is private to prevent instantiation from outside.
- The `Instance` property ensures that only one instance of `HighlanderSingleton` is created and provides global access to it.
- `SayCatchphrase()`: A method to demonstrate functionality.

### 3. Program.cs
This is the entry point of your application where you demonstrate the Singleton pattern.

```csharp
class Program
{
    static void Main(string[] args)
    {
        HighlanderSingleton duncan = HighlanderSingleton.Instance;
        duncan.SayCatchphrase();

        HighlanderSingleton anotherDuncan = HighlanderSingleton.Instance;
        anotherDuncan.SayCatchphrase();

        // Check if both instances are the same
        Console.WriteLine(Object.ReferenceEquals(duncan, anotherDuncan));
    }
}
```

**Explanation**:
- Creates an instance of `HighlanderSingleton` and calls the `SayCatchphrase` method.
- Attempts to create another instance and calls the method again.
- Checks if both instances are the same, demonstrating the Singleton property.

### 4. Order of Creation
1. Create `HighlanderSingleton.cs` with the Singleton implementation.
2. Create `Program.cs` to demonstrate the Singleton usage.

### 5. Expected Output When Running the Program
- "There can only be one!" printed twice.
- `True` indicating that both instances are the same.

This structure follows the Singleton design pattern, ensuring that only one instance of the `HighlanderSingleton` class exists throughout the program, much like Duncan MacLeod's famous catchphrase in "Highlander."
