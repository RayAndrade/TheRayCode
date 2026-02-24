[up](../README.md) [show](./script/page01.md)

Creating a C# example using the Facade design pattern involves several steps. The Facade pattern is a structural design pattern that provides a simplified interface to a complex subsystem. In this case, we'll create a humorous, simple application that simulates a "Robot" performing various complex tasks like cooking, cleaning, and entertainment, but the user will interact with a simple interface.

### Project Structure
1. **RobotFacade.cs**: This is the Facade class providing a simplified interface.
2. **CookingSubsystem.cs**: A subsystem class for cooking-related tasks.
3. **CleaningSubsystem.cs**: A subsystem class for cleaning activities.
4. **EntertainmentSubsystem.cs**: A subsystem for entertainment activities.
5. **Program.cs**: The main entry point that uses `RobotFacade`.

### RobotFacade.cs
```csharp
public class RobotFacade
{
    private CookingSubsystem _cookingSubsystem;
    private CleaningSubsystem _cleaningSubsystem;
    private EntertainmentSubsystem _entertainmentSubsystem;

    public RobotFacade()
    {
        _cookingSubsystem = new CookingSubsystem();
        _cleaningSubsystem = new CleaningSubsystem();
        _entertainmentSubsystem = new EntertainmentSubsystem();
    }

    public void PerformMorningRoutine()
    {
        _cookingSubsystem.MakeCoffee();
        _cleaningSubsystem.DoDusting();
        _entertainmentSubsystem.PlayMorningMusic();
    }

    // Additional methods for different routines...
}
```

### CookingSubsystem.cs
```csharp
public class CookingSubsystem
{
    public void MakeCoffee()
    {
        Console.WriteLine("Brewing the perfect cup of coffee!");
    }

    // Additional cooking methods...
}
```

### CleaningSubsystem.cs
```csharp
public class CleaningSubsystem
{
    public void DoDusting()
    {
        Console.WriteLine("Dusting around the house, no dust bunny is safe!");
    }

    // Additional cleaning methods...
}
```

### EntertainmentSubsystem.cs
```csharp
public class EntertainmentSubsystem
{
    public void PlayMorningMusic()
    {
        Console.WriteLine("Playing the best morning tunes to start your day right!");
    }

    // Additional entertainment methods...
}
```

### Program.cs
```csharp
class Program
{
    static void Main(string[] args)
    {
        var robot = new RobotFacade();
        robot.PerformMorningRoutine();

        Console.WriteLine("All tasks completed with a smile (if I had a face)!");
    }
}

```

### Class Creation Order
1. Create subsystems: `CookingSubsystem.cs`, `CleaningSubsystem.cs`, `EntertainmentSubsystem.cs`.
2. Create `RobotFacade.cs` to encapsulate subsystems.
3. Implement `Program.cs` to demonstrate usage.

### Expected Output
When you run the program, you should see:
```
Brewing the perfect cup of coffee!
Dusting around the house, no dust bunny is safe!
Playing the best morning tunes to start your day right!
All tasks completed with a smile (if I had a face)!
```

This output humorously suggests that the robot successfully performed its morning routine tasks with a touch of personality.
