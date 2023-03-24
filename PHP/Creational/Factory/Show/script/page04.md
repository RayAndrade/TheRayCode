[back](./page03.md)


In this example, we have an AnimalFactory interface that defines a method for creating animals. 
We also have two concrete factory classes, DogFactory and CatFactory, each of which implements the AnimalFactory 
interface and provides a specific implementation for creating either dogs or cats.

We also have an abstract Animal class that defines a method for speaking, which is implemented in the Dog and 
Cat classes. Finally, we create instances of Dog and Cat using their respective factory classes, and call the 
speak method to output their respective sounds.

Using the Factory design pattern in this way can provide a flexible and extensible way to create objects in 
your application, allowing you to easily add new types of objects in the future without modifying existing 
client code.

```php

```


[page 5](./page05.md)
