[up](../README.md)

Below is an implementation of the **Prototype Design Pattern** in Java, with all the files and classes separated as requested. I’ll follow the Gang of Four naming conventions and structure it so you can easily create and compile the project without dependency errors.

The **Prototype Pattern** is useful when creating objects directly (using `new`) is expensive or complex. Instead of instantiating new objects, you clone existing ones.

### **Story with Humor**:  
Imagine you’re a teacher creating copies of students for your class. Every time you create a new student, you must input all their details, like their **name**, **student ID**, and their **favorite joke**. That’s tedious! With the **Prototype Pattern**, you take a "template" student and just clone them. Now you can clone away—like a science fiction movie—but don’t let the cloned students start a rebellion!

---

## **Order of Class Creation**  
1. **Prototype.java** (The interface)  
2. **ConcretePrototype.java** (Concrete class that implements the interface)  
3. **Client.java** (A utility to use cloning)  
4. **Main.java** (Demo file to execute and test everything)

---

## **Code Files**:

---

### **1. Prototype.java**  
This is the interface that defines the `clone` method.  

```java
public interface Prototype {
    Prototype clone();
}
```

- **Purpose**: Acts as a contract for all classes that can be cloned.  
- **Method**:
  - `clone()`: Returns a cloned object.  

---

### **2. ConcretePrototype.java**  
This is the concrete implementation of the `Prototype` interface.

```java
public class ConcretePrototype implements Prototype {
    private String name;
    private int id;
    private String favoriteJoke;

    // Constructor
    public ConcretePrototype(String name, int id, String favoriteJoke) {
        this.name = name;
        this.id = id;
        this.favoriteJoke = favoriteJoke;
    }

    // Clone method
    @Override
    public Prototype clone() {
        System.out.println("Cloning student: " + name + " (ID: " + id + ")");
        return new ConcretePrototype(this.name, this.id, this.favoriteJoke);
    }

    // Display method
    public void displayStudentDetails() {
        System.out.println("Student Details -> Name: " + name + ", ID: " + id + ", Joke: " + favoriteJoke);
    }

    // For comparison purposes
    public String getName() {
        return this.name;
    }
}
```

- **Attributes**:
  - `name`: Student's name.
  - `id`: Student ID.
  - `favoriteJoke`: A joke the student likes (humor).
- **Methods**:
  - `clone()`: Implements the cloning logic.
  - `displayStudentDetails()`: Displays student details.  

---

### **3. Client.java**  
This class tests cloning and creating objects.

```java
public class Client {
    public static void compareObjects(ConcretePrototype original, ConcretePrototype clone) {
        System.out.println("\nComparing original and cloned students...");
        if (original == clone) {
            System.out.println("These are the *same* objects! (What? Are you serious?)");
        } else {
            System.out.println("These are *different* objects. Phew!");
        }

        if (original.getName().equals(clone.getName())) {
            System.out.println("But their names are the same. Cloning works!");
        } else {
            System.out.println("Something went wrong in cloning. Time for debugging.");
        }
    }
}
```

- **Purpose**: A helper class to compare objects.
- **Method**:
  - `compareObjects()`: Compares the original object with its clone.

---

### **4. Main.java**  
This is the entry point where everything runs.

```java
public class Main {
    public static void main(String[] args) {
        System.out.println("Prototype Pattern Demo - Let's Clone Some Students!");

        // Create an original object
        ConcretePrototype originalStudent = new ConcretePrototype("John Doe", 123, "Why don't scientists trust atoms? Because they make up everything!");
        System.out.println("\nOriginal Student Created:");
        originalStudent.displayStudentDetails();

        // Clone the object
        ConcretePrototype clonedStudent = (ConcretePrototype) originalStudent.clone();

        System.out.println("\nCloned Student:");
        clonedStudent.displayStudentDetails();

        // Compare objects
        Client.compareObjects(originalStudent, clonedStudent);

        // Show what happens if we create a "new" student
        System.out.println("\nCreating a brand-new student (the manual way):");
        ConcretePrototype newStudent = new ConcretePrototype("Jane Smith", 456, "Why don't skeletons fight each other? They don't have the guts.");
        newStudent.displayStudentDetails();

        System.out.println("\nDemo Finished! Students cloned successfully. No rebellions yet!");
    }
}
```

- **Purpose**: Executes the program.
- **Steps**:
  - Creates a student (original object).
  - Clones the student.
  - Displays both students.
  - Compares the original and cloned objects.
  - Demonstrates creating a new student using `new`.

---

## **Order of Class Creation Recap**  
1. `Prototype.java` (interface).  
2. `ConcretePrototype.java` (class implementing `Prototype`).  
3. `Client.java` (utility class for comparisons).  
4. `Main.java` (main execution).  

---

## **What You See When You Run the Code**  

```
Prototype Pattern Demo - Let's Clone Some Students!

Original Student Created:
Student Details -> Name: John Doe, ID: 123, Joke: Why don't scientists trust atoms? Because they make up everything!

Cloning student: John Doe (ID: 123)

Cloned Student:
Student Details -> Name: John Doe, ID: 123, Joke: Why don't scientists trust atoms? Because they make up everything!

Comparing original and cloned students...
These are *different* objects. Phew!
But their names are the same. Cloning works!

Creating a brand-new student (the manual way):
Student Details -> Name: Jane Smith, ID: 456, Joke: Why don't skeletons fight each other? They don't have the guts.

Demo Finished! Students cloned successfully. No rebellions yet!
```

---

## **Comparison Between `new` and `clone`**  
| **Aspect**            | **Using `new`**                                  | **Using `clone`**                                |
|------------------------|-----------------------------------------------|-----------------------------------------------|
| **Object Creation**    | A completely new object with new attributes.  | A copy of an existing object.                 |
| **Performance**        | Slower for complex objects.                   | Faster for complex objects.                   |
| **Flexibility**        | Needs all attributes manually assigned.       | Automatically copies attributes from the prototype. |
| **Use Case**           | Simple or unique objects.                     | When object creation is expensive or repetitive. |

---

## **Final Note with Humor**  
Cloning students is fun—no more repetitive typing! Just beware: if the clones get smarter and start plotting, you might end up in a sci-fi movie. Until then, happy cloning! 👩‍💻👨‍💻
