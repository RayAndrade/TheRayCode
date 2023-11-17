# TheRayCode
## Bridge c#

The **Abstraction** defines the interface for the *control* part of the two class hierarchies. 
It maintains a reference to an object of the Implementation hierarchy and delegates all of the real work to this object.
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
The Implementation defines the interface for all implementation classes.
It doesn't have to match the Abstraction's interface. In fact, the two interfaces can be entirely different. 
Typically the Implementation interface provides only primitive operations, while the Abstraction defines higher-level operations based on those primitives.
```c#
public interface IImplementation
{
   string OperationImplementation();
}
```

You can extend the Abstraction without changing the Implementation classes.
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

Each Concrete Implementation corresponds to a specific platform and implements the Implementation interface using that platform's API.

```c#
class ConcreteImplementationA : IImplementation
{
   public string OperationImplementation()
   {
       return "ConcreteImplementationA: The result in platform A.\n";
   }
}
```

```c#
class ConcreteImplementationB : IImplementation
{
   public string OperationImplementation()
   {
       return "ConcreteImplementationA: The result in platform B.\n";
   }
}
```

Except for the initialization phase, where an Abstraction object gets linked with a specific Implementation object, the client code should only depend on the Abstraction class. 
This way the client code can support any abstraction-implementation combination.

```c#
class Client
{
   public void ClientCode(Abstraction abstraction)
   {
       Console.Write(abstraction.Operation());
   }
}
```

The client code should be able to work with any pre-configured abstraction-implementation combination.

```c#
class Program
{
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
}
```

```run
Abstract: Base operation with:
ConcreteImplementationA: The result in platform A.

ExtendedAbstraction: Extended operation with:
ConcreteImplementationA: The result in platform B.
```


[Wikipedia](https://en.wikipedia.org/wiki/Bridge_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)





