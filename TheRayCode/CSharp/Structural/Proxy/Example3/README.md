[up](../README.md)

Let's use a whimsical "Wizarding World" theme. 

### 1. IMagicSpell.cs

```csharp
public interface IMagicSpell
{
    void CastSpell();
}
```

**Explanation:**
- `IMagicSpell`: This interface represents a magic spell, declaring a `CastSpell` method. Both our magical proxy and the actual spell will implement this interface.

### 2. FireballSpell.cs

```csharp
public class FireballSpell : IMagicSpell
{
    public void CastSpell()
    {
        Console.WriteLine("FireballSpell: A dazzling fireball zooms towards the target!");
    }
}
```

**Explanation:**
- `FireballSpell`: A class implementing `IMagicSpell`. It represents a powerful and flashy fireball spell.

### 3. SpellProxy.cs

```csharp
public class SpellProxy : IMagicSpell
{
    private FireballSpell _fireballSpell;

    public SpellProxy(FireballSpell fireballSpell)
    {
        _fireballSpell = fireballSpell;
    }

    public void CastSpell()
    {
        if (PerformMagicCheck())
        {
            _fireballSpell.CastSpell();
            LogSpellUsage();
        }
        else
        {
            Console.WriteLine("SpellProxy: Oops! Your wand flickered. Spell failed.");
        }
    }

    private bool PerformMagicCheck()
    {
        // Here, we could have some logic to check if the wizard is powerful enough.
        Console.WriteLine("SpellProxy: Checking magical energies before casting.");
        return new Random().Next(0, 2) > 0; // Randomly decide if the spell can be cast.
    }

    private void LogSpellUsage()
    {
        Console.WriteLine("SpellProxy: Logging spell usage in the magical ledger.");
    }
}
```

**Explanation:**
- `SpellProxy`: This class controls access to the `FireballSpell`. It checks if the magic can be cast (randomly in this humorous example) and logs the spell usage.

### 4. Program.cs

```csharp
class Program
{
    static void Main(string[] args)
    {
        FireballSpell fireballSpell = new FireballSpell();
        SpellProxy spellProxy = new SpellProxy(fireballSpell);
        spellProxy.CastSpell();
    }
}
```

**Explanation:**
- `Program.cs`: The main entry point where a `FireballSpell` and its proxy `SpellProxy` are created. The spell casting is attempted through the proxy, adding a layer of humor and whimsy to the interaction.

### Order of Creation and Output

1. **Create Interface (`IMagicSpell.cs`):** Start with the common spell interface.
2. **Create Real Spell (`FireballSpell.cs`):** Implement the actual spell casting functionality.
3. **Create Spell Proxy (`SpellProxy.cs`):** Implement the proxy that controls spell casting.
4. **Demonstrate in Main (`Program.cs`):** Use these classes to demonstrate their interaction in a whimsical setting.

When you run this code, the output will be a mix of successful and failed spell casting, depending on the random magic check, along with humorous logging:

```
SpellProxy: Checking magical energies before casting.
[Either "FireballSpell: A dazzling fireball zooms towards the target!" or "SpellProxy: Oops! Your wand flickered. Spell failed."]
[If successful] SpellProxy: Logging spell usage in the magical ledger.
```

This humorous and thematic approach can make the learning process more engaging for students, especially when introducing complex design patterns like the Proxy.
