[home](./page01.md)

[back](./page11.md)

Two concrete components (ComponentA and ComponentB) are created and stored in an array.

A message is printed, indicating that the client code works with all visitors via the base Visitor interface.

An instance of Visitor1 is created and passed to the ClientCode function, making both components accept this visitor and print corresponding messages.
A separator is printed.

Another message is printed, indicating that the same client code can work with different types of visitors.

An instance of Visitor2 is created and passed to the ClientCode function, making both components accept this second visitor and print corresponding messages.

Finally, all dynamically allocated memory is released using delete.

[page 13](./page13.md)
