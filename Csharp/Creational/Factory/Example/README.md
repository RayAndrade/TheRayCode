Below is a **C#** implementation of the **Factory Method** design pattern (a **Creational** pattern), following the **Gang of Four (GoF)** structure. Each class is placed in a separate file and created in an order that avoids dependency errors.

---

### **Class Creation Order**
1. **Product (Abstract Product Interface)**
2. **ConcreteProduct (Concrete Implementations)**
3. **Creator (Abstract Factory Class)**
4. **ConcreteCreator (Factory Implementations)**
5. **Client Code (Program.cs)**

---

## **1. `IProduct.cs` (Abstract Product Interface)**

```csharp
namespace FactoryMethodPattern
{
    // Abstract Product Interface
    public interface IProduct
    {
        void Use();
    }
}
```

### **Explanation**
- Declares an interface `IProduct`, which all concrete products will implement.
- The method `Use()` will be defined by concrete classes.

---

## **2. `ConcreteProductA.cs` & `ConcreteProductB.cs` (Concrete Products)**

### **`ConcreteProductA.cs`**
```csharp
using System;

namespace FactoryMethodPattern
{
    // Concrete Product A
    public class ConcreteProductA : IProduct
    {
        public void Use()
        {
            Console.WriteLine("Using ConcreteProductA");
        }
    }
}
```

### **`ConcreteProductB.cs`**
```csharp
using System;

namespace FactoryMethodPattern
{
    // Concrete Product B
    public class ConcreteProductB : IProduct
    {
        public void Use()
        {
            Console.WriteLine("Using ConcreteProductB");
        }
    }
}
```

### **Explanation**
- **ConcreteProductA** and **ConcreteProductB** implement `IProduct`.
- Each class provides a specific implementation of the `Use()` method.

---

## **3. `Creator.cs` (Abstract Factory Class)**

```csharp
namespace FactoryMethodPattern
{
    // Abstract Creator
    public abstract class Creator
    {
        // Factory Method: Must be implemented by concrete creators
        public abstract IProduct FactoryMethod();
    }
}
```

### **Explanation**
- Declares the abstract `FactoryMethod()`, which returns an instance of `IProduct`.
- The **Factory Method Pattern** ensures concrete creators decide which product to instantiate.

---

## **4. `ConcreteCreatorA.cs` & `ConcreteCreatorB.cs` (Factory Implementations)**

### **`ConcreteCreatorA.cs`**
```csharp
namespace FactoryMethodPattern
{
    // Concrete Creator A
    public class ConcreteCreatorA : Creator
    {
        public override IProduct FactoryMethod()
        {
            return new ConcreteProductA();
        }
    }
}
```

### **`ConcreteCreatorB.cs`**
```csharp
namespace FactoryMethodPattern
{
    // Concrete Creator B
    public class ConcreteCreatorB : Creator
    {
        public override IProduct FactoryMethod()
        {
            return new ConcreteProductB();
        }
    }
}
```

### **Explanation**
- `ConcreteCreatorA` and `ConcreteCreatorB` override `FactoryMethod()`.
- They instantiate `ConcreteProductA` and `ConcreteProductB`, respectively.

---

## **5. `Program.cs` (Client Code)**
```csharp
using System;

namespace FactoryMethodPattern
{
    class Program
    {
        static void Main(string[] args)
        {
            // Create a factory for ProductA
            Creator creatorA = new ConcreteCreatorA();
            IProduct productA = creatorA.FactoryMethod();
            productA.Use(); // Output: Using ConcreteProductA

            // Create a factory for ProductB
            Creator creatorB = new ConcreteCreatorB();
            IProduct productB = creatorB.FactoryMethod();
            productB.Use(); // Output: Using ConcreteProductB
        }
    }
}
```

---

## **Final Explanation**
1. **`IProduct` (Abstract Product Interface)**
   - Defines the `Use()` method to be implemented by all concrete products.

2. **`ConcreteProductA` & `ConcreteProductB`**
   - Implement `IProduct` and provide concrete behavior.

3. **`Creator` (Abstract Factory)**
   - Defines the abstract `FactoryMethod()`.

4. **`ConcreteCreatorA` & `ConcreteCreatorB`**
   - Implement `FactoryMethod()` to create specific products.

5. **`Program.cs` (Client Code)**
   - Uses factories without depending on concrete classes.

---

## **Key Takeaways**
✅ **Encapsulation**: The client does not know which concrete product it gets.  
✅ **Scalability**: Easily add new products and factories.  
✅ **Decoupling**: The factory method isolates the creation logic.  

Would you like to extend this with **Factory Parameters** or **Singleton Factories**? 🚀
