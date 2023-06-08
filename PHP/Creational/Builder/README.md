# [TheRayCode](../../../README.md) is AWESOME!!!

**[Creational Patterns](../README.md)** | **[Structural Patterns](../../Structural/README.md)** | **[Behavioral Patterns](../../Behavioral/README.md)**

**C# Creational Patterns**

|Pattern|   |   |   |   |
|---|---|---|---|---|
| Builder| [**C++**](../../../CPP/Creational/Builder/README.md) | [**C#**](../../../Csharp/Creational/Builder/README.md) | [Java](../../../Java/Creational/Builder/README.md) | [PHP](../../../PHP/Creational/Builder/README.md) |

[script](./script/page01.md)

In PHP, you might create a Sandwich class as follows in a file named Sandwich.php:

**Sandwich**: This is the complex object that we are trying to build. It consists of multiple parts (bread, meat, cheese, and veggies).

```
class SandwichBuilder {
    private $bread;
    private $meat;
    private $cheese;
    private $veggies;

    function setBread($bread) {
        $this->bread = $bread;
        return $this;
    }

    function setMeat($meat) {
        $this->meat = $meat;
        return $this;
    }

    function setCheese($cheese) {
        $this->cheese = $cheese;
        return $this;
    }

    function setVeggies($veggies) {
        $this->veggies = $veggies;
        return $this;
    }

    function build() {
        return new Sandwich($this->bread, $this->meat, $this->cheese, $this->veggies);
    }
}
```

Finally, use the **SandwichBuilder** in your main PHP file (**index.php**):
**SandwichBuilder**: This is the builder class that helps us construct a Sandwich object step by step. The builder class typically contains a set of methods to configure each part of the object being built, and a build() method to finally create the object.


```
<?php

include 'Sandwich.php';
include 'SandwichBuilder.php';

$sandwichBuilder = new SandwichBuilder();

$sandwich = $sandwichBuilder->setBread("whole grain")
                            ->setMeat("turkey")
                            ->setCheese("swiss")
                            ->setVeggies("lettuce, tomato, onions")
                            ->build();

echo $sandwich;
```

Your result shouled be


```
```

[TheRayCode.ORG](https://www.TheRayCode.org)

[RayAndrade.COM](https://www.RayAndrade.com)

[Facebook](https://www.facebook.com/TheRayCode/) | [Twitter @TheRayCode](https://www.twitter.com/TheRayCode/) | [YouTube](https://www.youtube.com/TheRayCode/)
