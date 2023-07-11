[home](./page01.md)

[back](./page06.md)

You would use the Builder pattern when:

The object creation process should be independent from the parts that make up the object.

The construction process should allow different representations for the object that's constructed.

The object has many potential configurations, or when increasing the number of constructor parameters would result in an explosion of constructors.

In our case, a monster can have various types of bodies, different names, and power levels, and we want to avoid creating a new constructor for each combination. 

This is where the Builder pattern becomes useful.

[page 8](./page08.md)
