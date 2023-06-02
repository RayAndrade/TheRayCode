[home](./page01.md)

In this show we will go over the Abstract Factory desigb pattern using Java.

In our example we start with the **Animal** *interface*.

```
Animal
```

This interface is the abstract definition of what all "animals" should be able to do -- every animal should have a species and should be able to make a sound. This is a contract that all classes implementing this interface must fulfill. Concrete Classe


```
public interface Animal {
    String getSpecies();
    String makeSound();
}
```


```
String getSpecies();
String makeSound();
```

[page 2](./page02.md)
