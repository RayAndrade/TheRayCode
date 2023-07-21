[home](./page01.md)

[back](./page02.md)


The Clown class has two properties: name (a string) and nose (an instance of the Nose class).

We also have a magic method __clone() for shallow cloning and a deepClone() method for deep cloning.

When you clone an object in PHP, by default it does a shallow copy. 


A shallow copy means creating a new object and then copying the non-static fields of the current object to the new object. 

If a field is a value type, a bit-by-bit copy of the field is performed; If a field is a reference type, the reference is copied but the referred object is not; hence the original and its clone refer to the same object.


[page 4](./page04.md)
