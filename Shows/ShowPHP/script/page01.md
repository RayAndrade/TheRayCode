[home](./page01.md)

Prototype Design Pattern is used when the type of objects to create is determined by a prototypical instance, which is cloned to produce new objects. It is especially useful when the objects to be created are complex or expensive to instantiate.

Here is a simple example of how you can implement the Prototype design pattern in PHP. We are going to use a Car class as an example. It's going to have some properties and a method **clone()**. The clone() method will be used to clone the current instance.

In PHP, the *clone* keyword is used to make a *shallow* copy of an object while maintaining its type.

A *shallow copy* means that you are creating a new object which references the same elements as the original object. It's essentially creating a new reference to the same memory space, not creating new objects for each element within the copied object.

Let's split the code in two files: **Car.php** and index.php.

For example, if you have an object that includes an array and you make a shallow copy of that object, both the original and the copied object will point to the same array. If you modify the array through one of the objects, that change will be visible in the other object as well, because they both point to the same array.

[page 2](./page02.md)
