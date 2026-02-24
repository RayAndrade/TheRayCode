[up](../README.md)

Creating a funny example of the Observer design pattern in C# can be a great way to engage students and make learning more enjoyable. Here's an example that you can use, along with explanations for each class, method, and variable. The scenario will involve a "JokeTeller" (Subject) telling jokes to multiple "Listeners" (Observers).

### Project Structure
1. **Program.cs**
2. **JokeTeller.cs** - The Subject.
3. **IListener.cs** - The Observer interface.
4. **Listener.cs** - Concrete implementation of Observer.

### Order to Create the Classes
1. Create the **IListener** interface.
2. Create the **Listener** class.
3. Create the **JokeTeller** class.
4. Finally, write the demonstration in **Program.cs**.

### JokeTeller.cs
```csharp
using System;
using System.Collections.Generic;

public class JokeTeller
{
    private List<IListener> listeners = new List<IListener>();
    private string currentJoke;

    public void Subscribe(IListener listener)
    {
        listeners.Add(listener);
    }

    public void Unsubscribe(IListener listener)
    {
        listeners.Remove(listener);
    }

    public void TellJoke(string joke)
    {
        currentJoke = joke;
        NotifyListeners();
    }

    private void NotifyListeners()
    {
        foreach (IListener listener in listeners)
        {
            listener.HearJoke(currentJoke);
        }
    }
}
```
**Explanation**: `JokeTeller` is the subject that notifies observers (`IListener`) when a new joke is told. `Subscribe` and `Unsubscribe` methods manage the listeners, and `TellJoke` updates the joke and notifies listeners.

### IListener.cs
```csharp
public interface IListener
{
    void HearJoke(string joke);
}
```
**Explanation**: `IListener` is an interface that all observers must implement. The `HearJoke` method is called when the `JokeTeller` tells a joke.

### Listener.cs
```csharp
using System;

public class Listener : IListener
{
    private string name;

    public Listener(string name)
    {
        this.name = name;
    }

    public void HearJoke(string joke)
    {
        Console.WriteLine($"{name} heard a joke: {joke}");
    }
}
```
**Explanation**: `Listener` is a concrete implementation of the `IListener` interface. Each listener has a name and prints out the joke they hear.

### Program.cs
```csharp
class Program
{
    static void Main(string[] args)
    {
        JokeTeller jokeTeller = new JokeTeller();
        Listener alice = new Listener("Alice");
        Listener bob = new Listener("Bob");

        jokeTeller.Subscribe(alice);
        jokeTeller.Subscribe(bob);

        jokeTeller.TellJoke("Why did the scarecrow win an award? Because he was outstanding in his field!");

        jokeTeller.Unsubscribe(bob);

        jokeTeller.TellJoke("I'm reading a book on anti-gravity. It's impossible to put down!");
    }
}
```
**Explanation**: In the `Main` method, we create a `JokeTeller` and two listeners, `Alice` and `Bob`. We subscribe both to the `JokeTeller`, tell a joke, unsubscribe `Bob`, and tell another joke.

### Expected Output in Terminal
```
Alice heard a joke: Why did the scarecrow win an award? Because he was outstanding in his field!
Bob heard a joke: Why did the scarecrow win an award? Because he was outstanding in his field!
Alice heard a joke: I'm reading a book on anti-gravity. It's impossible to put down!
```

**Explanation**: The output shows each listener's reaction to the jokes told by `JokeTeller`. Notice how Bob doesn't react to the second joke as he was unsubscribed.

This example is simple yet demonstrates the Observer pattern effectively. You can expand this with more features or different scenarios to suit your lesson plan!
