[back](./page06.md)

we put some code into the index class to demo our code, first we add our include file

```
include('VehicleFactory.php');
```

next we add som varable decroation

```
$vehicleFactory = new VehicleFactory();
$car = $vehicleFactory->createVehicle('car');
$motorcycle = $vehicleFactory->createVehicle('motorcycle');
$bicycle = $vehicleFactory->createVehicle('bicycle');
```

and now our demo:

```
$car->drive();          // Output: Driving a car...
$motorcycle->drive();   // Output: Riding a motorcycle...
$bicycle->drive();      // Output: Riding a bicycle...
```

Let's view our code thru a browser


[page 8](./page08.md)
