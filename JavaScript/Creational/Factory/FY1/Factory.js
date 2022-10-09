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

const classroom = []

classroom.push(factory.create("Patrick Starfish", 1))
classroom.push(factory.create("Dora Explore", 2))
classroom.push(factory.create("Mickey Mouse", 1))
classroom.push(factory.create("Ricky Rat", 1))
classroom.push(factory.create("Tiny Tim", 2))

classroom.forEach(emp => {
    say.call(emp)
})