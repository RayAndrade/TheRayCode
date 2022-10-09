In this article I will explore the Factory Design pattern and I will be using JavaScript.
Our factory will creatory both Teacher and Student objects.
The Teacher object will look like this:

```jsscript
function Teacher(name)
{
   this.name = name
   this.type = "Teacher"
}
```

and for the Teacher we will have:
```jsscript
function Teacher(name)
{
   this.name = name
   this.type = "Teacher"
}
```
Notice both the student *could* have the same interface in other languages. Both methods have the same name and number of methods.
For student we have.

```jsscript
function Student(name)
{
   this.name = name
   this.type = "Student"
}
```

For the factory that will create either the a student or a teacher. If you would like to add other member types you may do that here.
```jsscript
function SchoolFactory()
{
   this.create = (name, type) => {
   switch(type)
     {
      case 1:
         return new Teacher(name)
      case 2:
         return new Student(name)
      } 
   }
}
```
Now let's create a method for our objects. We will call the object method *say* to denote talking.

```jsscript
function say()
{
   console.log("Hello I am " + this.name + " and I am a " + this.type)
}
```
we create a Factory that will create our members.

```javascript
const factory = new SchoolFactory()
```

We create an array to hold our school members.
```javascript
const classroom = []

```
Now let create individual members both Teacher or Student.

```javascript
classroom.push(factory.create("Patrick Starfish", 1))
classroom.push(factory.create("Dora Explore", 2))
classroom.push(factory.create("Mickey Mouse", 1))
classroom.push(factory.create("Ricky Rat", 1))
classroom.push(factory.create("Tiny Tim", 2))
```
Now loop through the classroom array to have each element speak.
```javascript
classroom.forEach(emp => {
   say.call(emp)
})
```
Now let's run this JavaScript and we should get:

```run

```

