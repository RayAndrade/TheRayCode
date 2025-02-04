[up](../README.md)

Here is the **C# implementation** of the **Singleton Design Pattern** along with a **PlainClass** to demonstrate the difference in object creation. This follows **best practices in C#**, ensuring a **thread-safe Singleton** implementation.

---

## 📁 **File Structure**
```
/ProjectFolder
│── Singleton.cs
│── PlainClass.cs
│── Program.cs (Main file)
```

---

## **1. `Singleton.cs` (Singleton Class)**
```csharp
using System;

public class Singleton
{
    // Private static instance (lazy initialization)
    private static Singleton? _instance;

    // Lock object for thread safety
    private static readonly object _lock = new object();

    // Private constructor prevents direct instantiation
    private Singleton()
    {
        Console.WriteLine("Singleton instance created.");
    }

    // Public static method to get the single instance
    public static Singleton Instance()
    {
        if (_instance == null)  // First check (without lock)
        {
            lock (_lock)  // Ensure thread safety
            {
                if (_instance == null)  // Second check (inside lock)
                {
                    _instance = new Singleton();
                }
            }
        }
        return _instance;
    }

    // Example method
    public void ShowMessage()
    {
        Console.WriteLine("Hello from Singleton!");
    }
}
```

---

## **2. `PlainClass.cs` (Regular Class)**
```csharp
using System;

public class PlainClass
{
    public PlainClass()
    {
        Console.WriteLine("PlainClass instance created.");
    }

    public void ShowMessage()
    {
        Console.WriteLine("Hello from PlainClass!");
    }
}
```

---

## **3. `Program.cs` (Main Program)**
```csharp
using System;

class Program
{
    static void Main()
    {
        // Get the first instance of Singleton
        Singleton singleton1 = Singleton.Instance();
        singleton1.ShowMessage();

        // Get another instance of Singleton
        Singleton singleton2 = Singleton.Instance();

        // Verify that both Singleton instances are the same
        if (singleton1 == singleton2)
        {
            Console.WriteLine("Both Singleton instances are the SAME object.");
        }
        else
        {
            Console.WriteLine("ERROR: Singleton instances are different! (This should not happen)");
        }

        Console.WriteLine("\n--- Creating PlainClass instances ---");

        // Create two separate instances of PlainClass
        PlainClass plain1 = new PlainClass();
        PlainClass plain2 = new PlainClass();

        // Verify that they are different objects
        if (plain1 == plain2)
        {
            Console.WriteLine("ERROR: PlainClass instances are the same! (This should not happen)");
        }
        else
        {
            Console.WriteLine("PlainClass instances are DIFFERENT objects.");
        }
    }
}
```

---

## 🛠 **How It Works**
1. **Singleton Class**:
   - Uses **lazy initialization** for the `_instance` variable.
   - Implements **thread safety** using `lock (_lock)`.
   - The constructor is **private** to prevent external instantiation.
   - The `Instance()` method ensures **only one instance exists**.

2. **PlainClass**:
   - Allows multiple instances.
   - Each `new PlainClass()` creates **a separate object**.

3. **Main Program (`Program.cs`)**:
   - Calls `Singleton.Instance()` twice, verifying that the same instance is returned.
   - Creates two `PlainClass` instances and verifies that they are **different objects**.

---

## **🎯 Expected Output**
```
Singleton instance created.
Hello from Singleton!
Both Singleton instances are the SAME object.

--- Creating PlainClass instances ---
PlainClass instance created.
PlainClass instance created.
PlainClass instances are DIFFERENT objects.
```

---

## 🔧 **How to Run in C#**
### Using .NET CLI:
1. Open a terminal and navigate to your project folder.
2. Compile and run using:
   ```sh
   dotnet run
   ```

### Using Visual Studio:
1. Open **Visual Studio**.
2. Create a **Console App** project.
3. Add the `Singleton.cs`, `PlainClass.cs`, and `Program.cs` files.
4. Click **Run** (▶).

---

## 🎯 **Key Takeaways**
✅ **Singleton enforces a single instance** using **lazy initialization & thread safety**.  
✅ **PlainClass allows multiple objects** using `new`.  
✅ **Encapsulation & Separation of Concerns** by organizing files properly.  

This C# version follows **best practices** for **performance and thread safety**. 🚀  
Let me know if you need modifications! 😊
