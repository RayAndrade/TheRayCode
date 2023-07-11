[home](./page01.md)

[back](./page04.md)

Here, **Vehicle** is a simple class with a model property and a method to get this model. 
**Car** extends **Vehicle** and implements the *magic* method **__clone()** to allow the *shallow* copying of its instances. 
In the **index.php**, we first create a Car object, car1. 
Then, we create car2 as a shallow copy of car1 using the clone keyword. We change the model of car2, and it does not affect car1.

In the browser, you will see the models of car1 and car2 displayed, showing that they are different and demonstrating the use of the Prototype pattern for creating a new object by cloning an existing one.

```
Car 1 Model: BMW
Car 2 Model: Audi
```

[page 6](./page06.md)
