[up](../README.md)

To demonstrate the Bridge design pattern in C#, I'll provide an example where we have an abstraction (e.g., `Device`) and its implementation (e.g., `RemoteControl`). This pattern helps in separating an object’s abstraction from its implementation so that the two can vary independently.

### Structure

1. **`Device.cs`** - An interface representing the device that will be controlled (e.g., TV, Radio).
2. **`TV.cs` and `Radio.cs`** - Implementations of the `Device` interface.
3. **`RemoteControl.cs`** - An abstraction that represents the remote control.
4. **`Program.cs`** - The main entry point of the application demonstrating the use of the Bridge pattern.

### Explanation

#### `Device.cs`
```csharp
public interface Device
{
    bool IsEnabled();
    void Enable();
    void Disable();
    int GetVolume();
    void SetVolume(int percent);
}
```
- **Purpose**: Defines the interface for different devices.
- **Methods**: Basic operations like `Enable`, `Disable`, `GetVolume`, `SetVolume`.

#### `TV.cs`
```csharp
public class TV : Device
{
    private bool on = false;
    private int volume = 10;

    public bool IsEnabled() => on;

    public void Enable() => on = true;

    public void Disable() => on = false;

    public int GetVolume() => volume;

    public void SetVolume(int percent) => volume = percent;
}
```
- **Purpose**: Specific implementation of a `Device`, a TV in this case.
- **Details**: Contains state and behavior relevant to a TV.

#### `Radio.cs`
```csharp
// Similar to TV.cs but with its own unique implementation
```

#### `RemoteControl.cs`
```csharp
public class RemoteControl
{
    protected Device device;

    public RemoteControl(Device device)
    {
        this.device = device;
    }

    public void TogglePower()
    {
        if (device.IsEnabled())
            device.Disable();
        else
            device.Enable();
    }

    public void VolumeUp()
    {
        device.SetVolume(device.GetVolume() + 10);
    }

    // Additional methods for control
}
```
- **Purpose**: Acts as a bridge between the `Device` interface and its concrete implementations.
- **Details**: Contains logic to manipulate the device, like turning on/off, adjusting volume.

#### `Program.cs`
```csharp
class Program
{
    static void Main(string[] args)
    {
        Device tv = new TV();
        RemoteControl remote = new RemoteControl(tv);

        remote.TogglePower(); // Turns TV on
        remote.VolumeUp(); // Increases volume

        Console.WriteLine("TV Status: " + (tv.IsEnabled() ? "On" : "Off"));
        Console.WriteLine("TV Volume: " + tv.GetVolume());
    }
}
```
- **Purpose**: Demonstrates the usage of the Bridge pattern.
- **Expected Output**: 
  ```
  TV Status: On
  TV Volume: 20
  ```

### Order of Creation

1. **Create `Device` Interface** - The foundation of the pattern, defining the operations.
2. **Implement `Device` in `TV` and `Radio`** - Concrete implementations of the interface.
3. **Create `RemoteControl` Class** - The abstraction that uses the `Device` interface.
4. **Implement `Program.cs`** - To demonstrate the working of the pattern.

This structure allows for additional devices or remote controls to be added without altering existing code, showcasing the flexibility and scalability of the Bridge design pattern.
