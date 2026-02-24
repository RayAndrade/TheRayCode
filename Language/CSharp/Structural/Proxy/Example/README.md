[up](../README.md)

The Proxy Design Pattern in C# is a structural design pattern that provides a surrogate or placeholder for another object to control access to it. This pattern is commonly used to provide a level of indirection to operations that might be resource-intensive or require additional security.

For your teaching scenario, I'll outline a basic implementation of the Proxy pattern using three classes: `ISubject`, `RealSubject`, and `Proxy`, each in their own `.cs` file. I'll also include a `Program.cs` file to demonstrate how these classes interact. 

### 1. ISubject.cs

```csharp
public interface ISubject
{
    void Request();
}
```

**Explanation:**
- `ISubject`: An interface that declares a common operation `Request`. Both the real object and the proxy will implement this interface.

### 2. RealSubject.cs

```csharp
public class RealSubject : ISubject
{
    public void Request()
    {
        Console.WriteLine("RealSubject: Handling Request.");
    }
}

```

**Explanation:**
- `RealSubject`: A class implementing `ISubject`. It defines the real object that the proxy represents.

### 3. Proxy.cs

```csharp
public class Proxy : ISubject
{
    private RealSubject _realSubject;

    public Proxy(RealSubject realSubject)
    {
        _realSubject = realSubject;
    }

    public void Request()
    {
        if (CheckAccess())
        {
            _realSubject.Request();
            LogAccess();
        }
    }

    private bool CheckAccess()
    {
        // Here, you can put some real access control logic.
        Console.WriteLine("Proxy: Checking access before firing a real request.");
        return true;
    }

    private void LogAccess()
    {
        Console.WriteLine("Proxy: Logging the time of request.");
    }
}

```

**Explanation:**
- `Proxy`: This class maintains a reference to an object of `RealSubject` and implements the same interface `ISubject`. It can control access to `RealSubject` and can provide additional functionality like logging, lazy initialization, etc.

### 4. Program.cs

```csharp
class Program
{
    static void Main(string[] args)
    {
        RealSubject realSubject = new RealSubject();
        Proxy proxy = new Proxy(realSubject);
        proxy.Request();
    }
}
```

**Explanation:**
- `Program.cs`: This is the entry point of the application. Here, an instance of `RealSubject` and `Proxy` is created. The proxy's `Request` method is called, which in turn calls the `Request` method of the real subject, but with added layers of access control and logging.

### Order of Creation and Output

1. **Create Interface (`ISubject.cs`):** Start by defining the common interface.
2. **Create Real Object (`RealSubject.cs`):** Implement the actual functionality.
3. **Create Proxy (`Proxy.cs`):** Implement the proxy that will control access to the real object.
4. **Demonstrate in Main (`Program.cs`):** Use these classes to demonstrate their interaction.

When you run this code, you should see output indicating that the proxy checks access, then forwards the request to the real object, and finally logs the access. The exact output should look like this:

```
Proxy: Checking access before firing a real request.
RealSubject: Handling Request.
Proxy: Logging the time of request.
```

This example can be adapted or extended depending on the specific educational objectives of your lesson. For instance, you could add more complexity to the access control logic in the `Proxy` class.
