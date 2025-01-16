# [TheRayCode](../../README.md) is AWESOME!!!

[top](../README.md)

**[Creational Patterns](../Creational/README.md)** | **[Structural Patterns](../Structural/README.md)** | **[Behavioral Patterns](../Behavioral/README.md)**

**Java Structural Patterns**

| examples using Java | | | |
|----|---|---|---|
|**[Adapter](./Adapter/README.md)**  | [C++](../../CPP/Structural/Adapter/README.md) | [C#](../../Csharp/Structural/Adapter/README.md) | [PHP](../../PHP/Structural/Adapter/README.md) |
|**[Bridge](./Bridge/README.md)**  | [C++](../../CPP/Structural/Bridge/README.md) | [C#](../../Csharp/Structural/Bridge/README.md) | [PHP](../../PHP/Structural/Bridge/README.md) |
|**[Composite](./Composite/README.md)**  | [C++](../../CPP/Structural/Composite/README.md) | [C#](../../Csharp/Structural/Composite/README.md) | [PHP](../../PHP/Structural/Composite/README.md) |
|**[Decorator](./Decorator/README.md)**  | [C++](../../CPP/Structural/Decorator/README.md) | [C#](../../Csharp/Structural/Decorator/README.md) | [PHP](../../PHP/Structural/Decorator/README.md) |
|**[Facade](./Facade/README.md)**  | [C++](../../CPP/Structural/Facade/README.md) | [C#](../../Csharp/Structural/Facade/README.md) | [PHP](../../PHP/Structural/Facade/README.md) |
|**[Flyweight](./Flyweight/README.md)**  | [C++](../../CPP/Structural/Flyweight/README.md) | [C#](../../Csharp/Structural/Flyweight/README.md) | [PHP](../../PHP/Structural/Flyweight/README.md) |
|**[Proxy](./Proxy/README.md)**  | [C++](../../CPP/Structural/Proxy/README.md) | [C#](../../Csharp/Structural/Proxy/README.md) | [PHP](../../PHP/Structural/Proxy/README.md) |

### **Outline for Structural Patterns in Java**

Structural design patterns focus on how classes and objects are organized and composed to build larger systems. They promote flexibility, scalability, and maintainability. Java’s object-oriented features, interfaces, abstract classes, and strong type system make it an ideal language for implementing structural patterns.

---

### **1. Adapter Pattern**
#### *Definition:*  
Converts the interface of a class into another interface clients expect.

#### *How It Fits the Category:*  
The Adapter pattern bridges incompatible interfaces, enabling previously incompatible classes to work together. In Java, it is useful for integrating legacy code or third-party libraries with modern applications.

#### *Implementation in Java:*
- **Class Adapter:** Use inheritance to adapt an existing class to the desired interface.
- **Object Adapter:** Use composition to adapt an instance of the adaptee class.
- Examples include adapting an old API to conform to a new client interface or integrating with external libraries.

---

### **2. Bridge Pattern**
#### *Definition:*  
Decouples an abstraction from its implementation so that the two can vary independently.

#### *How It Fits the Category:*  
The Bridge pattern separates abstraction and implementation into different hierarchies, allowing them to evolve independently. This pattern is commonly used in Java for scenarios like separating GUI functionality and appearance.

#### *Implementation in Java:*
- Define an abstraction (e.g., an abstract class) containing a reference to an implementor interface.
- Implement different versions of the abstraction and implementor independently.
- Dependency injection is often used to pass the implementor to the abstraction.

---

### **3. Composite Pattern**
#### *Definition:*  
Composes objects into tree structures to represent part-whole hierarchies.

#### *How It Fits the Category:*  
The Composite pattern allows individual objects and groups of objects to be treated uniformly. In Java, it’s frequently used in building GUI hierarchies, organizational structures, or file systems.

#### *Implementation in Java:*
- Define a `Component` interface with common methods for both leaf and composite objects.
- Implement `Leaf` (individual objects) and `Composite` (container objects) classes.
- Use collections like `List<Component>` to store child components in composite classes.

---

### **4. Decorator Pattern**
#### *Definition:*  
Dynamically adds responsibilities to an object without altering its structure.

#### *How It Fits the Category:*  
The Decorator pattern allows you to extend functionality dynamically by wrapping objects. In Java, it is useful for scenarios like adding logging, security, or caching layers without modifying the core logic.

#### *Implementation in Java:*
- Define a `Component` interface that both the core object and decorators implement.
- Create a `Decorator` abstract class that wraps a `Component` instance and delegates its methods.
- Implement concrete decorators that add specific functionality.

---

### **5. Facade Pattern**
#### *Definition:*  
Provides a simplified interface to a complex subsystem.

#### *How It Fits the Category:*  
The Facade pattern abstracts the complexity of multiple subsystems by exposing a single interface. In Java, it is commonly used in libraries and frameworks to simplify API usage.

#### *Implementation in Java:*
- Create a `Facade` class that exposes a unified interface to the subsystems.
- Encapsulate subsystem interactions within the `Facade`.
- Examples include simplifying database operations or using a graphics engine.

---

### **6. Flyweight Pattern**
#### *Definition:*  
Reduces memory usage by sharing common data between similar objects.

#### *How It Fits the Category:*  
The Flyweight pattern optimizes resource usage by minimizing object duplication. In Java, it’s frequently used for scenarios like managing large datasets or repeated objects, such as characters in a text editor.

#### *Implementation in Java:*
- Identify intrinsic (shared) and extrinsic (context-specific) states.
- Create a `FlyweightFactory` to manage shared objects, often using a `HashMap` to store reusable instances.
- Examples include the `Integer` cache in Java and rendering large-scale graphics.

---

### **7. Proxy Pattern**
#### *Definition:*  
Provides a surrogate or placeholder for another object to control access to it.

#### *How It Fits the Category:*  
The Proxy pattern adds control, security, or lazy initialization to object access. Java’s ability to create dynamic proxies and implement interfaces makes this pattern easy to apply.

#### *Implementation in Java:*
- Create a `Proxy` class that implements the same interface as the real object.
- The `Proxy` class holds a reference to the real object and delegates calls, adding additional behavior as needed.
- Java’s `java.lang.reflect.Proxy` and `InvocationHandler` can be used for creating dynamic proxies.

---

### **Key Differences and Relations Within the Category:**
- **Adapter** focuses on interface compatibility, while **Bridge** separates abstraction and implementation.
- **Composite** works well with **Decorator** to add dynamic behavior to hierarchical structures.
- **Flyweight** optimizes memory, often complementing **Proxy** to manage resource-intensive operations.
- **Facade** simplifies subsystem access, whereas **Adapter** ensures compatibility between mismatched interfaces.

---

### **How These Patterns Leverage Java Features:**
1. **Interfaces and Abstract Classes:**  
   Facilitate implementation of Adapter, Bridge, Composite, and Proxy patterns.

2. **Generics and Collections:**  
   Simplify management of hierarchies in Composite and shared states in Flyweight.

3. **Reflection:**  
   Enables dynamic proxy creation using `java.lang.reflect.Proxy`.

4. **Dependency Injection:**  
   Facilitates Bridge and Decorator patterns by injecting implementations dynamically.

5. **Java API Support:**  
   Java’s libraries, such as `Collections` and `Stream`, naturally align with Composite and Flyweight patterns.

---

By mastering these structural patterns in Java, developers can design systems that are modular, scalable, and easier to maintain. Java’s robust type system, extensive standard libraries, and modern development practices make it an ideal language for effectively applying these patterns.



[TheRayCode.ORG](https://www.TheRayCode.org)

[RayAndrade.COM](https://www.RayAndrade.com)

[Facebook](https://www.facebook.com/TheRayCode/) | [X @TheRayCode](https://www.x.com/TheRayCode/) | [YouTube](https://www.youtube.com/TheRayCode/)
