[up](../README.md)

Alright, let's have some fun with these names! 😄

**1. Order of Creating Classes:**
1. `TimeCapsule`: This will be our renamed `Memento`. It stores the 'memory' of our `DramaQueen` object.
2. `DramaQueen`: This is our whimsical `Originator`. It's the object whose state keeps changing and wants to remember its past dramatic episodes.
3. `MemoryBank`: Our renamed `Caretaker`. It remembers all the drama from `DramaQueen`.

**2. Explanation and Code:**

- **1. TimeCapsule.cs**
```csharp
// TimeCapsule.cs
using System;

public class TimeCapsule
{
    private string _episode;

    public TimeCapsule(string episode)
    {
        _episode = episode;
    }

    public string RecallEpisode()
    {
        return _episode;
    }
}
```

- **2. DramaQueen.cs**
```csharp
// DramaQueen.cs
public class DramaQueen
{
    private string _currentDrama;

    public void NewDrama(string drama)
    {
        _currentDrama = drama;
    }

    public string CurrentDrama()
    {
        return _currentDrama;
    }

    public TimeCapsule SaveDramaForLater()
    {
        return new TimeCapsule(_currentDrama);
    }

    public void ReminisceDrama(TimeCapsule capsule)
    {
        _currentDrama = capsule.RecallEpisode();
    }
}
```

- **3. MemoryBank.cs**
```csharp
// MemoryBank.cs
using System.Collections.Generic;

public class MemoryBank
{
    private List<TimeCapsule> _dramaArchive = new List<TimeCapsule>();

    public void DepositDrama(TimeCapsule episode)
    {
        _dramaArchive.Add(episode);
    }

    public TimeCapsule WithdrawDrama(int index)
    {
        return _dramaArchive[index];
    }
}
```

- **4. Program.cs**
```csharp
// Program.cs
using System;

class Program
{
    static void Main(string[] args)
    {
        DramaQueen queen = new DramaQueen();
        MemoryBank bank = new MemoryBank();

        // New dramas and saving them
        queen.NewDrama("Forgot my keys at Starbucks!");
        bank.DepositDrama(queen.SaveDramaForLater());

        queen.NewDrama("Lost a shoe in the rain!");
        bank.DepositDrama(queen.SaveDramaForLater());

        queen.NewDrama("Burned the cookies!");
        bank.DepositDrama(queen.SaveDramaForLater());

        queen.NewDrama("Spilled tea on my diary!");
        Console.WriteLine("Latest Drama: " + queen.CurrentDrama());

        // Reminiscing old dramas
        queen.ReminisceDrama(bank.WithdrawDrama(0));
        Console.WriteLine("Oh, remember this? " + queen.CurrentDrama());
        queen.ReminisceDrama(bank.WithdrawDrama(1));
        Console.WriteLine("And this one! " + queen.CurrentDrama());
    }
}
```

Here, `DramaQueen` goes through different episodes of drama and then stores them in her `MemoryBank`. Later, she can reminisce and revisit her old dramas. I hope these names make your code a bit more entertaining! 😊
