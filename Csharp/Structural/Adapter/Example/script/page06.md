[home](./page01.md) | [back](./page05.md) | [next](./page07.md)

**CustomerAdapter**
```
CustomerAdapter
```
extend with
```
 :CustomerManager, ICustomer
```

```
public IEnumerable<CustomerDTO> GetCustomers()
  {
    var data = base.GetData();
    IEnumerable<Customer> customers = JsonConvert.DeserializeObject<IEnumerable<Customer>>(data);
    return customers.Select(x => new CustomerDTO
    {
        CustomerId = x.Id,
        FullName = x.Name,
        AddressDetails = x.Address,
        Mobile = x.Contact
    });
}
```




[page 7](./page07.md)
