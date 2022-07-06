# TheRayCode
## Prototype pattern c#
The prototype pattern is a creational design pattern in software development. 
It is used when the type of objects to create is determined by a prototypical instance, which is cloned to produce new objects. 
All prototype classes should have a common interface that makes it possible to copy objects even if their concrete classes are unknown. 
Prototype objects can produce full copies since objects of the same class can access each other’s private fields.

This example illustrates the structure of the Prototype design pattern. It focuses on answering these questions:
* What classes does it consist of?
* What roles do these classes play?
* In what way the elements of the pattern are related?

Let's start with creating a **Person** class.
```c#
public class Person
{
    public int Age;
    public DateTime BirthDate;
    public string Name;
    public IdInfo IdInfo;

    public Person ShallowCopy()
    {
       return (Person) this.MemberwiseClone();
    }

    public Person DeepCopy()
    {
        Person clone = (Person) this.MemberwiseClone();
        clone.IdInfo = new IdInfo(IdInfo.IdNumber);
        clone.Name = String.Copy(Name);
        return clone;
     }
}
```
Let's create4 another class we call **IdInfo**.
The code for **IdInfo** will be:
```c#
public class IdInfo
{
    public int IdNumber;
    public IdInfo(int idNumber)
    {
       this.IdNumber = idNumber;
    }
}
```
Now let's put this all together in a **Program** class.
```c#
class Program
{
    static void Main(string[] args)
    {
        Person p1 = new Person();
        p1.Age = 42;
        p1.BirthDate = Convert.ToDateTime("1977-01-01");
        p1.Name = "Jack Daniels";
        p1.IdInfo = new IdInfo(666);

        // Perform a shallow copy of p1 and assign it to p2.
        Person p2 = p1.ShallowCopy();
        // Make a deep copy of p1 and assign it to p3.
        Person p3 = p1.DeepCopy();

        // Display values of p1, p2 and p3.
        Console.WriteLine("Original values of p1, p2, p3:");
        Console.WriteLine("   p1 instance values: ");
        DisplayValues(p1);
        Console.WriteLine("   p2 instance values:");
        DisplayValues(p2);
        Console.WriteLine("   p3 instance values:");
        DisplayValues(p3);
        // Change the value of p1 properties and display the values of p1,
        // p2 and p3.
        p1.Age = 32;
        p1.BirthDate = Convert.ToDateTime("1900-01-01");
        p1.Name = "Frank";
        p1.IdInfo.IdNumber = 7878;
        Console.WriteLine("\nValues of p1, p2 and p3 after changes to p1:");
        Console.WriteLine("   p1 instance values: ");
        DisplayValues(p1);
        Console.WriteLine("   p2 instance values (reference values have changed):");
        DisplayValues(p2);
        Console.WriteLine("   p3 instance values (everything was kept the same):");
        DisplayValues(p3);
    }

    public static void DisplayValues(Person p)
    {
        Console.WriteLine("      Name: {0:s}, Age: {1:d}, BirthDate: {2:MM/dd/yy}",
           p.Name, p.Age, p.BirthDate);
            Console.WriteLine("      ID#: {0:d}", p.IdInfo.IdNumber);
    }
}
```


Let's compile and run our project.
We should get:
```result
Original values of p1, p2, p3:
      ID#: 7878
   p1 instance values: 
      Name: Jack Daniels, Age: 42, BirthDate: 01/01/77
      ID#: 666
   p2 instance values:
      Name: Jack Daniels, Age: 42, BirthDate: 01/01/77
      ID#: 666
   p3 instance values:
      Name: Jack Daniels, Age: 42, BirthDate: 01/01/77
      ID#: 666

Values of p1, p2 and p3 after changes to p1:
   p1 instance values: 
      Name: Frank, Age: 32, BirthDate: 01/01/00
   p2 instance values (reference values have changed):
      Name: Jack Daniels, Age: 42, BirthDate: 01/01/77
      ID#: 7878
   p3 instance values (everything was kept the same):
      Name: Jack Daniels, Age: 42, BirthDate: 01/01/77
      ID#: 666
```

[Wikipedia](https://en.wikipedia.org/wiki/Prototype_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)
