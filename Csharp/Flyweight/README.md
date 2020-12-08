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
```
create private varable **_sharedState**

```csharp
private Car _sharedState;

```
initilize **Flyweight**

```csharp

public Flyweight(Car car)
{
    this._sharedState = car;
}

```
create **Operation** and pass into it **Car**

```csharp

public void Operation(Car uniqueState)
{
```
we create varables s & u as JSon SerializeObjects

```cshape
     string s = JsonConvert.SerializeObject(this._sharedState);
     string u = JsonConvert.SerializeObject(uniqueState);
```
and then pass **s** & **u** into a message for display

```csharp
     Console.WriteLine($"Flyweight: Displaying shared {s} and unique {u} state.");
}

```

next create 
**FlyweightFactory.cs**
```csharp

private List<Tuple<Flyweight, string>> flyweights = new List<Tuple<Flyweight, string>>();

```
we create   **FlyweightFactory** and pass into it an array of **Car**

```csharp

public FlyweightFactory(params Car[] args)
{
    foreach (var elem in args)
    {
        flyweights.Add(new Tuple<Flyweight, string>(new Flyweight(elem), this.getKey(elem)));
    }
}

```
Thie returns a Flyweight's string hash for a given state.
we create **getKey** and pass into it a car key

```csharp

// Returns a Flyweight's string hash for a given state.
public string getKey(Car key)
{
```
setup elements as a list array and then add some elements to it
```csharp
   List<string> elements = new List<string>();

   elements.Add(key.Model);
   elements.Add(key.Color);
   elements.Add(key.Company);
```
test to see if the element is null and then add it and the sort
```csharp
   if (key.Owner != null && key.Number != null)
   {
      elements.Add(key.Number);
      elements.Add(key.Owner);
   }

   elements.Sort();
   return string.Join("_", elements);
}
```
Returns an existing Flyweight with a given state or creates a new one.

```csharp
 
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
```
listFlyweights

```csharp
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
**Program.cs**

The client code usually creates a bunch of pre-populated flyweights in the initialization stage of the application.

```csharp

      public static void addCarToPoliceDatabase(FlyweightFactory factory, Car car)
      {
      Console.WriteLine("\nClient: Adding a car to database.");

      var flyweight = factory.GetFlyweight(new Car {
          Color = car.Color,
          Model = car.Model,
          Company = car.Company
      });
      flyweight.Operation(car);
```

```csharp

```csharp
static void Main(string[] args)
{
   var factory = new FlyweightFactory(
          new Car { Company = "Chevrolet", Model = "Camaro2018", Color = "pink" },
          new Car { Company = "Mercedes Benz", Model = "C300", Color = "black" },
          new Car { Company = "Mercedes Benz", Model = "C500", Color = "red" },
          new Car { Company = "BMW", Model = "M5", Color = "red" },
          new Car { Company = "BMW", Model = "X6", Color = "white" }
     );
     factory.listFlyweights();

```
let's now add two cars to our dabase that differ only by **model**
```csharp


     addCarToPoliceDatabase(factory, new Car {
            Number = "CL234IR",
            Owner = "James Doe",
            Company = "BMW",
            Model = "M5",
            Color = "red"
        });

        addCarToPoliceDatabase(factory, new Car {
           Number = "CL234IR",
           Owner = "James Doe",
           Company = "BMW",
           Model = "X1",
           Color = "red"
       });

            factory.listFlyweights();
        }
```



   }
}
    

```
```csharp
```


## heading 2
### heading 3
#### heading 4

[Github](https://www.TheRayCode.com)
