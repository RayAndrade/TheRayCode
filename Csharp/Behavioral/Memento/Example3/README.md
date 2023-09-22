[up](../README.md)

# TheRayCode
## Memento pattern c#

Memento is a behavioral design pattern that lets you save and restore the previous state of an object without revealing the details of its implementation.

```c#
public interface IMemento
{
   string GetName();
   string GetState();
   DateTime GetDate();
}
```

The Memento interface provides a way to retrieve the memento's metadata, such as creation date or name. 
However, it doesn't expose the Originator's state.
The Originator uses this method when restoring its state.
The rest of the methods are used by the Caretaker to display metadata.


```c#
class Memento : IMemento
{
   private string _state;
   private DateTime _date;
   public Memento(string state)
   {
       this._state = state;
       this._date = DateTime.Now;
   }
   public string GetState()
   {
       return this._state;
   }
   public string GetName()
   {
       return $"{this._date} / ({this._state.Substring(0, 9)})...";
   }
   public DateTime GetDate()
   {
       return this._date;
   }
}
```

The Originator holds some important state that may change over time. 
It also defines a method for saving the state inside a memento and another method for restoring the state from it.

For the sake of simplicity, the originator's state is stored inside a single variable.
The Originator's business logic may affect its internal state.
Therefore, the client should backup the state before launching methods of the business logic via the save() method.

Saves the current state inside a memento.
It also Restores the Originator's state from a memento object.
```c#
class Originator
{
    private string _state;
    public Originator(string state)
    {
        this._state = state;
        Console.WriteLine("Originator: My initial state is: " + state);
    }
    public void DoSomething()
    {
        Console.WriteLine("Originator: I'm doing something important.");
        this._state = this.GenerateRandomString(30);
        Console.WriteLine($"Originator: and my state has changed to: {_state}");
    }
    private string GenerateRandomString(int length = 10)
    {
       string allowedSymbols = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
       string result = string.Empty;
       while (length > 0)
       {
           result += allowedSymbols[new Random().Next(0, allowedSymbols.Length)];
           Thread.Sleep(12);
           length--;
       }
       return result;
   }
   public IMemento Save()
   {
       return new Memento(this._state);
   }
   public void Restore(IMemento memento)
   {
       if (!(memento is Memento))
       {
           throw new Exception("Unknown memento class " + memento.ToString());
       }
       this._state = memento.GetState();
       Console.Write($"Originator: My state has changed to: {_state}");
   }
}
```

The Caretaker doesn't depend on the Concrete Memento class. Therefore, it  doesn't have access to the originator's state, stored inside the memento.
It works with all mementos via the base Memento interface.

```c#
class Caretaker
{
    private List<IMemento> _mementos = new List<IMemento>();
    private Originator _originator = null;
    public Caretaker(Originator originator)
    {
        this._originator = originator;
    }
    public void Backup()
    {
        Console.WriteLine("\nCaretaker: Saving Originator's state...");
        this._mementos.Add(this._originator.Save());
    }
    public void Undo()
    {
        if (this._mementos.Count == 0)
        {
            return;
        }
        var memento = this._mementos.Last();
        this._mementos.Remove(memento);
        Console.WriteLine("Caretaker: Restoring state to: " + memento.GetName());
        try
        {
            this._originator.Restore(memento);
        }
        catch (Exception)
        {
            this.Undo();
        }
    }
    public void ShowHistory()
    {
        Console.WriteLine("Caretaker: Here's the list of mementos:");
        foreach (var memento in this._mementos)
        {
            Console.WriteLine(memento.GetName());
        }
    }
}
```

Let's put this altogether in the main found in our Program.cs file.

```c#
using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading;
class Program
{  
    static void Main(string[] args)
    {
        Originator originator = new Originator("Super-duper-super-puper-super.");
        Caretaker caretaker = new Caretaker(originator);
        caretaker.Backup();
        originator.DoSomething();
        caretaker.Backup();
        originator.DoSomething();
        caretaker.Backup();
        originator.DoSomething();
        Console.WriteLine();
        caretaker.ShowHistory();
        Console.WriteLine("\nClient: Now, let's rollback!\n");
        caretaker.Undo();
        Console.WriteLine("\n\nClient: Once more!\n");
        caretaker.Undo();
        Console.WriteLine();
    }
}
```

And now we compile and run, we should have:

```run
Originator: My initial state is: Super-duper-super-puper-super.

Caretaker: Saving Originator's state...
Originator: I'm doing something important.
Originator: and my state has changed to: FUbIPCClPpINblHPItNAyKBRfbbhWI

Caretaker: Saving Originator's state...
Originator: I'm doing something important.
Originator: and my state has changed to: MDreYrDtHOIrFyNXxvdWhmmOqGfWoA

Caretaker: Saving Originator's state...
Originator: I'm doing something important.
Originator: and my state has changed to: ngaSoRhJYcXaxKESQOPTprQMmlcpze

Caretaker: Here's the list of mementos:
5/29/2021 12:21:20 PM / (Super-dup)...
5/29/2021 12:21:21 PM / (FUbIPCClP)...
5/29/2021 12:21:21 PM / (MDreYrDtH)...

Client: Now, let's rollback!

Caretaker: Restoring state to: 5/29/2021 12:21:21 PM / (MDreYrDtH)...
Originator: My state has changed to: MDreYrDtHOIrFyNXxvdWhmmOqGfWoA

Client: Once more!

Caretaker: Restoring state to: 5/29/2021 12:21:21 PM / (FUbIPCClP)...
Originator: My state has changed to: FUbIPCClPpINblHPItNAyKBRfbbh
```

The Ray Code is AWESOME!!!


[Wikipedia](https://en.wikipedia.org/wiki/Memento_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)
