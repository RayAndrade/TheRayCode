[home](./page01.md)

[back](./page05.md)

at main

```
try {
            // Create an original person
        Address originalAddress = new Address("New York", "NY");
        Person originalPerson = new Person("John Doe", originalAddress);

            // Perform shallow cloning
        Person shallowClone = (Person) originalPerson.clone();
            // Change the address of the shallow clone
        shallowClone.getAddress().setCity("Los Angeles");

            // Perform deep cloning using a custom method
        Person deepClone = deepClonePerson(originalPerson);
            // Change the address of the deep clone
        deepClone.getAddress().setCity("Chicago");

            // Print the original person and its shallow clone
        System.out.println("Original Person: " + originalPerson.getName()
                + " lives in " + originalPerson.getAddress().getCity());

        System.out.println("Shallow Clone: " + shallowClone.getName()
                + " lives in " + shallowClone.getAddress().getCity());

            // Print the deep clone
       System.out.println("Deep Clone: " + deepClone.getName()
               + " lives in " + deepClone.getAddress().getCity());

    } catch (CloneNotSupportedException e) {
        e.printStackTrace();
   }
```


[page 7](./page07.md)
