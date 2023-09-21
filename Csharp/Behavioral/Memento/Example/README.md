Certainly! The Memento design pattern is all about capturing and storing the current state of an object in a manner that allows it to be restored later on, without breaking the principles of encapsulation.

**1. The Order of Creating Classes:**
1. `Memento`: This stores the internal state of the `Originator` object.
2. `Originator`: This is the object whose state we want to save and restore. It creates a memento and restores its state from it.
3. `Caretaker`: It keeps track of multiple mementos. It helps maintain the history of states.

**2. Explanation and Code:**

- **1. Memento.cs**
```csharp
// Memento.cs
using System;

public class Memento
{
    private string _state;

    public Memento(string state)
    {
        _state = state;
    }

    public string GetState()
    {
        return _state;
    }
}
```
This class is responsible for storing the state of the `Originator`. It has a method to retrieve the state.

- **2. Originator.cs**
```csharp
// Originator.cs
public class Originator
{
    private string _state;

    // Set a new state
    public void SetState(string state)
    {
        _state = state;
    }

    // Get current state
    public string GetState()
    {
        return _state;
    }

    // Save state to memento
    public Memento SaveStateToMemento()
    {
        return new Memento(_state);
    }

    // Restore state from memento
    public void GetStateFromMemento(Memento memento)
    {
        _state = memento.GetState();
    }
}
```
The `Originator` class can create a snapshot of its current state by using the `SaveStateToMemento` method. It can also restore its state using a given `Memento` object.

- **3. Caretaker.cs**
```csharp
// Caretaker.cs
using System.Collections.Generic;

public class Caretaker
{
    private List<Memento> _mementoList = new List<Memento>();

    public void Add(Memento state)
    {
        _mementoList.Add(state);
    }

    public Memento Get(int index)
    {
        return _mementoList[index];
    }
}
```
The `Caretaker` maintains a list of memento objects and can add new mementos or retrieve existing ones.

- **4. Program.cs**
```csharp
// Program.cs
using System;

class Program
{
    static void Main(string[] args)
    {
        Originator originator = new Originator();
        Caretaker caretaker = new Caretaker();

        // Changing and saving states
        originator.SetState("State #1");
        caretaker.Add(originator.SaveStateToMemento());

        originator.SetState("State #2");
        caretaker.Add(originator.SaveStateToMemento());

        originator.SetState("State #3");
        caretaker.Add(originator.SaveStateToMemento());

        originator.SetState("State #4");
        Console.WriteLine("Current State: " + originator.GetState());

        // Restoring previous states
        originator.GetStateFromMemento(caretaker.Get(0));
        Console.WriteLine("First saved State: " + originator.GetState());
        originator.GetStateFromMemento(caretaker.Get(1));
        Console.WriteLine("Second saved State: " + originator.GetState());
    }
}
```
In `Program.cs`, we create instances of the `Originator` and `Caretaker` classes. We then change the state of the `Originator` multiple times and save these states using the `Caretaker`. Finally, we demonstrate restoring the `Originator` to its previous states.

This is a basic implementation of the Memento pattern in C#. The real power comes in when you have complex objects with multiple fields and need to maintain versions of those objects over time.


