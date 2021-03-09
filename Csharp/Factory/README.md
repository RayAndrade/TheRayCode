# TheRayCode
## Factory Design Pattern using c#
![text](TheRayCode/UMLs/Factory107.png)

For our example of the **Factory** pattern we create an interface we call **Product**.cs which will be a c# interface. 
Thus interface requires one method. The code for **Product** looks like:
```c#
public interface Product
{
   string Operation();
}
```
We will create a couple of concrete products to our project. 
We will call these *concrete products* **Product1** and **Product2**.
The code for **Product1** will be:
```c#
class Product1 : Product
{
   public string Operation()
   {
      return "{From of Product1}";
   }
}
```
And for *concrete product* **Product2** the code is:
```c#
class Product2 : Product
{
   public string Operation()
   {
     return "{From of Product2}";
   }
}
```
Now let's focus on the **Creator** of this pattern.
**Creator** is an *abstract* class that look's like:
```c#
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
**Creator**  extends a could

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
