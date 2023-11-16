[home](./page01.md) | [back](./page06.md) | [next](./page08.md)

at **Program.cs**


```
ICustomer customer = new CustomerAdapter();
IEnumerable<CustomerDTO> data = customer.GetCustomers();
Console.WriteLine(JsonConvert.SerializeObject(data));
```

[page 8](./page08.md)
