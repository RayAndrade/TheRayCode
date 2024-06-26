[up](../README.md)

Creating a fun and educational example of the Observer design pattern in C# can be a great way to teach your students. I'll provide you with an example that simulates a weather station (the subject) and multiple display elements (observers) that update weather information. The .NET Framework 4.8 will be used, and each class will be in its own `.cs` file.

### Project Structure
1. `Program.cs` - Main entry of the program.
2. `IWeatherObserver.cs` - Observer interface.
3. `WeatherStation.cs` - Subject.
4. `CurrentConditionsDisplay.cs` - Concrete observer.
5. `StatisticsDisplay.cs` - Another concrete observer.

### 1. `IWeatherObserver.cs`
This interface declares the `Update()` method that all observers must implement.

```csharp
public interface IWeatherObserver
{
    void Update(float temperature, float humidity, float pressure);
}
```

### 2. `WeatherStation.cs`
This class is the subject. It maintains a list of observers and notifies them when weather data changes.

```csharp
public class WeatherStation
{
    private List<IWeatherObserver> observers;
    private float temperature;
    private float humidity;
    private float pressure;

    public WeatherStation()
    {
        observers = new List<IWeatherObserver>();
    }

    public void RegisterObserver(IWeatherObserver observer)
    {
        observers.Add(observer);
    }

    public void RemoveObserver(IWeatherObserver observer)
    {
        observers.Remove(observer);
    }

    public void NotifyObservers()
    {
        foreach (var observer in observers)
        {
            observer.Update(temperature, humidity, pressure);
        }
    }

    public void SetMeasurements(float temperature, float humidity, float pressure)
    {
        this.temperature = temperature;
        this.humidity = humidity;
        this.pressure = pressure;
        NotifyObservers();
    }
}
```

### 3. `CurrentConditionsDisplay.cs`
This is a concrete observer that displays current conditions.

```csharp
public class CurrentConditionsDisplay : IWeatherObserver
{
    private float temperature;
    private float humidity;

    public void Update(float temperature, float humidity, float pressure)
    {
        this.temperature = temperature;
        this.humidity = humidity;
        Display();
    }

    public void Display()
    {
        Console.WriteLine($"Current conditions: {temperature}F degrees and {humidity}% humidity");
    }
}
```

### 4. `StatisticsDisplay.cs`
Another observer that could display average, min, and max readings.

```csharp
// Similar to CurrentConditionsDisplay but with logic for statistics
```

### 5. `Program.cs`
This is the main entry point where you create and link the objects.

```csharp
class Program
{
    static void Main(string[] args)
    {
        WeatherStation weatherStation = new WeatherStation();

        CurrentConditionsDisplay currentDisplay = new CurrentConditionsDisplay();
        StatisticsDisplay statisticsDisplay = new StatisticsDisplay();

        weatherStation.RegisterObserver(currentDisplay);
        weatherStation.RegisterObserver(statisticsDisplay);

        weatherStation.SetMeasurements(80, 65, 30.4f);
        weatherStation.SetMeasurements(82, 70, 29.2f);
    }
}
```

### Order of Creating Classes
1. `IWeatherObserver.cs`
2. `WeatherStation.cs`
3. `CurrentConditionsDisplay.cs` and `StatisticsDisplay.cs`
4. `Program.cs`

### Expected Terminal Output
When you run the program, you should see output like this:

```
Current conditions: 80F degrees and 65% humidity
// Additional output from StatisticsDisplay
Current conditions: 82F degrees and 70% humidity
// Additional output from StatisticsDisplay
```

Each time `SetMeasurements` is called, the weather station updates its state and notifies its observers, leading to the displayed output. This project will help students understand the Observer pattern's dynamics in a fun and interactive way.
