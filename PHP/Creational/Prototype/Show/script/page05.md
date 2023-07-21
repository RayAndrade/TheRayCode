[home](./page01.md)

[back](./page04.md)

In the index.php file, we first create an instance of the Clown class named bozoClown. 

Then we create a shallow clone (bozoShallowClone) and a deep clone (bozoDeepClone) of this object.

We then change the color of the nose property on the original bozoClown. 

After that, we print the color of the nose property for the original, the shallow clone, and the deep clone.

Because the shallow clone only copied the reference to the Nose object, when we change the color of the nose in the original bozoClown, it is also changed in the bozoShallowClone (they both point to the same Nose object).

However, in the deep clone, we manually cloned the Nose object as well, so bozoDeepClone has its own Nose object, and changes to the original bozoClown's nose do not affect it.

[page 6](./page06.md)
