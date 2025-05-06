
[top](../README.md)

Here's a complete **Java** implementation of the **Builder** design pattern, a **Creational** pattern, using the same class and method names found in the **Gang of Four (GoF)** book: *"Design Patterns: Elements of Reusable Object-Oriented Software"*. This version puts each class in its own `.java` file and structures them in an order that prevents dependency issues.

---

## ✅ Class Creation Order

1. `Product.java` – The complex object being built
2. `Builder.java` – Abstract builder interface
3. `ConcreteBuilder.java` – Implements the construction steps
4. `Director.java` – Directs the build process
5. `Main.java` – Client code for demonstration

---

## 🔨 1. `Product.java`

```java
import java.util.ArrayList;
import java.util.List;

// The complex object to be built
public class Product {
    private List<String> parts = new ArrayList<>();

    public void add(String part) {
        parts.add(part);
    }

    public void show() {
        System.out.println("Product parts:");
        for (String part : parts) {
            System.out.println("- " + part);
        }
    }
}
```

---

## 🧱 2. `Builder.java`

```java
// Abstract builder interface
public abstract class Builder {
    public abstract void buildPartA();
    public abstract void buildPartB();
    public abstract Product getResult();
}
```

---

## 🧱 3. `ConcreteBuilder.java`

```java
// Concrete builder implementation
public class ConcreteBuilder extends/implements Builder {
    private Product product = new Product();

    @Override
    public void buildPartA() {
        product.add("PartA");
    }

    @Override
    public void buildPartB() {
        product.add("PartB");
    }

    @Override
    public Product getResult() {
        return product;
    }
}
```

---

## 🎯 4. `Director.java`

```java
// Director that defines the order of building
public class Director {
    public void construct(Builder builder) {
        builder.buildPartA();
        builder.buildPartB();
    }
}
```

---

## 🚀 5. `Main.java`

```java
// Client code demonstrating usage of the Builder pattern
public class Main {
    public static void main(String[] args) {
        Director director = new Director();
        Builder builder = new ConcreteBuilder();

        director.construct(builder);
        Product product = builder.getResult();

        product.show(); // Output: Product parts: PartA, PartB
    }
}
```

---

## 💡 Summary

| Class             | Responsibility                                    |
| ----------------- | ------------------------------------------------- |
| `Product`         | Complex object that gets constructed              |
| `Builder`         | Abstract interface for building parts             |
| `ConcreteBuilder` | Builds and assembles the product step-by-step     |
| `Director`        | Controls the construction process using a builder |
| `Main`            | Demonstrates how to use the Builder pattern       |

---

## ⚙️ Key Characteristics of Builder in Java

* Builds **complex objects** in **step-by-step** fashion.
* Separates the **construction** and **representation**.
* Can reuse the same construction process to build **different representations**.

Would you like an example of a second `ConcreteBuilder` for a different product variant?

