# TheRayCode
TheRayCode PHP 
# TheRayCode

**Car.cs**
```csharp

public class Car
{
   public string Owner { get; set; }
   public string Number { get; set; }
   public string Company { get; set; }
   public string Model { get; set; }
   public string Color { get; set; }
 }
 
```
**Flyweight.cs**
```csharp
private Car _sharedState;

public Flyweight(Car car)
{
    this._sharedState = car;
}

public void Operation(Car uniqueState)
{
     string s = JsonConvert.SerializeObject(this._sharedState);
     string u = JsonConvert.SerializeObject(uniqueState);
     Console.WriteLine($"Flyweight: Displaying shared {s} and unique {u} state.");
}

```

**FlyweightFactory.cs**
```csharp

private List<Tuple<Flyweight, string>> flyweights = new List<Tuple<Flyweight, string>>();

public FlyweightFactory(params Car[] args)
{
    foreach (var elem in args)
    {
        flyweights.Add(new Tuple<Flyweight, string>(new Flyweight(elem), this.getKey(elem)));
    }
}

// Returns a Flyweight's string hash for a given state.
public string getKey(Car key)
{
   List<string> elements = new List<string>();

   elements.Add(key.Model);
   elements.Add(key.Color);
   elements.Add(key.Company);

   if (key.Owner != null && key.Number != null)
   {
      elements.Add(key.Number);
      elements.Add(key.Owner);
   }

   elements.Sort();
   return string.Join("_", elements);
}

// Returns an existing Flyweight with a given state or creates a new
// one.
public Flyweight GetFlyweight(Car sharedState)
{
    string key = this.getKey(sharedState);
    if (flyweights.Where(t => t.Item2 == key).Count() == 0)
    {
         Console.WriteLine("FlyweightFactory: Can't find a flyweight, creating new one.");
         this.flyweights.Add(new Tuple<Flyweight, string>(new Flyweight(sharedState), key));
    }
    else
    {
        Console.WriteLine("FlyweightFactory: Reusing existing flyweight.");
    }
    return this.flyweights.Where(t => t.Item2 == key).FirstOrDefault().Item1;
}

public void listFlyweights()
{
    var count = flyweights.Count;
    Console.WriteLine($"\nFlyweightFactory: I have {count} flyweights:");
    foreach (var flyweight in flyweights)
    {
        Console.WriteLine(flyweight.Item2);
    }
}

```







## heading 2
### heading 3
#### heading 4

[Github](https://www.TheRayCode.com)
