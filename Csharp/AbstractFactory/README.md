# TheRayCode
## Abstract Factory c#

In this article we will review the **Abstract Factory** pattern.
This pattern allows you to create a family of classes in which
the subclasses of this *family* can cooperate together.

Let's start by creating a couple of interfaces we call **IProductA** and **IProductB**.

We start with **IProductA**:

```c#
public interface IProductA
{
  string UsefulFunctionA();
}
```
We see that it requiers a UsefulFunctionA method to use it.
Let's contine with the ProductA side.
We add two real clases to use the interface.
The code for the *class* **ProductA1** is:

```c#
class ProductA1: IProductA
{
   public string UsefulFunctionA()
   {
      return "The result of the product A1.";
   }
}
```
and we will add another class we call **ProductA2** and its code will be:

```c#
class ProductA2: IProductA
{
   public string UsefulFunctionA()
   {
      return "The result of the product A2.";
    }
}
```
Now we do the same for another class we would like to add. 
We create a side for the other interphace we mention **IProductB**.
We will add two clases also. Let's look at the code for the interface:

```c#
public interface IProductB
    {
        string UsefulFunctionB();
        string AnotherUsefulFunctionB(IProductA collaborator);

    }
```
As you can see there are 2 methods are required to use this interface.

Let's create our first **B** class.
We create **ProductB1**. 
The code for **ProductB1** is:

```c#
class ProductB1: IProductB
{
    public string UsefulFunctionB()
    {
       return "The result of the product B1.";
    }
    public string AnotherUsefulFunctionB(IProductA collaborator)
    {
       var result = collaborator.UsefulFunctionA();
       return $"The result of the B1 collaborating with the ({result})";
    }
}
```
As you can see it fills the requirements of the interface **IProductB**.
We create another class with the same requirements we call it **ProductB2**
Thee code for class **ProductB2** will be:
```c#
class ProductB2: IProductB
{
   public string UsefulFunctionB()
   {
      return "The result of the product B2.";
   }
   public string AnotherUsefulFunctionB(IProductA collaborator)
   {
      var result = collaborator.UsefulFunctionA();
      return $"The result of the B2 collaborating with the ({result})";
   }
}

```
Now let's create the factory.
We start with IAbstractFactory interface.

```c#
public interface IAbstractFactory
{
   IProductA CreateProductA();
   IProductB CreateProductB();
}
```
IProductA and IProductB are interfaces requiring a "UsefulFunction"
We now create a couple Factories we call **Factory1** and **Factory2**.
We start with **Factory1**.
The code for **Factory1** is:
```c#
class Factory1: IAbstractFactory
{
   public IProductA CreateProductA()
   {
      return new ProductA1();
   }

   public IProductB CreateProductB()
   {
       return new ProductB1();
   }
}
```
Likewise for **Factory2** we have:
```c#
class Factory2: IAbstractFactory
{
   public IProductA CreateProductA()
   {
      return new ProductA2();
   }

   public IProductB CreateProductB()
   {
      return new ProductB2();
   }
}
```
Finally we go to the **Program**.cs and add our Main method:

```c#
public static class Program
{
   public static void Main(string[] args)
   {
       new Client().Main();
   }
} 
    
```
When we compile and run we should get:

```
Client: Testing client code with the first factory type...
The result of the product B1.
The result of the B1 collaborating with the (The result of the product A1.)

Client: Testing the same client code with the second factory type...
The result of the product B2.
The result of the B2 collaborating with the (The result of the product A2.)

```

[Wikipedia](https://en.wikipedia.org/wiki/Abstract_factory_pattern)


----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)









# TheRayCode
TheRayCode PHP 
# TheRayCode
## heading 2
### heading 3
#### heading 4

[Github](https://www.TheRayCode.com)
