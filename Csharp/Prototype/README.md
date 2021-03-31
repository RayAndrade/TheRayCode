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


Let's compile an ru our project.
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
