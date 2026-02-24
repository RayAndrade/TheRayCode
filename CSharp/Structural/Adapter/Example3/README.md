[up](../README.md)

Design patterns are crucial in software development for solving common problems in a structured and reusable way. The Adapter pattern is a structural design pattern that allows objects with incompatible interfaces to work together. It acts as a bridge between two incompatible interfaces.

### Example of Adapter Pattern in C#

Let's illustrate this with an example. Suppose you have a `LightningPhone` class and you want it to be compatible with a `MicroUSBCharger`. The Adapter pattern can be used to bridge this compatibility.

#### 1. LightningPhone.cs
```csharp
public class LightningPhone
{
    private bool connector;

    public void Recharge()
    {
        if (connector)
        {
            Console.WriteLine("Recharge started");
            Console.WriteLine("Recharge finished");
        }
        else
        {
            Console.WriteLine("Connect Lightning first");
        }
    }

    public void UseLightning()
    {
        connector = true;
        Console.WriteLine("Lightning connected");
    }
}
```
This class represents a phone with a Lightning connector. It has methods to start recharging and to connect a Lightning cable.

#### 2. MicroUSBCharger.cs
```csharp
public interface IMicroUSBPhone
{
    void Recharge();
    void UseMicroUSB();
}

public class MicroUSBCharger : IMicroUSBPhone
{
    public void Recharge()
    {
        Console.WriteLine("Recharge started");
        Console.WriteLine("Recharge finished");
    }

    public void UseMicroUSB()
    {
        Console.WriteLine("MicroUSB connected");
    }
}
```
This interface and class represent the standard functionality for a phone with a MicroUSB charger.

#### 3. LightningToMicroUSBAdapter.cs
```csharp
public class LightningToMicroUSBAdapter : IMicroUSBPhone
{
    private readonly LightningPhone _lightningPhone;

    public LightningToMicroUSBAdapter(LightningPhone lightningPhone)
    {
        _lightningPhone = lightningPhone;
    }

    public void Recharge()
    {
        _lightningPhone.Recharge();
    }

    public void UseMicroUSB()
    {
        Console.WriteLine("MicroUSB connected");
        _lightningPhone.UseLightning();
    }
}
```
This adapter class implements the `IMicroUSBPhone` interface but internally it adapts the calls to a `LightningPhone` instance.

#### 4. Program.cs
```csharp
class Program
{
    static void Main(string[] args)
    {
        LightningPhone lightningPhone = new LightningPhone();
        IMicroUSBPhone adapter = new LightningToMicroUSBAdapter(lightningPhone);

        adapter.UseMicroUSB();
        adapter.Recharge();
    }
}
```
In the `Main` method, we create a `LightningPhone` and then adapt it to a `MicroUSBCharger` using `LightningToMicroUSBAdapter`. When running this program, you will see the messages indicating that the MicroUSB is connected and the phone is recharging using a Lightning connection.

### Order of Creation
1. **Create the `LightningPhone` class**: It's the main class that we want to adapt.
2. **Define the `IMicroUSBPhone` interface and `MicroUSBCharger` class**: These represent the target interface.
3. **Create the `LightningToMicroUSBAdapter` class**: This class will adapt `LightningPhone` to `IMicroUSBPhone`.
4. **Implement the `Program.cs` file**: This will demonstrate the usage of the adapter.

### Output When Running the Code
When you run the code, the console will display the following:
```
MicroUSB connected
Lightning connected
Recharge started
Recharge finished
```

This indicates that the adapter successfully allowed a Lightning phone to use a MicroUSB charger.
