[back](./page08.md)




Now let's create a **Program** class for our demonstrateion. 

```csharp
internal static class Program
{
    public void Main()
    { }
}
```
The client code works with an instance of a concrete creator, albeit through its base interface. 
As long as the client keeps working with the creator via the base interface, you can pass it any creator's subclass.

```csharp

public static void ClientCode(Creator creator)
{
     Console.WriteLine("Program: I'm not aware of the creator's class," +
         "but it still works.\n" + creator.SomeOperation());
}
```
So we add the following to the **Main** method:

```csharp

Console.WriteLine("App: Launched with the CreatorX.");
ClientCode(new CreatorX());
            
Console.WriteLine("");

Console.WriteLine("App: Launched with the CreatorY.");
ClientCode(new CreatorY());

```


[page 10](./page10.md)
