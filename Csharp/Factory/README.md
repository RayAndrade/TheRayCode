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
Note that the **Creator** may also provides some default implementation of the factory method.
Also note that, despite its name, the Creator's primary responsibility is not creating products. 
Usually, it contains some core business logic that relies on Product objects, returned by the factory method. 
Subclasses can indirectly change that business logic by overriding the factory method and returning a different type of product from it.

Despite its name, the Creator's primary responsibility is not creating products. 
Usually, it contains some core business logic that relies on Product objects, returned by a factory method. 
Subclasses can indirectly change that business logic by overriding the factory and returning a different type.
We add an abstract Product we call **FactoryMethod**.
We then add **SomeOperation** to the progect class. 

We now create a couple of classes that will use this *abstract class*.
Let's create the classes **Creator1** and **Creator2**.
We start with **Creator1** this class returns a *new* **Product1**.
```c#
class Creator1 : Creator
{
   public override Product FactoryMethod()
   {
      return new Product1();
   }
}
```
likewise, the code for **Creator2** will be like: 

```c#
class Creator2 : Creator
{
   public override Product FactoryMethod()
   {
      return new Product2();
   }
}
```

Let's  a **Director** class that will run the **Builder** class object.
The code for this class will be,
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

Now let's put this all together in **Client**.cs

```c#
class Client
{
    public void Main()
    {
        Console.WriteLine("App: Launched with the Creator1.");
        ClientCode(new Creator1());
           
        Console.WriteLine("");
        Console.WriteLine("App: Launched with the Creator2.");
        ClientCode(new Creator2());
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

and now let's run our work in **Program**.cs.

```c#
class Program
{
    static void Main(string[] args)
    {
        new Client().Main();
    }
}
```
When we run our program we have

```
App: Launched with the Creator1.
Client: I'm not aware of the creator's class,but it still works.
Creator: This creator's code has just worked with {From of Product1}

App: Launched with the Creator2.
Client: I'm not aware of the creator's class,but it still works.
Creator: This creator's code has just worked with {From of Product2}
```

Be good and happy programming
![The Factory Design Pattern](https://github.com/RayAndrade/TheRayCode/blob/main/UMLs/images/Factory110.png)

 
 
# TheRayCode
## heading 2
### heading 3
#### heading 4

[Github](https://www.TheRayCode.com)
