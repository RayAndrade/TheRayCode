[home](./page01.md)

[back](./page04.md)

we now create the class
```
CustomerAdapter
```

we extemd it with
```
 :CustomerManager, ICustomer
```

let's add

```
using System.Collections.Generic;
using System.Linq;
using Newtonsoft.Json;
```
to the top

```
public IEnumerable<CustomerDTO> GetCustomers() {  }
```

```
var data = base.GetData();
IEnumerable<Customer> customers = JsonConvert.DeserializeObject<IEnumerable<Customer>>(data);
```


```
return customers.Select(x => new CustomerDTO
{
    CustomerId = x.Id,
    FullName = x.Name,
    AddressDetails = x.Address,
    Mobile = x.Contact
 });
```



[page 6](./page06.md)
