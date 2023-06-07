[home](./page01.md)

[back](./page01.md)

Then create the SandwichBuilder class in a file named **SandwichBuilder.php**:

**SandwichBuilder**: This is the builder class that helps us construct a Sandwich object step by step. The builder class typically contains a set of methods to configure each part of the object being built, and a build() method to finally create the object.


Create class

```
SandwichBuilder
```

variables

```
private $bread;
private $meat;
private $cheese;
private $veggies;
```

**setBread**

```
function setBread($bread) {
    $this->bread = $bread;
    return $this;
}
```

**setMeat**

```
function setMeat($meat) {
    $this->meat = $meat;
    return $this;
}
```

**setCheese**

```
function setCheese($cheese) {
    $this->cheese = $cheese;
    return $this;
}
```

and **setVeggies**

```
function setVeggies($veggies) {
    $this->veggies = $veggies;
    return $this;
}
```

Now lets build the **Sandwich**

```
function build() {
    return new Sandwich($this->bread, $this->meat, $this->cheese, $this->veggies);
}
```





[page 3](./page03.md)
