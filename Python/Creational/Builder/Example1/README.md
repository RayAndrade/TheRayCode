
[top](../README.md)

Following your established TRC style, I'll keep the **GoF participant names** where appropriate:

* Builder
* ConcreteBuilder
* Director
* Product
* Client

I'll also keep your preference:

* Each class in its own file
* Explain each class before code
* Comment every line
* Python-specific implementation
* Beginner/student friendly

---

# File: Product.py

## Class Function: Product

The `Product` class represents the complex object that will be constructed by the Builder pattern. It stores all parts that are assembled during the building process and provides a method to display the completed result.

```python
class Product:                                    # Define Product class

    def __init__(self):                           # Constructor method
        
        self.parts = []                           # Create empty list to hold product parts


    def add(self, part):                          # Method to add a part to product
        
        self.parts.append(part)                   # Add new part into list


    def show(self):                               # Display completed product
        
        print("Product contains:")                # Print heading
        
        for part in self.parts:                   # Loop through all parts
            
            print(f"- {part}")                    # Print current part
```

---

# File: Builder.py

## Class Function: Builder

The `Builder` class declares the interface that defines all construction steps required to build a Product. Concrete builders will implement these methods.

```python
from abc import ABC, abstractmethod               # Import abstract class support


class Builder(ABC):                               # Create abstract Builder class


    @abstractmethod                               # Require subclass implementation
    def buildPartA(self):
        pass                                      # Placeholder


    @abstractmethod                               # Require subclass implementation
    def buildPartB(self):
        pass                                      # Placeholder


    @abstractmethod                               # Require subclass implementation
    def getResult(self):
        pass                                      # Placeholder
```

---

# File: ConcreteBuilder.py

## Class Function: ConcreteBuilder

The `ConcreteBuilder` class implements the Builder interface and performs the actual object construction process. It creates and assembles Product components.

```python
from Builder import Builder                       # Import Builder interface

from Product import Product                       # Import Product class


class ConcreteBuilder(Builder):                   # Inherit from Builder


    def __init__(self):                           # Constructor method
        
        self.product = Product()                  # Create Product object


    def buildPartA(self):                         # Build first part
        
        self.product.add("CPU")                   # Add CPU component


    def buildPartB(self):                         # Build second part
        
        self.product.add("Memory")                # Add Memory component


    def getResult(self):                          # Return completed object
        
        return self.product                       # Return final Product
```

---

# File: Director.py

## Class Function: Director

The `Director` class controls the sequence of construction steps. It uses the Builder interface and does not depend on concrete implementations.

```python
class Director:                                   # Define Director class


    def __init__(self, builder):                  # Constructor receives Builder
        
        self.builder = builder                    # Store Builder reference


    def construct(self):                          # Define construction process
        
        self.builder.buildPartA()                 # Build first component
        
        self.builder.buildPartB()                 # Build second component
```

---

# File: Client.py

## Class Function: Client

The `Client` class creates Builder objects and requests object construction through the Director. The Client only works with Builder interfaces.

```python
from ConcreteBuilder import ConcreteBuilder       # Import ConcreteBuilder

from Director import Director                     # Import Director


builder = ConcreteBuilder()                       # Create ConcreteBuilder

director = Director(builder)                      # Create Director object

director.construct()                              # Begin construction process

product = builder.getResult()                     # Retrieve completed Product

product.show()                                    # Display completed Product
```

---

# Expected Output

```txt
Product contains:
- CPU
- Memory
```

---

# Student Summary

**Product → Represents the completed object.**

**Builder → Defines object construction steps.**

**ConcreteBuilder → Performs actual construction work.**

**Director → Controls the construction sequence.**

**Client → Requests the object creation process.**

This follows your GoF participant naming and your line-by-line comment style for slide creation.
