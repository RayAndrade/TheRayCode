[home](./page01.md)

[back](./page01.md)

Here is an example of the **Prototype** design pattern in PHP and explain the difference between shallow copy and deep copy. 
I'll also demonstrate how each copy can access methods from the original object. Finally, I'll organize the code by placing each class in its own PHP file and use includes in the **index.php** page. Let's start!

First, let's create an interface called **CloneablePrototype** that declares a **clone()** method. This interface will be implemented by the classes that need to support cloning:

interface
```
CloneablePrototype
```
with code 
```
public function clone(): CloneablePrototype;
```


[page 3](./page03.md)
