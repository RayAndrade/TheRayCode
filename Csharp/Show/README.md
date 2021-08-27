# TheRayCode
## Abstract Factory c#

In this article we will review the **Abstract Factory** pattern.
This pattern allows you to create a family of classes in which
the subclasses of this *family* can cooperate together.

Let's start by creating a couple of interfaces we call **ProductA** and **ProductB**.

We start with a interface **ProductA**:

```c#
public interface ProductA
{
  string UsefulFunctionA();
}
```
We see that it requiers a UsefulFunctionA method to use it.
Let's contine with the ProductA side.
We add two real clases to use the interface.
The code for the *class* **SolidProductA1** is:

```c#
class SolidProductA1: ProductA
{
   public string UsefulFunctionA()
   {
      return "The result of the product A1.";
   }
}
```
and we will add another class we call **SolidProductA2** and its code will be:

```c#
class SolidProductA2: ProductA
{
   public string UsefulFunctionA()
   {
      return "The Ray Code is AWESOME!!!";
    }
}
```
Now we do the same for another class we would like to add. 
We create a side for the other interphace we mention **ProductB**.
We will add two clases also. Let's look at the code for the interface:

```c#
public interface ProductB
    {
        string UsefulFunctionB();
        string AnotherUsefulFunctionB(ProductA collaborator);

    }
```
As you can see there are 2 methods are required to use this interface.

Let's create our first **B** class.
We create **SolidProductB1**. 
The code for **SolidProductB1** is:

```c#
class SolidProductB1: ProductB
{
    public string UsefulFunctionB()
    {
       return "The result of the product B1.";
    }
    public string AnotherUsefulFunctionB(ProductA collaborator)
    {
       var result = collaborator.UsefulFunctionA();
       return $"The result of the B1 collaborating with the ({result})";
    }
}
```
As you can see it fills the requirements of the interface **ProductB**.
We create another class with the same requirements we call it **SolidProductB2**
Thee code for class **SolidProductB2** will be:
```c#
class SolidProductB2: ProductB
{
   public string UsefulFunctionB()
   {
      return "The result of the product B2.";
   }
   public string AnotherUsefulFunctionB(ProductA collaborator)
   {
      var result = collaborator.UsefulFunctionA();
      return $"The result of the B2 collaborating with the ({result})";
   }
}

```
Now that we have completed ProductB and ProductB, let's harness those classes in an interface.
Now let's create the factory.
We start with AbstractFactory interface.

```c#
public interface AbstractFactory
{
   ProductA CreateProductA();
   ProductB CreateProductB();
}
```
ProductA and ProductB are interfaces requiring a "UsefulFunction"
We now create a couple Factories we call **ConcreteFactory1** and **Factory2**.
We start with **ConcreteFactory1**.
The code for **ConcreteFactory1** is:
```c#
class ConcreteFactory1: AbstractFactory
{
   public ProductA CreateProductA()
   {
      return new SolidProductA1();
   }

   public ProductB CreateProductB()
   {
       return new SolidProductB1();
   }
}
```
Likewise for **ConcreteFactory2** we have:
```c#
class ConcreteFactory2: AbstractFactory
{
   public ProductA CreateProductA()
   {
      return new SolidProductA2();
   }

   public ProductB CreateProductB()
   {
      return new SolidProductB2();
   }
}
```
Now let's create a class called **Client**

using System;

```c#
	public void Main()
        {
            // The client code can work with any concrete factory class.
            Console.WriteLine("Client: Testing client code with the first factory type...");
            ClientMethod(new ConcreteFactory1());
            Console.WriteLine();

            Console.WriteLine("Client: Testing the same client code with the second factory type...");
            ClientMethod(new ConcreteFactory2());
        }

        public void ClientMethod(AbstractFactory factory)
        {
            var productA = factory.CreateProductA();
            var productB = factory.CreateProductB();

            Console.WriteLine(productB.UsefulFunctionB());
            Console.WriteLine(productB.AnotherUsefulFunctionB(productA));
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
The result of the product B2.
The result of the B2 collaborating with the (The result of the product A1.)

Client: Testing the same client code with the second factory type...
The result of the product B2.
The result of the B2 collaborating with the (The Ray Code is AWESOME!!!)

```

[Wikipedia](https://en.wikipedia.org/wiki/Abstract_factory_pattern)


----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)

