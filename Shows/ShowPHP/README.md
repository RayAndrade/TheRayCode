# TheRayCode is AWESOME!!!

**[PHP](../README.md)**  

**[Creational Patterns](../README.md)** | **[Structural Patterns](../../Structural/README.md)** | **[Behavioral Patterns](../../Behavioral/README.md)**

**PHP Creational Patterns**


|Pattern|   |   |   |   |
|---|---|---|---|---|
| **Prototype** | [**C++**](../../../CPP/Creational/Prototype/README.md) | [**C#**](../../../Csharp/Creational/Prototype/README.md) | [Java](../../../Java/Creational/Prototype/README.md) | [PHP](../../../PHP/Creational/Prototype/README.md) |

**PHP Prototype Design Pattern**

The **Prototype** Pattern is a design pattern in which an existing object is used as a prototype to create new objects with the same or similar properties. In the context of PHP development, understanding the Prototype pattern is important due to the following reasons:

1. *Efficient Object Duplication*: If you need to create many similar objects or if object creation is expensive in terms of resources (time, memory, etc.), the Prototype pattern can be beneficial. The prototype already holds the default state, and creating a new object through cloning can be more efficient than instantiating a new one from scratch.

2. *Dynamic Addition or Removal at Runtime*: The Prototype pattern allows developers to add or remove properties of an object dynamically at runtime. This can offer flexibility when dealing with an object structure that can change throughout the lifecycle of a program.

3. *Reduced Subclassing*: The pattern can help reduce the number of subclasses that only differ in the kind of objects they create. Instead of using a factory that needs a subclass for each object type, you can use a prototype object for each type.

4. *Preserving the Original State*: When you need an exact copy of the object, the Prototype pattern helps preserve the state that otherwise might change if the object is manipulated directly.

5. *Avoiding Data Lookups*: Instead of making a database call or a complex lookup operation to bring an object into memory, cloning an existing, pre-configured prototype can be more efficient.

6. *Creating Complex Objects* More Conveniently: The Prototype pattern can make it more convenient to copy complex objects that have complicated construction steps.

Just like other design patterns, the Prototype pattern is a tool that should be used when it's appropriate. It may not be suitable for every situation, but it can be very useful in the right context. And understanding this pattern can certainly make you a better PHP developer.

I'll provide you with an example of the Prototype design pattern in PHP and explain the difference between shallow copy and deep copy. I'll also demonstrate how each copy can access methods from the original object. Finally, I'll organize the code by placing each class in its own PHP file and use includes in the index.php page. Let's start!

First, let's create an interface called **CloneablePrototype** that declares a **clone()** method. This interface will be implemented by the classes that need to support cloning:

**CloneablePrototype.php**

```
interface CloneablePrototype
{
    public function clone(): CloneablePrototype;
}
```
Next, let's create a concrete class called **Car** that implements the **CloneablePrototype** interface. The **Car** class will have properties like brand and color, and it will implement the *clone()* method to perform a shallow copy:

```
class Car implements CloneablePrototype
{
    private $brand;
    private $color;

    public function __construct($brand, $color)
    {
        $this->brand = $brand;
        $this->color = $color;
    }

    public function getBrand()
    {
        return $this->brand;
    }

    public function getColor()
    {
        return $this->color;
    }

    public function clone(): CloneablePrototype
    {
        return clone $this;
    }
}
```

Now, let's create another class called **Bus** that also implements the **CloneablePrototype** interface. The **Bus** class will have similar properties like brand and color, but it will implement the clone() method to perform a **deep copy**:

```
class Bus implements CloneablePrototype
{
    private $brand;
    private $color;

    public function __construct($brand, $color)
    {
        $this->brand = $brand;
        $this->color = $color;
    }

    public function getBrand()
    {
        return $this->brand;
    }

    public function getColor()
    {
        return $this->color;
    }

    public function clone(): CloneablePrototype
    {
        return new Bus($this->brand, $this->color);
    }
}
```
Now, let's create an index.php file to demonstrate the usage of the Prototype design pattern and shallow copy vs. deep copy:


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
n this example, the Car class and the Bus class both implement the CloneablePrototype interface, which requires the implementation of the clone() method. The Car class performs a shallow copy by using the clone keyword, while the Bus class performs a deep copy by manually creating a new instance and copying the values.

A shallow copy creates a new object with the same values as the original object. If the properties of the original object are references to other objects, the shallow copy will still reference the same objects. Shallow copies share the same methods as the original object since they are essentially the same object.

A deep copy, on the other hand, creates a new object and copies the values of the properties. If the properties of the original object are references to other objects, the deep copy will create new instances of those objects as well. Deep copies also have access to the same methods as the original object.

In the provided example, the original car and the shallow copy car have the same brand and color values. However, when the color of the shallow copy car is modified, it doesn't affect the original car. The same goes for the original bus and the deep copy bus.

You would use a shallow copy if you want to create a new object quickly while still sharing the same references to other objects. It can be useful when the referenced objects are large and cloning them is unnecessary or expensive.

You would use a deep copy when you need a completely independent copy of an object, including its properties and referenced objects. This can be useful when you want to modify the copy without affecting the original object or its references.


[show](./script/page01.md)

[TheRayCode.ORG](https://www.TheRayCode.org)  

[RayAndrade.COM](https://www.RayAndrade.com)

[Facebook](https://www.facebook.com/TheRayCode/) | [Twitter @TheRayCode](https://www.twitter.com/TheRayCode/) | [YouTube](https://www.youtube.com/TheRayCode/)
