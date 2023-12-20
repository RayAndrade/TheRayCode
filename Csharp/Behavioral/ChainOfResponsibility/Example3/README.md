Alright, brace yourself! We're heading into haunted territory.

Imagine a chain of haunted artifacts in a cursed museum. Each artifact possesses a certain evil spirit. When someone touches an artifact, the spirit might either curse the person or pass the curse onto a more malevolent spirit in the chain.

**Artifact.cs**
```csharp
public abstract class Artifact
{
    protected Artifact NextArtifact;

    public void SetNext(Artifact next)
    {
        NextArtifact = next;
    }

    public abstract void Curse(string victim);
}
```

**HauntedMirror.cs**
```csharp
public class HauntedMirror : Artifact
{
    public override void Curse(string victim)
    {
        if (victim == "thief")
        {
            Console.WriteLine("The Haunted Mirror shows the thief their doomed future...");
        }
        else
        {
            Console.WriteLine("The Haunted Mirror's spirit stirs, passing the curse...");
            NextArtifact?.Curse(victim);
        }
    }
}
```

**CursedDoll.cs**
```csharp
public class CursedDoll : Artifact
{
    public override void Curse(string victim)
    {
        if (victim == "child")
        {
            Console.WriteLine($"The Cursed Doll's eyes glow red as it stares at {victim}...");
        }
        else
        {
            Console.WriteLine("The Cursed Doll's spirit whispers, passing the curse...");
            NextArtifact?.Curse(victim);
        }
    }
}
```

**DemonBook.cs**
```csharp
public class DemonBook : Artifact
{
    public override void Curse(string victim)
    {
        Console.WriteLine($"The DemonBook opens by itself, releasing an ancient demon to haunt {victim}...");
    }
}
```

**Program.cs**
```csharp
using System;

class Program
{
    static void Main()
    {
        var mirror = new HauntedMirror();
        var doll = new CursedDoll();
        var book = new DemonBook();

        mirror.SetNext(doll);
        doll.SetNext(book);

        Console.WriteLine("A thief approaches and touches the Haunted Mirror:\n");
        mirror.Curse("thief");

        Console.WriteLine("\nA curious child touches the Cursed Doll:\n");
        mirror.Curse("child");

        Console.WriteLine("\nAn unsuspecting visitor touches an artifact:\n");
        mirror.Curse("visitor");
    }
}
```

When run, the program invokes the chain. Depending on who touches which artifact, the appropriate curse (or a more menacing one) is unleashed. Beware, though! Some curses are too powerful to be handled by the lesser spirits, and they pass it on to the more terrifying entities in the chain. 👻🎃🕸️
