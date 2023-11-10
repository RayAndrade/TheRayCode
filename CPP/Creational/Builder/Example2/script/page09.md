[home](./page01.md) | [back](./page08.md) | [next](./page10.md)

when you compile and run you get

```
Sandwich on toasted bread with turkey meat and Swiss cheese. Vegetables: lettuce tomato . Condiments: mayonnaise 
```

This demonstrates the building of a Club Sandwich using the Builder pattern. The SandwichBuilder allows us to abstract the construction process, the ClubSandwichBuilder provides the specific steps for creating a Club Sandwich, and the SandwichDirector manages the construction process.

For the order of creation in your project, you should follow this sequence:

```
Create the product class (Sandwich).
Define the builder interface (SandwichBuilder).
Implement concrete builders (ClubSandwichBuilder).
Implement the director class (SandwichDirector).
In main.cpp, use the director to construct a sandwich with the concrete builder.
```

Running the main.cpp file should give you a clear demo of the code. 

Students should be able to see how the pattern separates the construction of a complex object from its representation, and how this can be useful to create different representations of the object (Sandwich in this case) using the same construction process.


[page 10](./page10.md)
