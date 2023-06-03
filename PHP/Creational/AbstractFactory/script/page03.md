[home](./page01.md)

[back](./page02.md)


Namespace: **TheRayCode\AbstractFactory**

We **also** create a class for the Dog object

```
Dog
```

some code for the **class**
```
private string $species;
```

```
public function __construct(string $species)
{
   $this->species = $species;
}
```

```
public function makeSound(): string
{
    return "Woof!";
}
```

```
public function getSpecies(): string
{
    return $this->species;
}
```


[page 4](./page04.md)

