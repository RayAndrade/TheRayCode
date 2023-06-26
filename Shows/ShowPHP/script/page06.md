[home](./page01.md)

[back](./page05.md)

In this example, the Car class and the Bus class both implement the CloneablePrototype interface, which requires the implementation of the clone() method. The Car class performs a shallow copy by using the clone keyword, while the Bus class performs a deep copy by manually creating a new instance and copying the values.

A shallow copy creates a new object with the same values as the original object. If the properties of the original object are references to other objects, the shallow copy will still reference the same objects. Shallow copies share the same methods as the original object since they are essentially the same object.

A deep copy, on the other hand, creates a new object and copies the values of the properties. If the properties of the original object are references to other objects, the deep copy will create new instances of those objects as well. Deep copies also have access to the same methods as the original object.

In the provided example, the original car and the shallow copy car have the same brand and color values. However, when the color of the shallow copy car is modified, it doesn't affect the original car. The same goes for the original bus and the deep copy bus.

You would use a shallow copy if you want to create a new object quickly while still sharing the same references to other objects. It can be useful when the referenced objects are large and cloning them is unnecessary or expensive.

You would use a deep copy when you need a completely independent copy of an object, including its properties and referenced objects. This can be useful when you want to modify the copy without affecting the original object or its references.



[page 7](./page07.md)
