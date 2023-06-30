[home](./page01.md)

[back](./page04.md)

In the above example, we create a **Person** object (**person1**) with a given name and address. 

Then, we create a **shallow copy** (**person2**) and *modify* the name and the city of the **address**. 

Since the shallow copy shares the same **Address** reference, changing the **city** for **person2** *also affects* the original **person1**.

In contrast, the deep copy (person3) creates a new Address object, ensuring that modifications to the copied Address object do not affect the original or other copies.

By using the Prototype pattern, you can create copies of objects while *controlling the depth* of the copy according to your needs.

[page 6](./page06.md)
