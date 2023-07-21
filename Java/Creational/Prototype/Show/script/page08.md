[home](./page01.md)

[back](./page07.md)

In the **Main** class, we create an original Person object with a specific Address. 

We then perform both shallow and deep cloning of this object.

**Shallow Clone**: The shallow clone creates a new Person object but shares the same Address object reference as the original person. 
Any changes made to the Address object of the shallow clone will affect the original person as well.

**Deep Clone**: The deep clone creates a new Person object along with a new Address object with the same values as the original person's address. 
This way, changes made to the Address object of the deep clone won't affect the original person.

By comparing the output, you'll see the difference in address between the original person, the shallow clone, a

[page 9](./page09.md)
