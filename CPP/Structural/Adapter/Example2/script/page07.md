[home](./page01.md)

[back](./page06.md)

At main.cpp

You have defined two functions: **Codebase1(Interface1* obj)** {}: This function accepts a pointer to an Interface1 type. 

It does not do anything with the provided object.
**Codebase2(Interface2* obj)** {}: Similarly, this function accepts a pointer to an Interface2 type and also does nothing with it.

In the main function:
You create an instance of Object2 named obj.
Then, you create an instance of Adapter named adp, passing the address of obj to its constructor. 
This effectively wraps the Object2 instance in an Adapter.
You then call the Codebase1 function, passing the address of the Adapter instance. 
Since Adapter implements Interface1, this is valid.

[page 8](./page08.md)
