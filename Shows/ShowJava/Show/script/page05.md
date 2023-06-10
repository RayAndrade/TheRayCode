[home](./page01.md)

[back](./page04.md)

We put all these pets into a **PetFactory**

```
PetFactory
```

and the code for **PetFactory** is

```
public Pet createPet(String type) {
    if (type.equals("bird")) {
        return new Bird();
    } else if (type.equals("dog")) {
        return new Dog();
    } else if (type.equals("cat")) {
        return new Cat();
    } else {
        throw new IllegalArgumentException("Unknown pet type: " + type);
    }
}
```


[page 6](./page06.md)
