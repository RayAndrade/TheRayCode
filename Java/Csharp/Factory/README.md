# TheRayCode
## Factory Design Pattern using c#


We start by creating a **Product** for our program we call **Product**.cs which is a c# class. 
Product

Product1

Product2

In this posting I will show an example of how to use the **Factory** design pattern using **c#**. 
Let's begin by creating a class called **Creator**.cs.
 Note that the Creator may also provide some default implementation of a factory method.
The **Creator**.cs will be an **abstract**  and have the following code:
```
abstract class Creator
{
    public abstract Product FactoryMethod();
    
    public string SomeOperation()
    {
        var product = FactoryMethod();
        var result = "Creator: This creator's code has just worked with "
                    + product.Operation();

       return result;
   }
}

```

Despite its name, the Creator's primary responsibility is not creating products. 
Usually, it contains some core business logic that relies on Product objects, returned by a factory method. 
Subclasses can indirectly change that business logic by overriding the factory and returning a different type.

We first create an abstract Product called **FactoryMethod**.
We then add **SomeOperation** to the progect class. 

Next we want to create a couple of Concreate createors we call **** and *****

One abstract method called FactoryMethod which is of type Product 

in our example 

Creator

Creator1

Creator2



Client

Program
 
# TheRayCode
## heading 2
### heading 3
#### heading 4

[Github](https://www.TheRayCode.com)
