[up](../README.md)


### 1. Flyweight Interface

**File:** `SpaceCadet.cs`
```csharp
public interface SpaceCadet
{
    void Explore(string missionLog);
}
```
- **Purpose:** Represents a space cadet on a mission. Every cadet has a mission (method `Explore`), but their personal diary (extrinsic state) is unique to each adventure.

### 2. Concrete Flyweight

**File:** `MarsRoverCadet.cs`
```csharp
public class MarsRoverCadet : SpaceCadet
{
    private string favoriteRock;

    public MarsRoverCadet(string favoriteRock)
    {
        this.favoriteRock = favoriteRock; // Every cadet has a favorite rock on Mars!
    }

    public void Explore(string missionLog)
    {
        Console.WriteLine($"Favorite Rock = {favoriteRock}, Mission Log = {missionLog}");
    }
}
```
- **Purpose:** A specific type of space cadet who loves exploring Mars. They always remember their favorite rock, which is their intrinsic state. The `Explore` method logs their journey, the extrinsic state that changes with each mission.

### 3. Flyweight Factory

**File:** `CadetAcademy.cs`
```csharp
public class CadetAcademy
{
    private Dictionary<string, SpaceCadet> cadets = new Dictionary<string, SpaceCadet>();

    public SpaceCadet AssignCadet(string favoriteRock)
    {
        if (!cadets.ContainsKey(favoriteRock))
        {
            cadets[favoriteRock] = new MarsRoverCadet(favoriteRock);
        }
        return cadets[favoriteRock];
    }
}
```
- **Purpose:** The academy where space cadets are trained and assigned. It ensures each cadet is unique in their love for a specific rock on Mars. It either assigns an existing cadet or trains a new one if needed.

### 4. Program File (Humorous Demonstration)

**File:** `SpaceMission.cs`
```csharp
class SpaceMission
{
    static void Main(string[] args)
    {
        var academy = new CadetAcademy();

        var cadetRocky = academy.AssignCadet("Basalt");
        var cadetStony = academy.AssignCadet("Granite");
        var cadetRockyClone = academy.AssignCadet("Basalt"); // Same as cadetRocky

        cadetRocky.Explore("Found a strange green stone!");
        cadetStony.Explore("Met a Martian, nice fellow.");
        cadetRockyClone.Explore("Discovered alien graffiti!");
    }
}
```
- **Purpose:** Simulates a space mission where cadets from `CadetAcademy` explore Mars. 
- **Expected Output:** You'll see each cadet's favorite rock and their unique mission logs. Notice how `cadetRocky` and `cadetRockyClone` share the same intrinsic love for Basalt, showing the Flyweight pattern in action.

### Order of Creation in Project:

1. Create the `SpaceCadet` interface with a humorous twist.
2. Implement the `MarsRoverCadet` class, giving each cadet a favorite rock.
3. Develop the `CadetAcademy` for managing cadets efficiently.
4. Use these creatively named classes in `SpaceMission.cs` to demonstrate the pattern with a touch of humor.

When you run the code you will get:
```
Favorite Rock = Basalt, Mission Log = Found a strange green stone!
Favorite Rock = Granite, Mission Log = Met a Martian, nice fellow.
Favorite Rock = Basalt, Mission Log = Discovered alien graffiti!
```


This approach makes the learning process more enjoyable and memorable, especially when teaching complex design patterns like Flyweight.
