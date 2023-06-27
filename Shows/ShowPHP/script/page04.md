[home](./page01.md)

[back](./page03.md)

Both shallow copies and deep copies can access the same methods of the original class, as they are copies of objects of the same class.

The use of shallow copy vs. deep copy depends on your requirements:

Use a **Shallow Copy**: When you want to copy an object and don't mind that the original and the copy can influence each other. 
This is often used when the object's data members are primitive types or when the object doesn't contain any members which are references to other complex objects.
    
Use a **Deep Copy**: When you want a fully independent copy of the object, including its nested objects. 
This is used when you don't want changes to the copied object to affect the original object.

Now let's look at an example:



[page 5](./page05.md)
