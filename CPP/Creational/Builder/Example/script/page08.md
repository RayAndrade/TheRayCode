[home](./page01.md) | [back](./page07.md) | [next](./page09.md)

This demonstrates the building of a Hawaiian Pizza with the defined steps. When teaching this pattern, make sure your students understand that the Builder pattern helps in constructing complex objects by separating the construction process from the representation. 

It gives greater control over the construction process and supports building objects with a lot of optional parameters in a more readable manner.

Regarding the order of creation in your project, you typically start with the product class (Pizza), then define the builder interface (PizzaBuilder), followed by the concrete builders (HawaiianPizzaBuilder), and finally the director (PizzaDirector). 

You might then test the building process in the main function, as shown above.

[page 9](./page09.md)
