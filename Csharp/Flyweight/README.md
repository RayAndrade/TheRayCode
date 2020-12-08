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
**Program.cs**
```csharp

static void Main(string[] args)
{
   // The client code usually creates a bunch of pre-populated
   // flyweights in the initialization stage of the application.
   var factory = new FlyweightFactory(
          new Car { Company = "Chevrolet", Model = "Camaro2018", Color = "pink" },
          new Car { Company = "Mercedes Benz", Model = "C300", Color = "black" },
          new Car { Company = "Mercedes Benz", Model = "C500", Color = "red" },
          new Car { Company = "BMW", Model = "M5", Color = "red" },
          new Car { Company = "BMW", Model = "X6", Color = "white" }
     );
     factory.listFlyweights();

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

      public static void addCarToPoliceDatabase(FlyweightFactory factory, Car car)
      {
      Console.WriteLine("\nClient: Adding a car to database.");

      var flyweight = factory.GetFlyweight(new Car {
          Color = car.Color,
          Model = car.Model,
          Company = car.Company
      });
```
The client code either stores or calculates extrinsic state and passes it to the flyweight's methods.

```csharp
      flyweight.Operation(car);
```
```csharp


   }
}
    

```
```csharp
```


## heading 2
### heading 3
#### heading 4

[Github](https://www.TheRayCode.com)
