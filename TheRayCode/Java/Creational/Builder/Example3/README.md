[top](../README.md)

The **Builder design pattern**, as described by the Gang of Four, separates the construction of a complex object from its representation, allowing the same construction process to create different representations. Here's how it can be implemented in Java, adhering to the UML diagram provided in the book:

---

### Order of Creation
1. **Product**: The class of the complex object to be constructed.
2. **Builder (Interface)**: Specifies an abstract interface for creating parts of the Product.
3. **ConcreteBuilder**: Implements the Builder interface to construct and assemble parts of the Product.
4. **Director**: Constructs an object using the Builder interface.
5. **Client**: Directly interacts with the Director to create the Product.

---

### Code Example

```java
// 1. Product
public class Product {
    private String partA;
    private String partB;
    private String partC;

    public void setPartA(String partA) {
        this.partA = partA;
    }

    public void setPartB(String partB) {
        this.partB = partB;
    }

    public void setPartC(String partC) {
        this.partC = partC;
    }

    @Override
    public String toString() {
        return "Product [PartA=" + partA + ", PartB=" + partB + ", PartC=" + partC + "]";
    }
}

// 2. Builder (Interface)
public interface Builder {
    void buildPartA();
    void buildPartB();
    void buildPartC();
    Product getResult();
}

// 3. ConcreteBuilder
public class ConcreteBuilder implements Builder {
    private Product product = new Product();

    @Override
    public void buildPartA() {
        product.setPartA("Concrete Part A");
    }

    @Override
    public void buildPartB() {
        product.setPartB("Concrete Part B");
    }

    @Override
    public void buildPartC() {
        product.setPartC("Concrete Part C");
    }

    @Override
    public Product getResult() {
        return product;
    }
}

// 4. Director
public class Director {
    private Builder builder;

    public Director(Builder builder) {
        this.builder = builder;
    }

    public void construct() {
        builder.buildPartA();
        builder.buildPartB();
        builder.buildPartC();
    }
}

// 5. Client
public class Client {
    public static void main(String[] args) {
        Builder builder = new ConcreteBuilder();
        Director director = new Director(builder);
        director.construct();

        Product product = builder.getResult();
        System.out.println(product);
    }
}
```

---

### Execution Flow
1. **Product** is the complex object being built.
2. **Builder** defines an interface for creating parts of the Product.
3. **ConcreteBuilder** implements the interface and defines the actual building steps.
4. **Director** manages the building process using the Builder.
5. **Client** specifies the required construction and retrieves the result.

When you run the `Client` class, the output will display the constructed `Product` with its parts initialized as defined by the `ConcreteBuilder`.
