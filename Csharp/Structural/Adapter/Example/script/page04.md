[home](./page01.md)

[back](./page03.md)

Let's create a
```
CustomerManager
```

we add
```
private List<Customer> cutomerList = new List<Customer>();
```
and
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

and
```
public string GetData()
{
    return JsonConvert.SerializeObject(cutomerList);
}
```


[page 5](./page05.md)
