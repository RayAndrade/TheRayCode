[back](./page05.md)

No we create the Factory class


```
Factory
```

let's first incude our class files

```
include('Car.php');
include('Motorcycle.php');
include('Bicycle.php');
```

we name it VehicleFactory and ith will have the following Factory code

First we extednt this class with

```
: Bicycle|Car|Motorcycle
```

and we add some code:

```
public function createVehicle($type): Bicycle|Car|Motorcycle {
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

where if you give it the carmeter car you get a Car class.

same if your parmeter is motorcycle you get a Motorcycle



[page 7](./page07.md)
