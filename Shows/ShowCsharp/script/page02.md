[home](./page01.md)

[back](./page01.md)

ext, we'll define the **Person** class that contains the **Address** object:

we start with the **Person** object

```
Person
```

add code to for inialaton

```
public string Name { get; set; }
public Address Address { get; set; }

public Person(string name, Address address)
{
    Name = name;
    Address = address;
}
```

For a **ShallowCopy**

```
public Person ShallowCopy()
{
    return (Person)this.MemberwiseClone();
}
```

[page 3](./page03.md)
