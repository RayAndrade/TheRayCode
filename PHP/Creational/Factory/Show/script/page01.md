
The Factory design pattern is a creational design pattern that provides a way to create objects 
without specifying the exact class of object that will be created. 
Instead, the Factory class handles the object creation logic, allowing client code to create objects through a common 
interface.


In this example, we have an AnimalFactory interface that defines a method for creating animals.

```php

interface AnimalFactory
{
    public function createAnimal();
}


```


[page 2](./page02.md)
