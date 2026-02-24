[home](./page01.md)

[back](./page02.md)


The **Clown** class has two properties: name (a string) and catch prase (an instance of the Prase class).

The **Prase** is part of the **Clown** class

```
Clown
```

We also have a magic method **__clone()** for shallow cloning and a **deepClone()** method for deep cloning.

When you clone an object in PHP, by default it does a **shallow copy**. 

```
public $name;
public $chatchPrase;
```


```
public function __construct($name, Phrase $phrase) {
    $this->name = $name;
    $this->chatchPrase = $phrase;
}
```



A *shallow copy* means creating a new object and then copying the non-static fields of the current object to the new object. 

If a field is a reference type, the reference is copied but the referred object is not; hence the original and its clone refer to the same object.


[page 4](./page04.md)
