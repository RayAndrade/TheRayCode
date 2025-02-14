Sure! Here’s the **Java implementation** of the **Singleton Design Pattern** along with a **PlainClass** to demonstrate the difference in object creation.

---

## 📁 **File Structure**
```
/ProjectFolder
│── Singleton.java
│── PlainClass.java
│── Main.java (Main file)
```

---

## **1. `Singleton.java` (Singleton Class)**
```java
public class Singleton {
    // Private static instance - holds the single instance of the class
    private static volatile Singleton instance; // Use volatile for thread safety

    // Private constructor to prevent direct instantiation
    private Singleton() {
        System.out.println("Singleton instance created.");
    }

    // Public static method to get the single instance
    public static Singleton getInstance() {
        if (instance == null) { // First check (without lock)
            synchronized (Singleton.class) { // Ensure thread safety
                if (instance == null) { // Second check (inside synchronized)
                    instance = new Singleton();
                }
            }
        }
        return instance;
    }

    // Example method to demonstrate functionality
    public void showMessage() {
        System.out.println("Hello from Singleton!");
    }
}
```

---

## **2. `PlainClass.java` (Regular Class)**
```java
public class PlainClass {
    // Constructor
    public PlainClass() {
        System.out.println("PlainClass instance created.");
    }

    // Example method
    public void showMessage() {
        System.out.println("Hello from PlainClass!");
    }
}
```

---

## **3. `Main.java` (Main Program)**
```java
public class Main {
    public static void main(String[] args) {
        // Get the first instance of Singleton
        Singleton singleton1 = Singleton.getInstance();
        singleton1.showMessage();

        // Get another instance of Singleton
        Singleton singleton2 = Singleton.getInstance();

        // Verify that both Singleton instances are the same
        if (singleton1 == singleton2) {
            System.out.println("Both Singleton instances are the SAME object.");
        } else {
            System.out.println("ERROR: Singleton instances are different! (This should not happen)");
        }

        System.out.println("\n--- Creating PlainClass instances ---");

        // Create two separate instances of PlainClass
        PlainClass plain1 = new PlainClass();
        PlainClass plain2 = new PlainClass();

        // Verify that they are different objects
        if (plain1 == plain2) {
            System.out.println("ERROR: PlainClass instances are the same! (This should not happen)");
        } else {
            System.out.println("PlainClass instances are DIFFERENT objects.");
        }
    }
}
```

---

## **🛠 How It Works**
1. **Singleton Class (`Singleton.java`)**:
   - Uses **lazy initialization**.
   - Implements **double-checked locking** for **thread safety**.
   - The **constructor is private** to prevent direct instantiation.
   - The `getInstance()` method ensures **only one instance** is created.

2. **PlainClass (`PlainClass.java`)**:
   - A normal class where each `new PlainClass()` creates **a new object**.

3. **Main Program (`Main.java`)**:
   - Calls `Singleton.getInstance()` twice to show that it returns **the same instance**.
   - Creates **two separate `PlainClass` objects** and verifies that they are **different**.

---

## **🎯 Expected Output**
```
Singleton instance created.
Hello from Singleton!
Both Singleton instances are the SAME object.

--- Creating PlainClass instances ---
PlainClass instance created.
PlainClass instance created.
PlainClass instances are DIFFERENT objects.
```

---

## **🔧 How to Compile and Run in Java**
1. **Compile the files**:
   ```sh
   javac Singleton.java PlainClass.java Main.java
   ```
2. **Run the program**:
   ```sh
   java Main
   ```

---

## **🎯 Key Takeaways**
✅ **Singleton enforces a single instance** using **lazy initialization & thread safety**.  
✅ **PlainClass allows multiple instances** using `new`.  
✅ **Proper file separation for better organization**.  

This Java version follows **best practices** for **performance and thread safety**. 🚀  
Let me know if you need any modifications! 😊
