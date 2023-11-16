[home](./page01.md) | [back](./page04.md) | [next](./page06.md)

**CustomerManager**
class
```
CustomerManager
```
with code
```
private List<Customer> cutomerList = new List<Customer>();
```
and:
```   
public CustomerManager()
{
    cutomerList.Add(new Customer
    {
        Id = 1,
        Name = "Cecil",
        Address = "USA",
        Contact = "(818)457-MATH"
    });
}
```
and:
```        
public string GetData()
{
    return JsonConvert.SerializeObject(cutomerList);
}
}
```


[page 6](./page06.md)
