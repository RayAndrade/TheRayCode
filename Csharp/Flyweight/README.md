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




## heading 2
### heading 3
#### heading 4

[Github](https://www.TheRayCode.com)
