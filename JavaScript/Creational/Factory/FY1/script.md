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

function EmployeeFactory()
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

const employeeFactory = new EmployeeFactory()
const employees = []

employees.push(employeeFactory.create("Patrick Starfish", 1))
employees.push(employeeFactory.create("Dora Explore", 2))
employees.push(employeeFactory.create("Mickey Mouse", 1))
employees.push(employeeFactory.create("Ricky Rat", 1))
employees.push(employeeFactory.create("Tiny Tim", 2))

employees.forEach( emp => {
say.call(emp)
})