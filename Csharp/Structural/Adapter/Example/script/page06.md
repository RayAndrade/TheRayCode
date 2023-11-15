[home](./page01.md)

[back](./page05.md)

in Program

```
using System;
using System.Collections.Generic;
using Newtonsoft.Json;
```

in Main

```
ICustomer customer = new CustomerAdapter();
IEnumerable<CustomerDTO> data = customer.GetCustomers();
Console.WriteLine(JsonConvert.SerializeObject(data));
```

[page 7](./page07.md)
