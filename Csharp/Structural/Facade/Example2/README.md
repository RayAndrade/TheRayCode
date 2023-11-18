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
