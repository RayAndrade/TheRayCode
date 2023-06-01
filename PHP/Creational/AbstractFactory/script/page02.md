[home](./page01.md)

[back](./page01.md)

We start by creating an **class** for the Cat object

```
Cat
```

Namespace: **TheRayCode\AbstractFactory**

Directory: ../Show


**Temlplet class**

[Ok]

 we add some code

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
    return "Meow!";
}
```

```
public function getSpecies(): string
{
   return $this->species;
}
```


[page 3](./page03.md)
