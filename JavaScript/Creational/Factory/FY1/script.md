/*
Factory Design Pattern -> https://www.youtube.com/watch?v=kuirGzhGhyw
Author: DevSage (Youtube) -> https://www.youtube.com/DevSage
*/

function Teacher(name)
{
this.name = name
this.type = "Teacher"
}

function Student(name)
{
this.name = name
this.type = "Student"
}

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

function say()
{
console.log("Hello I am " + this.name + " and I am a " + this.type)
}

const factory = new SchoolFactory()
const student = []

student.push(factory.create("Patrick Starfish", 1))
student.push(factory.create("Dora Explore", 2))
student.push(factory.create("Mickey Mouse", 1))
student.push(factory.create("Ricky Rat", 1))
student.push(factory.create("Tiny Tim", 2))

student.forEach(emp => {
say.call(emp)
})