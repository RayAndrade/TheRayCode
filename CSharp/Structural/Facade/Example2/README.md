[up](../README.md)

The Facade Design Pattern is a structural design pattern that provides a simplified interface to a complex subsystem. In C#, this can be implemented by creating a Facade class that abstracts the complexities of the subsystems. Below is an example implementation, which includes detailed explanations. We'll create a hypothetical system where the Facade simplifies the process of operating a home theater.

### 1. Component Classes
First, let's define the subsystem classes, each in its own `.cs` file.

#### `Amplifier.cs`
```csharp
public class Amplifier
{
    public void TurnOn() => Console.WriteLine("Amplifier is on.");
    public void SetVolume(int level) => Console.WriteLine($"Volume set to {level}.");
    // Additional methods and properties relevant to the amplifier...
}
```

#### `DvdPlayer.cs`
```csharp
public class DvdPlayer
{
    public void TurnOn() => Console.WriteLine("DVD Player is on.");
    public void PlayMovie(string movie) => Console.WriteLine($"Playing \"{movie}\".");
    // Additional methods and properties relevant to the DVD player...
}
```

#### `Projector.cs`
```csharp
public class Projector
{
    public void TurnOn() => Console.WriteLine("Projector is on.");
    public void SetInput(DvdPlayer player) => Console.WriteLine("DVD player set as input.");
    // Additional methods and properties relevant to the projector...
}
```

### 2. Facade Class
Now, let's define the Facade class.

#### `HomeTheaterFacade.cs`
```csharp
public class HomeTheaterFacade
{
    private Amplifier _amp;
    private DvdPlayer _dvd;
    private Projector _projector;

    public HomeTheaterFacade(Amplifier amp, DvdPlayer dvd, Projector projector)
    {
        _amp = amp;
        _dvd = dvd;
        _projector = projector;
    }

    public void WatchMovie(string movie)
    {
        Console.WriteLine("Get ready to watch a movie...");
        _amp.TurnOn();
        _amp.SetVolume(5);
        _projector.TurnOn();
        _projector.SetInput(_dvd);
        _dvd.TurnOn();
        _dvd.PlayMovie(movie);
    }

    // Additional methods to facilitate other functionalities...
}
```

### 3. Program.cs (Demonstration)
Finally, use the `Program.cs` file to demonstrate the Facade.

```csharp
class Program
{
    static void Main(string[] args)
    {
        Amplifier amp = new Amplifier();
        DvdPlayer dvd = new DvdPlayer();
        Projector projector = new Projector();

        HomeTheaterFacade homeTheater = new HomeTheaterFacade(amp, dvd, projector);
        homeTheater.WatchMovie("Inception");

        Console.ReadLine();
    }
}
```

### Execution Order and Output
- Create the component classes (`Amplifier`, `DvdPlayer`, `Projector`) first.
- Then create the `HomeTheaterFacade` class.
- Finally, use the `Program.cs` file to demonstrate the usage.

When you run the program, you should see a sequence of console messages indicating the steps taken to set up the movie-watching environment, like turning on the amplifier, setting the volume, turning on the projector, setting the DVD player as input, and playing the movie. 

Each class encapsulates specific functionalities, making the entire system easier to use through the `HomeTheaterFacade`, which provides a simple interface to the client (in this case, the `Main` method in `Program.cs`).
When you compile and run the provided C# code using the Facade Design Pattern, here's the sequence of messages you should expect to see displayed in your console:

1. **"Get ready to watch a movie..."**  
   This message is the first line from the `WatchMovie` method in the `HomeTheaterFacade` class, indicating the start of the movie-watching process.

2. **"Amplifier is on."**  
   Triggered by the `TurnOn` method of the `Amplifier` class.

3. **"Volume set to 5."**  
   From the `SetVolume` method in the `Amplifier` class, setting the volume level to 5.

4. **"Projector is on."**  
   Resulting from the `TurnOn` method in the `Projector` class.

5. **"DVD player set as input."**  
   This is displayed when the `SetInput` method of the `Projector` class is called, setting the `DvdPlayer` as its input source.

6. **"DVD Player is on."**  
   This message comes from the `TurnOn` method of the `DvdPlayer` class.

7. **"Playing "Inception"."**  
   Finally, the `PlayMovie` method of the `DvdPlayer` class is called, playing the movie "Inception".

Each step corresponds to a method call in the `WatchMovie` method of the `HomeTheaterFacade` class. This sequence demonstrates how the Facade pattern simplifies complex operations, in this case, setting up a home theater system to watch a movie, by providing a single, straightforward method to perform all the necessary steps.


[TheRayCode.ORG](https://www.TheRayCode.org)

[RayAndrade.COM](https://www.RayAndrade.com)

[Facebook](https://www.facebook.com/TheRayCode/) | [X @TheRayCode](https://www.x.com/TheRayCode/) | [YouTube](https://www.youtube.com/TheRayCode/)
