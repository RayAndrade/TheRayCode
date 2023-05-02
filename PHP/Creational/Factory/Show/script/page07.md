[home](./page01.md)

[back](./page06.md)

Finally, we can use the VehicleFactory class to create objects of different types of vehicles without knowing the exact class of object that will be created.

in the *index*


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


[page 8](./page08.md)
