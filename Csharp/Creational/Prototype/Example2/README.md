Sure, just to clarify, C# uses `.cs` files rather than `.cpp` (which is typically used for C++ source files). Also, I'll use two simple classes, `Person` and `Address` for the demonstration. `Person` will include `Address` as a property to show how deep and shallow copy can affect nested objects.

File: `Address.cs`
```csharp
public class Address
{
    public string Street { get; set; }
    public string City { get; set; }

    public Address(string street, string city)
    {
        this.Street = street;
        this.City = city;
    }

    // Deep copy
    public Address DeepCopy()
    {
        return new Address(this.Street, this.City);
    }
}
```
The `Address` class contains properties for `Street` and `City` and a `DeepCopy` method which returns a new `Address` object with its own copy of the `Street` and `City` properties.

File: `Person.cs`
```csharp
public class Person
{
    public string Name { get; set; }
    public Address Address { get; set; }

    public Person(string name, Address address)
    {
        this.Name = name;
        this.Address = address;
    }

    // Shallow copy
    public Person ShallowCopy()
    {
        return (Person)this.MemberwiseClone();
    }

    // Deep copy
    public Person DeepCopy()
    {
        return new Person(this.Name, this.Address.DeepCopy());
    }
}
```
The `Person` class contains properties for `Name` and `Address` and methods for `ShallowCopy` and `DeepCopy`. `ShallowCopy` uses the `MemberwiseClone` method which creates a shallow copy of the current object. This means, it creates a new `Person` object and copies the values of the existing object's properties to the new one. But for reference types like `Address`, it just copies the reference, not the actual `Address` object. Therefore, if you change the `Address` in the original `Person`, it will also change in the copy.

`DeepCopy` creates a completely new `Person` object with its own copy of the `Name` and `Address` properties. It uses the `DeepCopy` method in the `Address` class to make sure it also gets a completely new `Address` object.

File: `Program.cs`
```csharp
class Program
{
    static void Main(string[] args)
    {
        Address address = new Address("123 Fake St", "Springfield");
        Person person1 = new Person("Homer", address);

        Person shallowCopy = person1.ShallowCopy();
        Person deepCopy = person1.DeepCopy();

        // Change the address
        person1.Address.Street = "321 Real St";

        System.Console.WriteLine($"Original Address: {person1.Address.Street}");
        System.Console.WriteLine($"Shallow Copy Address: {shallowCopy.Address.Street}");
        System.Console.WriteLine($"Deep Copy Address: {deepCopy.Address.Street}");

        // Output:
        // Original Address: 321 Real St
        // Shallow Copy Address: 321 Real St
        // Deep Copy Address: 123 Fake St
    }
}
```
In the `Main` method, we create a `Person` object and then create a shallow copy and a deep copy of this person. After changing the `Street` property of the address in the original person, we can see that the `Street` property also changes in the shallow copy, but not in the deep copy. This shows the difference between deep and shallow copy in C#.

