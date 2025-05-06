
[top](../README.md)

# 🧱 Builder Design Pattern – Java Implementation (Gang of Four)

---

## 🔍 Overview

The **Builder pattern** is a *creational* design pattern that separates the **construction of a complex object** from its **representation**. This allows the same construction process to create different representations. The pattern is ideal for scenarios where an object has many optional parts or a complex construction sequence.

---

## ✅ Class-by-Class Description (with Code)

---

### 1. `Product.java`  
**Purpose**: Represents the complex object that is being built. It contains multiple parts (`partA`, `partB`, `partC`), each assigned during the build process.  

**Key Methods**:
- `setPartA(String partA)`: Assigns content to Part A.
- `setPartB(String partB)`: Assigns content to Part B.
- `setPartC(String partC)`: Assigns content to Part C.
- `show()`: Outputs the current state of the product.

```java
=======
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
>>>>>>> 167bfb7a (*)
public class Product {
    private List<String> parts = new ArrayList<>();

    public void add(String part) {
        parts.add(part);
    }

<<<<<<< HEAD
    public void setPartB(String partB) {
        this.partB = partB;
    }

    public void setPartC(String partC) {
        this.partC = partC;
    }

    public void show() {
        System.out.println("Product Parts:");
        System.out.println("PartA: " + partA);
        System.out.println("PartB: " + partB);
        System.out.println("PartC: " + partC);
=======
    public void show() {
        System.out.println("Product parts:");
        for (String part : parts) {
            System.out.println("- " + part);
        }
>>>>>>> 167bfb7a (*)
    }
}
```

---

<<<<<<< HEAD
### 2. `Builder.java`  
**Purpose**: This is an **interface** that defines the abstract steps needed to build the product. It ensures a consistent process across different builders.

**Key Methods**:
- `buildPartA()`: Specifies how to build Part A.
- `buildPartB()`: Specifies how to build Part B.
- `buildPartC()`: Specifies how to build Part C.
- `getResult()`: Returns the final assembled `Product`.

```java
public interface Builder {
    void buildPartA();
    void buildPartB();
    void buildPartC();
    Product getResult();
=======
## 🧱 2. `Builder.java`

```java
// Abstract builder interface
public abstract class Builder {
    public abstract void buildPartA();
    public abstract void buildPartB();
    public abstract Product getResult();
>>>>>>> 167bfb7a (*)
}
```

---

<<<<<<< HEAD
### 3. `ConcreteBuilder.java`  
**Purpose**: Implements the `Builder` interface. It contains logic to assemble the parts of the product step-by-step and maintains an internal reference to the `Product` being constructed.

**Key Methods**:
- `buildPartA()`: Builds and assigns a value to `partA` in `Product`.
- `buildPartB()`: Builds and assigns a value to `partB` in `Product`.
- `buildPartC()`: Builds and assigns a value to `partC` in `Product`.
- `getResult()`: Returns the fully constructed `Product`.

```java
public class ConcreteBuilder implements Builder {
=======
## 🧱 3. `ConcreteBuilder.java`

```java
// Concrete builder implementation
public class ConcreteBuilder extends/implements Builder {
>>>>>>> 167bfb7a (*)
    private Product product = new Product();

    @Override
    public void buildPartA() {
<<<<<<< HEAD
        product.setPartA("PartA built by ConcreteBuilder");
=======
        product.add("PartA");
>>>>>>> 167bfb7a (*)
    }

    @Override
    public void buildPartB() {
<<<<<<< HEAD
        product.setPartB("PartB built by ConcreteBuilder");
    }

    @Override
    public void buildPartC() {
        product.setPartC("PartC built by ConcreteBuilder");
=======
        product.add("PartB");
>>>>>>> 167bfb7a (*)
    }

    @Override
    public Product getResult() {
        return product;
    }
}
```

---

<<<<<<< HEAD
### 4. `Director.java`  
**Purpose**: The `Director` class defines the **order in which the building steps are executed**. It uses a `Builder` to perform the steps and produce a `Product`.

**Key Methods**:
- `construct()`: Calls `buildPartA()`, `buildPartB()`, and `buildPartC()` on the builder to assemble the product.

```java
=======
## 🎯 4. `Director.java`

```java
// Director that defines the order of building
>>>>>>> 167bfb7a (*)
public class Director {
    public void construct(Builder builder) {
        builder.buildPartA();
        builder.buildPartB();
<<<<<<< HEAD
        builder.buildPartC();
=======
>>>>>>> 167bfb7a (*)
    }
}
```

---

<<<<<<< HEAD
### 5. `index.java`  
**Purpose**: This is the **client** class. It demonstrates how to use the `Builder`, `Director`, and `Product` to create a complete object.

**Key Steps**:
- Create a `ConcreteBuilder` object.
- Assign it to a `Director`.
- Use the director’s `construct()` method to build the object.
- Retrieve the finished product via `getResult()`.
- Display the product via `show()`.

```java
public class index {
    public static void main(String[] args) {
        Builder builder = new ConcreteBuilder();
        Director director = new Director(builder);
        director.construct();
        Product product = builder.getResult();
        product.show();
    }
}
```
When we compile and run we get:
```
Product Parts:
PartA: PartA built by ConcreteBuilder
PartB: PartB built by ConcreteBuilder
PartC: PartC built by ConcreteBuilder
```


---

## 📦 Final Notes

- Each class should be saved in its **own `.java` file**.
- Make sure all `.java` files are in the **same directory** for easy compilation.
- To compile and run:
```bash
javac *.java
java index
```
=======
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

>>>>>>> 167bfb7a (*)
