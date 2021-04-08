# TheRayCode
## Builder c#

Unlike other creational patterns, Builder doesn’t require products to have a common interface. 
That makes it possible to produce different products using the same construction process.
The Builder pattern can be recognized in a class, which has a single creation method and several methods to configure the resulting object. 

We start with the **Abstraction** *class*.
```c#
class Abstraction
{
   protected IImplementation _implementation;
        
   public Abstraction(IImplementation implementation)
   {
      this._implementation = implementation;
   }
        
   public virtual string Operation()
   {
      return "Abstract: Base operation with:\n" + 
      _implementation.OperationImplementation();
   }
}
```

Now let's create an *interface* we will call **IImplementation**.
```c#
public interface IImplementation
{
   string OperationImplementation();
}
```

Now let's create a couple of classes that will implement the **IImplementation** *interface*.
We will create two (you can create more if you want).
The first one we call **ConcreteImplementationA**
```c#
class ConcreteImplementationA : IImplementation
{
    public string OperationImplementation()
    {
        return "ConcreteImplementationA: The result in platform A.\n";
    }
}
```

And the other one we call **ConcreteImplementationB** (how original).
Its code looks like
```c#
class ConcreteImplementationB : IImplementation
{
   public string OperationImplementation()
   {
       return "ConcreteImplementationA: The result in platform B.\n";
   }
}
```

Let's create an **ExtendedAbstraction** class:
It too will be extened with the **Abstraction** *class*.
Its code looks like:
```c#
class ExtendedAbstraction : Abstraction
{
   public ExtendedAbstraction(IImplementation implementation) : base(implementation)
   {
   }
        
   public override string Operation()
   {
       return "ExtendedAbstraction: Extended operation with:\n" +
             base._implementation.OperationImplementation();
   }
}
```

Now let's create a **Client** class.
Except for the initialization phase, where an Abstraction object gets linked with a specific Implementation object, the client code should only depend on the **Abstraction** class. 
This way the **Client** code can support any abstraction-implementation combination.
```c#
class Client
{
   public void ClientCode(Abstraction abstraction)
   {
      Console.Write(abstraction.Operation());
   }
}
```

Now let's go to the **Program**.cs file to put this all together in the **Main** *method*.
```c#
static void Main(string[] args)
{
   Client client = new Client();
   Abstraction abstraction;
   abstraction = new Abstraction(new ConcreteImplementationA());
   client.ClientCode(abstraction);
            
   Console.WriteLine();
            
   abstraction = new ExtendedAbstraction(new ConcreteImplementationB());
   client.ClientCode(abstraction);
}
```

When we compile and run we get:
```run
Abstract: Base operation with:
ConcreteImplementationA: The result in platform A.

ExtendedAbstraction: Extended operation with:
ConcreteImplementationA: The result in platform B.
```

The Ray code is AWESOME!!!
----------------------------------------------------------------------------------------------------

[wikipedia](https://en.wikipedia.org/wiki/Builder_pattern)

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)

