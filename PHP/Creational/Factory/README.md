# [TheRayCode](../../README.md) is AWESOME!!! 

**PHP section** [C++](../CPP/README.md) [C#](../Csharp/README.md) [Java](../Java/README.md)



Certainly! This is an example of the Factory design pattern, which is a creational pattern that provides an interface for creating objects in a superclass, but allows subclasses to alter the type of objects that will be created.

In this example, we have three classes: ProductInterface, Shirt, and Pants.

The ProductInterface class is an interface that specifies the methods that all products should implement. In this case, we have two methods: getName() and getPrice(), which return the name and price of the product, respectively.

The Shirt and Pants classes are concrete product classes that implement the ProductInterface. They each define their own implementations of the getName() and getPrice() methods to return the appropriate values for their product type.

Finally, we have the ProductFactory class, which is the factory class that creates products. It defines a static createProduct() method that takes a string argument indicating the type of product to create. It uses a switch statement to determine which product type to create, and returns a new instance of the appropriate product class.

In the index.php file, we import the required classes and use the ProductFactory to create a Shirt and a Pants object. We then use echo statements to print out the name and price of each product.

Overall, the Factory pattern is useful when you need to create multiple objects of a similar type, but want to delegate the creation of those objects to a separate factory class. This can help simplify your code and make it easier to maintain in the long run.

[script](/script/page01.md)

[TheRayCode.ORG](https://www.TheRayCode.org)

[RayAndrade.COM](https://www.RayAndrade.com)

[Facebook](https://www.facebook.com/TheRayCode/) | [Twitter @TheRayCode](https://www.twitter.com/TheRayCode/) | [YouTube](https://www.youtube.com/TheRayCode/)
