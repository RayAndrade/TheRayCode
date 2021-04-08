# TheRayCode
## Adapter Factory c#

This example illustrates the structure of the **Adapter** design pattern. It focuses on answering these questions:
* What classes does it consist of?
* What roles do these classes play?
* In what way the elements of the pattern are related?

We start with by createing a file called **Adaptee**.
The **Adaptee** contains some useful behavior, but its interface is incompatible with the existing client code. 
The **Adaptee** needs some adaptation before the client code can use it.
```c#
class Adaptee
{
   public string GetSpecificRequest()
   {
       return "Specific request.";
   }
}
```

Next we create the *interface* **ITarget**
The Target defines the domain-specific interface used by the client code.

```c#
public interface ITarget
{
   string GetRequest();
}
```
The **Adapter** class will br extended with the **ITarget** *interface*.

The **Adapter** makes the **Adaptee**'s interface compatible with the **ITarget**'s interface.

```c#
class Adapter : ITarget
{
   private readonly Adaptee _adaptee;

   public Adapter(Adaptee adaptee)
   {
       this._adaptee = adaptee;
   }

   public string GetRequest()
   {
       return $"This is '{this._adaptee.GetSpecificRequest()}'";
   }
}
```
![Factory](/UMLs/images/Adaptee-2.jpg)

We put this all together in the Main method in the Program class file.
```c#
static void Main(string[] args)
{
   Adaptee adaptee = new Adaptee();
   ITarget target = new Adapter(adaptee);

   Console.WriteLine("Adaptee interface is incompatible with the client.");
   Console.WriteLine("But with adapter client can call it's method.");

   Console.WriteLine(target.GetRequest());
}
```

When we compile and run we should get:
```run
Adaptee interface is incompatible with the client.
But with adapter client can call it's method.
This is 'Specific request.'
```
The Ray Code is AWESOME!!!

[Wikipedia](https://en.wikipedia.org/wiki/Adapter_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)
