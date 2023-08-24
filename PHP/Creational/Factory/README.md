# [TheRayCode](../../../README.md) is AWESOME!!!

**[Creational Patterns](../README.md)** | **[Structural Patterns](../../Structural/README.md)** | **[Behavioral Patterns](../../Behavioral/README.md)**

**PHP Creational Patterns**

|Example in PHP|   |   |   |   |
|---|---|---|---|---|
| [**Factory**](README.md) | [**C#**](../../../Csharp/Creational/Factory/README.md) | [Java](../../../Java/Creational/Factory/README.md) |[PHP](../../../PHP/Creational/Factory/README.md) |

**PHP Factory Design Pattern**

[Show](Show/READMEmd)

The **Factory Design Pattern** is a creational design pattern that provides an interface for creating objects in a superclass but allows subclasses to alter the type of objects that will be created. In other words, it defines a way for creating objects without specifying the exact class of object that will be created.

Let's demonstrate the Factory Design Pattern using a PHP example. Suppose we have a website that sells different types of *vehicles*, such as cars, motorcycles, and bicycles. We can create a **Vehicle** *interface*, and then create separate classes for each type of vehicle, such as **Car**, **Motorcycle**, and **Bicycle**, that implement this interface.

Here is the *interface* for **Vehicle**.
```
interface Vehicle
{
    public function drive();
}
```
Let's create a **Bicycle** *Vehicle* and it will need to implement the **Vehicle** interface

```
class Bicycle implements Vehicle
{
    public function drive()
    {
        echo "Riding a bicycle...<br/>\n";
    }
}
```
Let add a Car to our **Vehicle** collection

```
class Car implements Vehicle
{
    public function drive()
    {
        echo "Driving a car...<br/>\n";
    }
}
```

And yes! I NEED a **Motorcycle**..

```
class Motorcycle implements Vehicle
{
    public function drive()
    {
        echo "Riding a motorcycle...<br/>\n";
    }
}
```
So now let's build a **VehicleFactory** for our Vehicles

```
class VehicleFactory
{
    public function createVehicle($type) {
        if ($type == 'car') {
            return new Car();
        } elseif ($type == 'motorcycle') {
            return new Motorcycle();
        } elseif ($type == 'bicycle') {
            return new Bicycle();
        } else {
            throw new InvalidArgumentException("Invalid vehicle type");
        }
    }
}
```

Now we can put this all in our **index.php**

We start with our includes:

```
include('Vehicle.php');
include('Car.php');
include('Motorcycle.php');
include('Bicycle.php');
include('VehicleFactory.php');
```


Create our Vehicle objects:

```
$vehicleFactory = new VehicleFactory();
$car = $vehicleFactory->createVehicle('car');
$motorcycle = $vehicleFactory->createVehicle('motorcycle');
$bicycle = $vehicleFactory->createVehicle('bicycle');
```

Display our work to the browser:

```
$car->drive();          // Output: Driving a car...
$motorcycle->drive();   // Output: Riding a motorcycle...
$bicycle->drive();      // Output: Riding a bicycle...
```

When veiw the browser we see

```
Driving a car...
Riding a motorcycle...
Riding a bicycle...
```



[TheRayCode.ORG](https://www.TheRayCode.org)

[RayAndrade.COM](https://www.RayAndrade.com)

[Facebook](https://www.facebook.com/TheRayCode/) | [Twitter @TheRayCode](https://www.twitter.com/TheRayCode/) | [YouTube](https://www.youtube.com/TheRayCode/)
