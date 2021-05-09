# TheRayCode
## Chain-of-responsibility pattern c#

The Handler interface declares a method for building the chain of handlers.
It also declares a method for executing a request.
```c#
public interface Handler
{
    Handler SetNext(Handler handler);
    object Handle(object request);
}
```
The default chaining behavior can be implemented inside a base handler class.
Returning a handler from here will let us link handlers in a convenient way like this:
mouse.SetNext(cat).SetNext(dog);

AbstractHandler.cs
```c#
abstract class AbstractHandler : Handler
{
    private Handler _nextHandler;
    public Handler SetNext(Handler handler)
    {
        this._nextHandler = handler;
        return handler;
    }
        
    public virtual object Handle(object request)
    {
        if (this._nextHandler != null)
        {
            return this._nextHandler.Handle(request);
        }
        else
        {
            return null;
        }
    }
}
```
All Concrete Handlers either handle a request or pass it to the next handler in the chain.
First we create a MouseHandler.cs
```c#
class MouseHandler : AbstractHandler
{
    public override object Handle(object request)
    {
       if ((request as string) == "Cheese")
       {
           return $"Mouse: I'll eat the {request.ToString()}.\n";
       }
       else
       {
           return base.Handle(request);
       }
    }
}
```
Now we create a CatHandler.cs
```c#
class CatHandler : AbstractHandler
{
    public override object Handle(object request)
    {
        if (request.ToString() == "Catnip")
        {
            return $"Cat: I love {request.ToString()}.\n";
        }
        else
        {
            return base.Handle(request);
        }
    }
}
```

An fially we add a DogHandler.cs.
```c#
class DogHandler : AbstractHandler
{
    public override object Handle(object request)
    {
        if (request.ToString() == "Bone")
        {
            return $"Dog: Oh my!! I'll eat the {request.ToString()}.\n";
        }
        else
        {
            return base.Handle(request);
        }
    }
}
```
The client code is usually suited to work with a single handler. 
In most cases, it is not even aware that the handler is part of a chain.

```c#
class Client
{
    public static void ClientCode(AbstractHandler handler)
    {
        foreach (var food in new List<string> { "Bone", "Catnip", "Cheese" })
        {
            Console.WriteLine($"Client: Who wants a {food}?");
            var result = handler.Handle(food);
            if (result != null)
            {
                Console.Write($"   {result}");
            }
            else
            {
                Console.WriteLine($"   {food} was left untouched.");
            }
        }
    }
}
```
The other part of the client code constructs the actual chain.
The client should be able to send a request to any handler, not just the first one in the chain.

Program.cs
```c#
class Program
{
    static void Main(string[] args)
    {
        var mouse = new MouseHandler();
        var cat = new CatHandler();
        var dog = new DogHandler();

        mouse.SetNext(cat).SetNext(dog);

        Console.WriteLine("Chain: Dog > Cat > Mouse\n");
        Client.ClientCode(mouse);
        Console.WriteLine();

        Console.WriteLine("Subchain: Dog > Cat\n");
        Client.ClientCode(cat);
    }
}
```
Let's compile and run.
We should get:
```run
Chain: Dog > Cat > Mouse
Client: Who wants a Bone?
   Dog: Oh my!! I'll eat the Bone.
Client: Who wants a Catnip?
   Cat: I love Catnip.
Client: Who wants a Cheese?
   Mouse: I'll eat the Cheese.

Subchain: Dog > Cat
Client: Who wants a Bone?
   Dog: Oh my!! I'll eat the Bone.
Client: Who wants a Catnip?
   Cat: I love Catnip.
Client: Who wants a Cheese?
   Cheese was left untouched.
```
Or shall I say the cheese stands alone.

The Ray Code is AWESOME!!!

[Wikipedia](https://en.wikipedia.org/wiki/Chain-of-responsibility_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)
