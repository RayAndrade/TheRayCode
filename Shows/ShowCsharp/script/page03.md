[home](./page01.md)

[back](./page02.md)


we do a **MemberwiseClone**

The **ShallowCopy()** method uses the **MemberwiseClone()** method to create a shallow copy of the Person object. 

The **DeepCopy()** method creates a **new Person** object and also creates a **new Address** object to achieve a deep copy.

```
 public Person DeepCopy()
{
   Address clonedAddress = new Address(Address.Street, Address.City);
   return new Person(Name, clonedAddress);
}
```

[page 4](./page04.md)
