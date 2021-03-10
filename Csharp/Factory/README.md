# TheRayCode
## Factory Design Pattern using c#
For our example of the **Factory** pattern we will create an interface we call **Product**.cs. 
This interface will require one method. The code for **Product** looks like:
```c#
public interface Product
{
   string Operation();
}
```
Next we will create a couple of *concrete products* and we will add them to our project. 
The name of these products will be **Product1** and **Product2**.
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
And for *concrete product* **Product2** we have:
```c#
class Product2 : Product
{
   public string Operation()
   {
     return "{From of Product2}";
   }
}
```
Now let's focus on the abstract class we call **Creator**.
which look's like:
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
Note that the Creator may also provide some default implementation of the factory method.
Also note that, despite its name, the Creator's primary responsibility is not creating products. 
Usually, it contains some core business logic that relies on Product objects, returned by the factory method. 
Subclasses can indirectly change that business logic by overriding the factory method and returning a different type of product from it.




**Creator**  extends a could


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

![The Factory Design Pattern](https://github.com/RayAndrade/TheRayCode/blob/main/UMLs/images/Factory110.png)

 
 
# TheRayCode
## heading 2
### heading 3
#### heading 4

[Github](https://www.TheRayCode.com)
