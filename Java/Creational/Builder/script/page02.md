[home](./page01.md)

[back](./page01.md)

Firstly, let's create the **Dessert class**, this will be the object we're building:

```
Dessert
```

we add some varables

```
private final String name;
private final int sugar;  // grams
private final int butter; // grams
private final boolean isBaked;
```

Then our Dessert requirements

```
public Dessert(String name, int sugar, int butter, boolean isBaked) {
    this.name = name;
    this.sugar = sugar;
    this.butter = butter;
    this.isBaked = isBaked;
}
```

for our **toString** method

```
@Override
public String toString() {
    return "Dessert{" +
            "name='" + name + '\'' +
            ", sugar=" + sugar +
            ", butter=" + butter +
            ", isBaked=" + isBaked +
            '}';
}
```

[page 3](./page03.md)
