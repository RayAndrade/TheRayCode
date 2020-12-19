# TheRayCode
TheRayCode C# 
create **interface IHandler**
```cs
IHandler SetNext(IHandler handler);
object Handle(object request);
```
crete **abstract class AbstractHandler** extend it with **: IHandler**
```cs
private IHandler _nextHandler;

public IHandler SetNext(IHandler handler)
{
    this._nextHandler = handler;
        
    // Returning a handler from here will let us link handlers in a
    // convenient way like this:
    // monkey.SetNext(squirrel).SetNext(dog);
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
```
create **class SquirrelHandler** extend it with **: AbstractHandler**
override Handle add code:
```cs
if (request.ToString() == "Nut")
{
    return $"Squirrel: I'll eat the {request.ToString()}.\n";
}
else
{
   return base.Handle(request);
}

```
create **class DogHandler** extend it with **: AbstractHandler**
override Handle add code:
```cs
if (request.ToString() == "MeatBall")
{
    return $"Dog: I'll eat the {request.ToString()}.\n";
}
else
{
     return base.Handle(request);
}
```
create **class MonkeyHandler** extend it with **: AbstractHandler**
override Handle add code:
```cs
if ((request as string) == "Banana")
{
    return $"Monkey: I'll eat the {request.ToString()}.\n";
}
else
{
    return base.Handle(request);
}
```
create **class Client** 
using:
```cs
using System;
using System.Collections.Generic;
```
add code:

```cs

public static void ClientCode(AbstractHandler handler)
foreach (var food in new List<string> { "Nut", "Banana", "Cup of coffee" })
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
``

[Github](https://www.TheRayCode.com)
