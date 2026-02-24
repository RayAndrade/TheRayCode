
# 🏭 Factory Method Pattern — JavaScript (GoF Page 104)

This project demonstrates the **Factory Method Pattern** from the classic *Design Patterns: Elements of Reusable Object-Oriented Software* (GoF), page 104, implemented in **modern JavaScript** using ES Modules.

---

## 📁 Folder Structure

```

FactoryMethod/
├── Product.js
├── ConcreteProduct.js
├── Creator.js
├── ConcreteCreator.js
└── index.js

````

> Ensure your `package.json` includes:  
> ```json
> { "type": "module" }
> ```

---

## 📄 Product.js

```javascript
// Product.js
// Purpose: Abstract interface (base class) for all Products

class Product {
    operation() {
        // Abstract method that concrete products must implement
        throw new Error("Abstract method 'operation' must be implemented by subclass.");
    }
}

export default Product;
````

---

## 📄 ConcreteProduct.js

```javascript
// ConcreteProduct.js
// Purpose: Concrete implementation of Product interface

import Product from './Product.js';

class ConcreteProduct extends Product {
    operation() {
        // Returns a string to simulate product behavior
        return "Result from ConcreteProduct";
    }
}

export default ConcreteProduct;
```

---

## 📄 Creator.js

```javascript
// Creator.js
// Purpose: Abstract Creator that declares the factoryMethod() and a template method

class Creator {
    factoryMethod() {
        // Abstract method meant to be overridden by subclasses
        throw new Error("Abstract method 'factoryMethod' must be implemented by subclass.");
    }

    someOperation() {
        // Calls the factory method to create a Product
        const product = this.factoryMethod();

        // Works with the Product object
        return `Creator: Working with ${product.operation()}`;
    }
}

export default Creator;
```

---

## 📄 ConcreteCreator.js

```javascript
// ConcreteCreator.js
// Purpose: Implements factoryMethod to return a specific ConcreteProduct

import Creator from './Creator.js';
import ConcreteProduct from './ConcreteProduct.js';

class ConcreteCreator extends Creator {
    factoryMethod() {
        // Returns a concrete implementation of Product
        return new ConcreteProduct();
    }
}

export default ConcreteCreator;
```

---

## 📄 index.js (Demo)

```javascript
// index.js
// Purpose: Demo entry point — executes the Factory Method in action

import ConcreteCreator from './ConcreteCreator.js';

// Create an instance of the concrete creator
const creator = new ConcreteCreator();

// Run the business logic that uses the factory method internally
const result = creator.someOperation();

// Output the result to the console
console.log(result);
// Expected output: "Creator: Working with Result from ConcreteProduct"
```

---

## ✅ How to Run

1. Open WebStorm or terminal.

2. Create the folder and files as described above.

3. Ensure `package.json` contains:

   ```json
   {
     "type": "module"
   }
   ```

4. Run the project with:

   ```bash
   node index.js
   ```

---

## 🧠 Pattern Recap

| Role                | File                 | Responsibility                                        |
| ------------------- | -------------------- | ----------------------------------------------------- |
| **Product**         | `Product.js`         | Declares the interface                                |
| **ConcreteProduct** | `ConcreteProduct.js` | Implements `Product`                                  |
| **Creator**         | `Creator.js`         | Declares `factoryMethod()` and defines template logic |
| **ConcreteCreator** | `ConcreteCreator.js` | Implements `factoryMethod()`                          |
| **Client**          | `index.js`           | Triggers and tests the pattern                        |

---

## 🎓 Learning Objectives

* Understand **abstraction through factory methods**
* See how **inheritance and polymorphism** decouple creation from usage
* Learn to use **ES Modules** (`import/export`) in real-world projects
* Reinforce **Open/Closed Principle** and **Single Responsibility Principle**

---

Let me know if you want to:

* Add **multiple products** (e.g., `ConcreteProductA`, `ConcreteProductB`)
* Convert to **browser-based UI**
* Expand this into a **Factory Method + Abstract Factory combo**

Happy pattern crafting! 🎨🧱

```
