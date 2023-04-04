[back](./page10.md)


Let's demonstrate the Factory Design Pattern using a PHP example. Suppose we have a website that sells different types of vehicles, such as cars, motorcycles, and bicycles. We can create a Vehicle interface, and then create separate classes for each type of vehicle, such as Car, Motorcycle, and Bicycle, that implement this interface.

Vehicle.php:

```php
interface Vehicle {
    public function drive();
}
```

Car.php:

```php
class Car implements Vehicle {
    public function drive() {
        echo "Driving a car...\n";
    }
}
```

Motorcycle.php:

```php
class Motorcycle implements Vehicle {
    public function drive() {
        echo "Riding a motorcycle...\n";
    }
}
```

Bicycle.php:

```php
class Bicycle implements Vehicle {
    public function drive() {
        echo "Riding a bicycle...\n";
    }
}
```

Now, we can create a VehicleFactory class that will be responsible for creating the appropriate Vehicle object based on the type of vehicle requested.

VehicleFactory.php:

```php

class VehicleFactory {
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

Finally, we can use the VehicleFactory class to create objects of different types of vehicles without knowing the exact class of object that will be created.

index.php:

```php

include('Vehicle.php');
include('Car.php');
include('Motorcycle.php');
include('Bicycle.php');
include('VehicleFactory.php');

$vehicleFactory = new VehicleFactory();
$car = $vehicleFactory->createVehicle('car');
$motorcycle = $vehicleFactory->createVehicle('motorcycle');
$bicycle = $vehicleFactory->createVehicle('bicycle');

$car->drive();          // Output: Driving a car...
$motorcycle->drive();   // Output: Riding a motorcycle...
$bicycle->drive();      // Output: Riding a bicycle...
```
In this example, we have organized each class in a separate PHP file and included them in the index.php file using the include statement. We have also organized the creation of the Vehicle objects in the VehicleFactory class, which we included in the index.php file.



Sure, let's use the namespace TheRayCode/Factory for our example. We can update our previous example as follows:


In this updated example, we have added the namespace TheRayCode/Factory to each class, and we have updated the include statements in the index.php file to include the namespace.


[page 12](./page12.md)
