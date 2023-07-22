# TheRayCode is AWESOME!!!

**[PHP](../README.md)**  

**[Creational Patterns](../README.md)** | **[Structural Patterns](../../Structural/README.md)** | **[Behavioral Patterns](../../Behavioral/README.md)**

**PHP Creational Patterns**


|Pattern|   |   |   |   |
|---|---|---|---|---|
| **Prototype** | [**C++**](../../../CPP/Creational/Prototype/README.md) | [**C#**](../../../Csharp/Creational/Prototype/README.md) | [Java](../../../Java/Creational/Prototype/README.md) | [PHP](../../../PHP/Creational/Prototype/README.md) |

yes!!

**Prototype Design Pattern**: 
This design pattern comes under the category of *creational patterns*. 
In this pattern, we create objects by cloning a prototypical instance at runtime. 
This is useful when object initialization is costly, and you want to efficiently produce a copy of a pre-existing, initialized instance.

**Shallow Copy**: A shallow copy of an object is a new object which is a copy of the original object. 
The new object refers to the same memory locations as the original one. 
So changes in one object's properties will also reflect on the other. 
In the context of a PHP object, a shallow copy will not clone nested objects. 
Instead, the new and original objects will reference the same nested objects.

**Deep Copy**: A deep copy is a process in which the copying process occurs recursively. 
It means that any modification in the new object will not affect the original object in any case, as a completely separate copy is created. 
In the context of a PHP object, a deep copy will also clone nested objects.

Both shallow copies and deep copies can access the same methods of the original class, as they are copies of objects of the same class.

The use of shallow copy vs. deep copy depends on your requirements:

Use a **Shallow Copy**: When you want to copy an object and don't mind that the original and the copy can influence each other. 
This is often used when the object's data members are primitive types or when the object doesn't contain any members which are references to other complex objects.
    
Use a **Deep Copy**: When you want a fully independent copy of the object, including its nested objects. 
This is used when you don't want changes to the copied object to affect the original object.


The **Prototype Design Pattern** is a creational design pattern in the field of software development. 
It helps with the efficient creation of objects when the cost of creating each one from scratch is high. 
This pattern uses an existing (prototype) object for the creation of new objects, thus improving performance and memory utilization.

As a PHP programmer, here's how understanding and implementing the Prototype Design Pattern can make you a better programmer:

1. **Efficiency**: The Prototype pattern can significantly boost your application's performance if you often create a lot of similar objects, and object creation is a costly operation in your context.

2. **Dynamic Configuration**: It allows you to create new objects dynamically at runtime, based on the values of an existing object. This can reduce complexity and increase flexibility when dealing with numerous subclasses in your applications.

3. **Reducing Subclassing**: The Prototype pattern lets you clone objects without coupling to their specific classes. All prototype classes can have a common interface that makes it possible to clone objects safely.

4. **Adding and Removing Products at Runtime**: The Prototype pattern lets you add or remove objects at runtime by copying existing instances.

Here's how it can increase your value in the job market:

1. **Expanded Skillset**: Having a good understanding of design patterns like Prototype shows that you have a deep understanding of software architecture and good practices. This makes you stand out among other developers who only know basic coding.

2. **Problem-Solving Skills**: Employers highly value problem-solving skills. Being able to use design patterns effectively is a clear sign of strong problem-solving abilities.

3. **Code Maintenance**: Design patterns often lead to more maintainable code. This means fewer bugs and easier updates - a big plus for employers.

4. **Better Communication**: Design patterns provide a common vocabulary for developers. When you say "Prototype", other developers familiar with the pattern will understand the general design you're referring to.

Here is a simple PHP implementation of the Prototype Design Pattern:

```php
abstract class Prototype {
    private $type;
    abstract function __clone();
    
    function getType() {
        return $this->type;
    }

    function setType($type) {
        $this->type = $type;
    }
}

class ConcretePrototype extends Prototype {
    function __construct() {
        $this->setType("type1");
    }

    function __clone() {}
}

$prototype = new ConcretePrototype();
$clonedPrototype = clone $prototype;

echo $clonedPrototype->getType(); // Outputs "type1"
```
In this example, `ConcretePrototype` is a class that extends the abstract class `Prototype`. The `ConcretePrototype` object is cloned, creating a new `ConcretePrototype` object without explicitly using the `new` keyword.

Now let's look at an example:

**Shallow Copy**

**Vehicle.php**
```
<?php
class Vehicle {
    public $model;

    public function __construct($model) {
        $this->model = $model;
    }

    public function getModel() {
        return $this->model;
    }
}
?>
```
**Car.php**
```
<?php
require_once 'Vehicle.php';

class Car extends Vehicle {
    public function __clone() {
    }
}
?>
```
**index.php**
```
<?php
require_once 'Vehicle.php';

class Car extends Vehicle {
    public function __clone() {
    }
}
?>
```
Here, **Vehicle** is a simple class with a model property and a method to get this model. 
**Car** extends **Vehicle** and implements the *magic* method **__clone()** to allow the *shallow* copying of its instances. 
In the **index.php**, we first create a Car object, car1. 
Then, we create car2 as a shallow copy of car1 using the clone keyword. We change the model of car2, and it does not affect car1.

In the browser, you will see the models of car1 and car2 displayed, showing that they are different and demonstrating the use of the Prototype pattern for creating a new object by cloning an existing one.

```
Car 1 Model: BMW
Car 2 Model: Audi
```

**Deep Copy** 

For a **Deep** copy example, let's modify the previous example to support deep copying. 
For this, we'll make model a *complex object*.

**Model.php**
```
<?php
class Model {
    public $name;

    public function __construct($name) {
        $this->name = $name;
    }

    public function setName($name) {
        $this->name = $name;
    }

    public function getName() {
        return $this->name;
    }
}
?>
```

**Vehicle.php**
```
<?php
require_once 'Model.php';

class Vehicle {
    public $model;

    public function __construct(Model $model) {
        $this->model = $model;
    }

    public function getModel() {
        return $this->model->getName();
    }
}
?>
```
**Car.php**

```
<?php
require_once 'Vehicle.php';

class Car extends Vehicle {
    public function __clone() {
        $this->model = clone $this->model;
    }
}
?>
```
**index.php**

```
<?php
require_once 'Car.php';

$bmwModel = new Model("BMW");
$car1 = new Car($bmwModel);
$audiModel = new Model("Audi");
$car2 = clone $car1;
$car2->model = $audiModel;

echo "Car 1 Model: " . $car1->getModel(); // Outputs: "Car 1 Model: BMW"
echo "Car 2 Model: " . $car2->getModel(); // Outputs: "Car 2 Model: Audi"
?>
```

In this example, **Model** is a simple class which contains a name. 
**Vehicle** now takes a **Model** object, and its method **getModel()** returns the name of the model. 
**Car** is the same as before but with an *overridden* **__clone()** method, where it creates a deep copy by cloning the model object when a **Car** object is cloned. 
This ensures that when the model of car2 is changed, car1 remains unaffected.

In the browser, you will see the models of car1 and car2 displayed, demonstrating that they are different and showing the use of the Prototype pattern with deep copying.

```
Car 1 Model: BMW
Car 2 Model: Audi
```


[show](./script/page01.md)

[TheRayCode.ORG](https://www.TheRayCode.org)  

[RayAndrade.COM](https://www.RayAndrade.com)

[Facebook](https://www.facebook.com/TheRayCode/) | [Twitter @TheRayCode](https://www.twitter.com/TheRayCode/) | [YouTube](https://www.youtube.com/TheRayCode/)
