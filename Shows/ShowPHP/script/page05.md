[home](./page01.md)

[back](./page04.md)

Now, let's goto the **index.php** file to demonstrate the usage of the **Prototype** design pattern and **shallow** copy vs. **deep** copy:


```
// Include the required files
include 'CloneablePrototype.php';
include 'Car.php';
include 'Bus.php';

// Create a car object
$originalCar = new Car('Toyota', 'Red');

// Perform a shallow copy of the car
$shallowCopyCar = $originalCar->clone();

// Modify the color of the shallow copy car
$shallowCopyCar->color = 'Blue';

// Create a bus object
$originalBus = new Bus('Volvo', 'Green');

// Perform a deep copy of the bus
$deepCopyBus = $originalBus->clone();

// Modify the color of the deep copy bus
$deepCopyBus->color = 'Yellow';

// Output the details of the original car and shallow copy car
echo "Original Car: Brand - " . $originalCar->getBrand() . ", Color - " . $originalCar->getColor() . "<br>";
echo "Shallow Copy Car: Brand - " . $shallowCopyCar->getBrand() . ", Color - " . $shallowCopyCar->getColor() . "<br>";

// Output the details of the original bus and deep copy bus
echo "Original Bus: Brand - " . $originalBus->getBrand() . ", Color - " . $originalBus->getColor() . "<br>";
echo "Deep Copy Bus: Brand - " . $deepCopyBus->getBrand() . ", Color - " . $deepCopyBus->getColor() . "<br>";
```

[page 6](./page06.md)
