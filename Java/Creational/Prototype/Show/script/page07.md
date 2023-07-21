[home](./page01.md)

[back](./page06.md)

```
private static Person deepClonePerson(Person originalPerson) {
    try {
            // Perform deep cloning manually by creating new objects for each field
        Address originalAddress = originalPerson.getAddress();
        Address clonedAddress = new Address(originalAddress.getCity(), originalAddress.getState());
        return new Person(originalPerson.getName(), clonedAddress);
    } catch (Exception e) {
        e.printStackTrace();
        return null;
    }
}
```


[page 8](./page08.md)
