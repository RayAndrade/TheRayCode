[home](./page01.md)

[back](./page05.md)

Now, we can create a VehicleFactory class that will be responsible for creating the appropriate Vehicle object based on the type of vehicle requested.

```
VehicleFactory
```

```
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
```

[page 7](./page07.md)
