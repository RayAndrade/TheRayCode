
# [TheRayCode](../../README.md) is AWESOME!!!

**[Creational Patterns](../README.md)** | **[Structural Patterns](../Structural/README.md)** | **[Behavioral Patterns](../Behavioral/README.md)**

**Java Creational Patterns**


|Pattern|   |   |   |   |
|---|---|---|---|---|
| **Builder** | [**C++**](../../../CPP/Creational/Builder/README.md) | [**C#**](../../../Csharp/Creational/Builder/README.md) | [Java](../../../Java/Creational/Builder/README.md) | [PHP](../../../PHP/Creational/Builder/README.md) |

**Java Abstract Factory Design Pattern**

[script](./script/page01.md)

Here is a brief explanation of each class, abstract class and *interface* in the example:

First, let's create the **Dessert class**, this will be the object we're building:

```
public class Dessert {
    private final String name;
    private final int sugar;  // grams
    private final int butter; // grams
    private final boolean isBaked;

    public Dessert(String name, int sugar, int butter, boolean isBaked) {
        this.name = name;
        this.sugar = sugar;
        this.butter = butter;
        this.isBaked = isBaked;
    }
    @Override
    public String toString() {
        return "Dessert{" +
                "name='" + name + '\'' +
                ", sugar=" + sugar +
                ", butter=" + butter +
                ", isBaked=" + isBaked +
                '}';
    }
}
```

Then, let's create the **DessertBuilder class**, which implements the *builder pattern*:

Step 
- 1.Set the name
- 2. **setSugar()**
- 3. **setButter()**
- 4. **setBaked()**

Last we build it with **build()**

```
public class DessertBuilder {
    private String name;
    private int sugar;
    private int butter;
    private boolean isBaked;

    public DessertBuilder setName(String name) {
        this.name = name;
        return this;
    }
    public DessertBuilder setSugar(int sugar) {
        this.sugar = sugar;
        return this;
    }
    public DessertBuilder setButter(int butter) {
        this.butter = butter;
        return this;
    }
    public DessertBuilder setBaked(boolean isBaked) {
        this.isBaked = isBaked;
        return this;
    }

    public Dessert build() {
        return new Dessert(name, sugar, butter, isBaked);
    }
}
```

You can then create a Dessert object using the DessertBuilder class in your **main method** like so:


```
public static void main(String[] args) {
    DessertBuilder builder = new DessertBuilder();
    Dessert applePie = builder.setName("Apple Pie")
            .setSugar(100)
            .setButter(50)
            .setBaked(true)
            .build();
    System.out.println(applePie);
}
```


When we compile and run we get:
```
Dessert{name='Apple Pie', sugar=100, butter=50, isBaked=true}
```












