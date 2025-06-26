<!-- I am teaching new college students how to use JavaScript with design patterns.
I need a  JavaScript  code example of the Builder design Pattern, a Creational Pattern.  Put each class in its own JavaScript file. 
Use the names for the classes the same as those that are used in the UML/Class Diagram that was given in the book Design Patterns Elements of Reusable OO Software on page 94. Comment on each line of code you will give. Explain the results of your demo. Place your demo in the index.js file and each class should have it's own *.js file to include in index.js I am using WebStorm on a linux ubuntu system 
Comment on each line of code and what is the purpose of each class or interface
Outside each class give its purpose and how it relates to the project
-->
# 🛠️ Builder Design Pattern in JavaScript (GoF Style, Page 94)

This project demonstrates the **Builder Design Pattern** in JavaScript, following the structure and class names from *Design Patterns: Elements of Reusable Object-Oriented Software* (GoF, p.94).

It builds a complex `Product` step by step using a `Director`, delegating construction to a `Builder`. All classes are in separate `.js` files and ready for use in WebStorm on Linux Ubuntu.

---

## 📁 File Structure

```

Builder.js
ConcreteBuilder.js
Product.js
Director.js
index.js

````

---

## 🧱 Classes and Roles

---

### 🧩 Builder.js

**Purpose**: Defines the **abstract interface** for constructing parts of a product and retrieving it.

```javascript
// Builder.js
class Builder {
    buildPartA() {
        throw new Error("buildPartA() must be implemented.");
    }

    buildPartB() {
        throw new Error("buildPartB() must be implemented.");
    }

    getResult() {
        throw new Error("getResult() must be implemented.");
    }
}
module.exports = Builder;
````
---

### 📦 Product.js

**Purpose**: Represents the complex object being built. Stores parts and knows how to display itself.

```javascript
// Product.js
class Product {
    constructor() {
        this.parts = [];               // Initialize parts list
    }

    add(part) {
        this.parts.push(part);         // Add a part to the list
    }

    show() {
        console.log("Product parts: " + this.parts.join(", "));
    }
}
module.exports = Product;
```

---


### 🛠️ ConcreteBuilder.js

**Purpose**: Implements the `Builder` interface, assembles a `Product`, and manages its parts.

```javascript
// ConcreteBuilder.js
const Builder = require('./Builder');
const Product = require('./Product');

class ConcreteBuilder extends Builder {
    constructor() {
        super();
        this.product = new Product();  // Initialize new Product
    }

    buildPartA() {
        this.product.add("PartA");     // Add Part A to product
    }

    buildPartB() {
        this.product.add("PartB");     // Add Part B to product
    }

    getResult() {
        return this.product;           // Return the full product
    }
}
module.exports = ConcreteBuilder;
```
---

### 🎯 Director.js

**Purpose**: Controls the building process. It doesn't know how parts are created, just orchestrates building steps.

```javascript
// Director.js
class Director {
    construct(builder) {
        builder.buildPartA();          // Build part A
        builder.buildPartB();          // Build part B
    }
}
module.exports = Director;
```

---

### 🚀 index.js

**Purpose**: Demonstrates how to use the Builder pattern to construct a `Product`.

```javascript
// index.js
const ConcreteBuilder = require('./ConcreteBuilder');
const Director = require('./Director');

// Create builder and director
const builder = new ConcreteBuilder();
const director = new Director();

// Director builds the product using the builder
director.construct(builder);

// Get the final product and show its parts
const product = builder.getResult();
product.show();  // → Product parts: PartA, PartB
```

---

## 🧪 Demo Output

```
Product parts: PartA, PartB
```

---

## ✅ How to Run

1. Save all `.js` files in one directory.
2. Run in terminal:

```bash
node index.js
```

---

## 📚 References

* *Design Patterns: Elements of Reusable Object-Oriented Software*, GoF — Page 94
* Pattern: **Builder** (Creational)

---

## 👨‍🏫 Teaching Tips

* Each part (`PartA`, `PartB`) is optional—builders can be extended to include more components.
* `Director` is flexible: it can use **different builders** to create variations of the product.
* In JavaScript, this pattern is handy for constructing complex object configurations (e.g., building HTML elements or configuring database queries).

---

Would you like this formatted as an actual `README.md` file or packaged in a zip with the source files?



