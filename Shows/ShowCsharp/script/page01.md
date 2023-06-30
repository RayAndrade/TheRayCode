[home](./page01.md)

The **Prototype** design pattern is a creational pattern that allows you to create copies of objects without specifying their concrete classes. 

It provides a way to create new objects by **cloning** an existing object, rather than creating them from scratch. 

This pattern is useful when creating new objects is costly or complex.

To demonstrate the **Prototype** pattern with **deep copy** and **shallow copy** in C#, 
let's consider an example of a **Person** class that has a **name** and an **Address object**. 

We'll create copies of the **Person** object using both shallow and deep copy techniques.

First, let's define the **Address** class:

```
Address
```

add the code

```
public string Street { get; set; }
public string City { get; set; }

public Address(string street, string city)
{
    Street = street;
    City = city;
}
```
Note **City** and **Street** are nested..


[page 2](./page02.md)
