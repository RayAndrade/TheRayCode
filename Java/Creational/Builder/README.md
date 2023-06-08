# [TheRayCode](../../../README.md) is AWESOME!!!

**[Creational Patterns](../README.md)** | **[Structural Patterns](../../Structural/README.md)** | **[Behavioral Patterns](../../Behavioral/README.md)**

**Java Builder Design Pattern**

|Pattern|   |   |   |   |
|---|---|---|---|---|
| Builder| [**C++**](../../../CPP/Creational/Builder/README.md) | [**C#**](../../../Csharp/Creational/Builder/README.md) | [Java](../../../Java/Creational/Builder/README.md) | [PHP](../../../PHP/Creational/Builder/README.md) | 

[script](./script/page01.md)

Dessert: This is the complex object that we are trying to build. It consists of multiple parts.

Firstly, let's create the **Dessert** class, this will be the object we're building:

```java
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


Then, let's create the **DessertBuilder** class, which implements the builder pattern:
DessertBuilder: This is the builder class that helps us construct a Dessert object step by step. The builder class typically contains a set of methods to configure each part of the object being built, and a build() method to finally create the object.

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

You can then create a Dessert object using the DessertBuilder class in your main method like so:

```
public class Main {
    public static void main(String[] args) {
        DessertBuilder builder = new DessertBuilder();
        Dessert applePie = builder.setName("Apple Pie")
                                   .setSugar(100)
                                   .setButter(50)
                                   .setBaked(true)
                                   .build();
        System.out.println(applePie);
    }
}
```

When you run this, you'll get the output:

```
Dessert{name='Apple Pie', sugar=100, butter=50, isBaked=true}
```

[TheRayCode.ORG](https://www.TheRayCode.org)

[RayAndrade.COM](https://www.RayAndrade.com)

[Facebook](https://www.facebook.com/TheRayCode/) | [Twitter @TheRayCode](https://www.twitter.com/TheRayCode/) | [YouTube](https://www.youtube.com/TheRayCode/)
