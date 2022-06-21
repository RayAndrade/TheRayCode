# TheRayCode
## Factory Design Pattern using c#


For our example of the **Factory** pattern we will create an interface we call **Product**.cs. 
This interface will require one method. The code for **Product** looks like the following:
```c#
public interface Product
{
   string Operation();
}
```
Next we will create a couple of *concrete products* to add them to our project. 
The name of these products will be **ProductA** and **ProductB**.
The code for **ProductA** will be:
```c#
class ProductA : Product
{
   public string Operation()
   {
      return "{From of ProductA}";
   }
}
```
And for the *concrete product* **ProductB** we have:
```c#
class ProductB : Product
{
   public string Operation()
   {
     return "{From of ProductB}";
   }
}
```
Now let's focus on the abstract class we call **Creator**.
It look's like:
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
Notice that the **Creator** also provides some default implementation of the factory method.
Also note that, despite its name, the Creator's primary responsibility is not creating products. 
Usually, it contains some core business logic that relies on Product objects, returned by the factory method. 
Subclasses can indirectly change that business logic by overriding the factory method and returning a different type of product from it.

Subclasses can indirectly change the business logic by overriding the factory and returning a different type.
We add an abstract Product we call **FactoryMethod**.
We then add **SomeOperation** to the progect class. 

We now create a couple of *abstract class*.
Let's create these classes **CreatorX** and **CreatorZ**.
We start with **CreatorX**. This class returns a *new* **ProductA**.
Let's look at the code:
```c#
class CreatorX : Creator
{
   public override Product FactoryMethod()
   {
      return new ProductA();
   }
}
```
likewise, the code for **CreatorZ** will be like: 

```c#
class CreatorZ : Creator
{
   public override Product FactoryMethod()
   {
      return new ProductB();
   }
}
```

Let's create a **Director** class that will run the **Builder** class object.
The code for this class will be:
```c#
 public class Director
 {
    private Builder _builder;
    
    public Builder Builder
    {
       set { _builder = value; } 
    }
       
    // The Director can construct several product variations using the same
    // building steps.
    public void buildMinimalViableProduct()
    {
       this._builder.BuildPartA();
    }
        
    public void buildFullFeaturedProduct()
    {
      this._builder.BuildPartA();
      this._builder.BuildPartB();
      this._builder.BuildPartC();
    }
 }
```

Now let's put this all together in the **Client**.cs class.

```c#
class Client
{
    public void Main()
    {
        Console.WriteLine("App: Launched with the CreatorX.");
        ClientCode(new CreatorX());
           
        Console.WriteLine("");
        Console.WriteLine("App: Launched with the CreatorZ.");
        ClientCode(new CreatorZ());
    }
    public void ClientCode(Creator creator)
    {
        // ...
        Console.WriteLine("Client: I'm not aware of the creator's class," +
                          "but it still works.\n" + creator.SomeOperation());
        // ...
    }
}
```

and now let's run our work in the **Program**.cs class. 
We create the following code:

```c#
class Program
{
    static void Main(string[] args)
    {
        new Client().Main();
    }
}
```
We are ready to run our program and thus we have:

```
App: Launched with the CreatorX.
Client: I'm not aware of the creator's class,but it still works.
Creator: This creator's code has just worked with {From of ProductA}

App: Launched with the CreatorZ.
Client: I'm not aware of the creator's class,but it still works.
Creator: This creator's code has just worked with {From of ProductB}
```

Be good and happy programming


[Wikipedia](https://en.wikipedia.org/wiki/Factory_method_pattern/)

![Factory](https://github.com/RayAndrade/TheRayCode/blob/main/UMLs/images/Factory.png)
----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)


