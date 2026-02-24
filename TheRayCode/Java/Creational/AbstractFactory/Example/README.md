
[script](./script/page01.md)

openjdk20

To implement the Abstract Factory Design Pattern in Java using OpenJDK-20, we’ll create a simple example involving a family of products: `Chair` and `Table` with different types (e.g., `Modern` and `Victorian`). The example follows the structure from the “Design Patterns” book by the Gang of Four.

The pattern will include:
1. Abstract product interfaces for `Chair` and `Table`.
2. Concrete product classes for different types of chairs and tables (e.g., `ModernChair`, `VictorianChair`, `ModernTable`, and `VictorianTable`).
3. An abstract factory interface called `FurnitureFactory` and concrete factories for creating the products.
4. A `Main` class to demonstrate the pattern.

### Class Creation Order

1. **Chair.java** - Interface for chairs.
2. **Table.java** - Interface for tables.
3. **ModernChair.java** - Concrete implementation of `Chair`.
4. **VictorianChair.java** - Concrete implementation of `Chair`.
5. **ModernTable.java** - Concrete implementation of `Table`.
6. **VictorianTable.java** - Concrete implementation of `Table`.
7. **FurnitureFactory.java** - Interface for the abstract factory.
8. **ModernFurnitureFactory.java** - Concrete factory for creating modern furniture.
9. **VictorianFurnitureFactory.java** - Concrete factory for creating Victorian furniture.
10. **Main.java** - Demonstrates the pattern.

### 1. Chair.java

```java
// Chair.java
public interface Chair {
    void sitOn();
}
```

**Explanation:**  
- This interface defines a common method `sitOn()` for all chair types.

### 2. Table.java

```java
// Table.java
public interface Table {
    void placeItems();
}
```

**Explanation:**  
- This interface defines a common method `placeItems()` for all table types.

### 3. ModernChair.java

```java
// ModernChair.java
public class ModernChair implements Chair {
    @Override
    public void sitOn() {
        System.out.println("Sitting on a modern chair.");
    }
}
```

**Explanation:**  
- This class implements the `Chair` interface and provides behavior specific to a modern chair.

### 4. VictorianChair.java

```java
// VictorianChair.java
public class VictorianChair implements Chair {
    @Override
    public void sitOn() {
        System.out.println("Sitting on a Victorian chair.");
    }
}
```

**Explanation:**  
- This class implements the `Chair` interface and provides behavior specific to a Victorian chair.

### 5. ModernTable.java

```java
// ModernTable.java
public class ModernTable implements Table {
    @Override
    public void placeItems() {
        System.out.println("Placing items on a modern table.");
    }
}
```

**Explanation:**  
- This class implements the `Table` interface and provides behavior specific to a modern table.

### 6. VictorianTable.java

```java
// VictorianTable.java
public class VictorianTable implements Table {
    @Override
    public void placeItems() {
        System.out.println("Placing items on a Victorian table.");
    }
}
```

**Explanation:**  
- This class implements the `Table` interface and provides behavior specific to a Victorian table.

### 7. FurnitureFactory.java

```java
// FurnitureFactory.java
public interface FurnitureFactory {
    Chair createChair();
    Table createTable();
}
```

**Explanation:**  
- This interface defines the methods `createChair()` and `createTable()` for creating products.

### 8. ModernFurnitureFactory.java

```java
// ModernFurnitureFactory.java
public class ModernFurnitureFactory implements FurnitureFactory {
    @Override
    public Chair createChair() {
        return new ModernChair();
    }

    @Override
    public Table createTable() {
        return new ModernTable();
    }
}
```

**Explanation:**  
- This concrete factory implements the `FurnitureFactory` interface and creates modern versions of `Chair` and `Table`.

### 9. VictorianFurnitureFactory.java

```java
// VictorianFurnitureFactory.java
public class VictorianFurnitureFactory implements FurnitureFactory {
    @Override
    public Chair createChair() {
        return new VictorianChair();
    }

    @Override
    public Table createTable() {
        return new VictorianTable();
    }
}
```

**Explanation:**  
- This concrete factory implements the `FurnitureFactory` interface and creates Victorian versions of `Chair` and `Table`.

### 10. Main.java

```java
// Main.java
public class Main {
    public static void main(String[] args) {
        FurnitureFactory modernFactory = new ModernFurnitureFactory();
        FurnitureFactory victorianFactory = new VictorianFurnitureFactory();

        Chair modernChair = modernFactory.createChair();
        Table modernTable = modernFactory.createTable();
        Chair victorianChair = victorianFactory.createChair();
        Table victorianTable = victorianFactory.createTable();

        modernChair.sitOn();
        modernTable.placeItems();
        victorianChair.sitOn();
        victorianTable.placeItems();
    }
}
```

**Explanation:**  
- This class demonstrates the Abstract Factory Pattern by creating instances of `ModernFurnitureFactory` and `VictorianFurnitureFactory`.
- It then uses these factories to create different types of chairs and tables and calls their methods.

### Running the Code

When you run the code, you should see the following output:

```
Sitting on a modern chair.
Placing items on a modern table.
Sitting on a Victorian chair.
Placing items on a Victorian table.
```

This output verifies that the abstract factories are correctly creating the different types of products according to the specified type (`Modern` or `Victorian`). Each product’s behavior is implemented separately, and the factory classes manage the creation process, keeping client code (`Main`) simple and decoupled from specific product implementations.
