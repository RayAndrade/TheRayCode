[home](./page01.md)

[back](./page06.md)

Here's a summary of the overall flow:

CustomerManager has a method GetData() that provides a JSON representation of its customer list.

You want to fetch and work with a different version of this customer data, represented by CustomerDTO.

Instead of modifying the CustomerManager directly, 
you introduce an adapter (CustomerAdapter) which transforms the data from the format given by CustomerManager to the desired CustomerDTO format.

The Program class uses the CustomerAdapter to fetch and display the adapted data.

This is a classic application of the Adapter Design Pattern, where CustomerAdapter allows two incompatible interfaces (CustomerManager and ICustomer) to work together.

[page 8](./page08.md)
