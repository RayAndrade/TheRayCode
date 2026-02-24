
# 🧬 Prototype Pattern in JavaScript (GoF Style)

This project demonstrates the **Prototype Design Pattern** in JavaScript using the class structure and roles described in the **Gang of Four's Design Patterns** book (pages 117–119).

The **Prototype pattern** is used to avoid the cost of creating objects the standard way (with `new`) and instead clone existing instances. This example reflects the **UML and Participants** defined in the book and separates each class into its own module for clarity and maintainability.

---

## 🧩 Pattern Participants

| Role               | JavaScript Module         | Description |
|--------------------|---------------------------|-------------|
| Prototype          | `Prototype.js`            | Declares an interface for cloning itself |
| ConcretePrototype1 | `ConcretePrototype1.js`   | Implements the clone behavior |
| ConcretePrototype2 | `ConcretePrototype2.js`   | Another cloneable class |
| Client             | `Client.js`               | Uses the prototype's `clone()` method without knowing its type |

---

## 📁 File Structure

```

Prototype.js
ConcretePrototype1.js
ConcretePrototype2.js
Client.js
index.js

````

---

## 📜 Source Code

### `Prototype.js`

```javascript
// Defines the interface for cloning itself
class Prototype {
    clone() {
        throw new Error("clone() must be implemented by subclasses");
    }
}
module.exports = Prototype;
````

---

### `ConcretePrototype1.js`

```javascript
const Prototype = require('./Prototype');

// A concrete implementation of Prototype that supports cloning
class ConcretePrototype1 extends Prototype {
    constructor(name) {
        super();
        this.name = name;
    }

    // Returns a new instance with copied values
    clone() {
        return new ConcretePrototype1(this.name);
    }

    toString() {
        return `ConcretePrototype1 with name: ${this.name}`;
    }
}
module.exports = ConcretePrototype1;
```

---

### `ConcretePrototype2.js`

```javascript
const Prototype = require('./Prototype');

// Another concrete implementation of Prototype
class ConcretePrototype2 extends Prototype {
    constructor(id) {
        super();
        this.id = id;
    }

    clone() {
        return new ConcretePrototype2(this.id);
    }

    toString() {
        return `ConcretePrototype2 with id: ${this.id}`;
    }
}
module.exports = ConcretePrototype2;
```

---

### `Client.js`

```javascript
// Client uses prototypes and does not care about their concrete classes
class Client {
    constructor(prototype) {
        this.prototype = prototype;
    }

    // Delegates cloning to the prototype instance
    makeCopy() {
        return this.prototype.clone();
    }
}
module.exports = Client;
```

---

### `index.js`

```javascript
const ConcretePrototype1 = require('./ConcretePrototype1');
const ConcretePrototype2 = require('./ConcretePrototype2');
const Client = require('./Client');

// Create prototype instances
const prototype1 = new ConcretePrototype1("Original One");
const prototype2 = new ConcretePrototype2(42);

// Use Client to clone them
const client1 = new Client(prototype1);
const client2 = new Client(prototype2);

const clone1 = client1.makeCopy();
const clone2 = client2.makeCopy();

// Display results
console.log(prototype1.toString());
console.log(clone1.toString());

console.log(prototype2.toString());
console.log(clone2.toString());
```

---

## 🧪 Example Output

```bash
ConcretePrototype1 with name: Original One
ConcretePrototype1 with name: Original One
ConcretePrototype2 with id: 42
ConcretePrototype2 with id: 42
```

---

## ✅ How to Run

1. Place all files in the same directory.
2. Run the project using:

```bash
node index.js
```

---

## 📚 Reference

* Book: *Design Patterns: Elements of Reusable Object-Oriented Software* by Erich Gamma, et al.
* Pattern: Prototype (Chapter 3.5, Page 117)

---

## 👨‍🏫 Educational Use

This example is structured for learning and instruction. Each class mirrors the GoF's participant structure and is isolated for demonstration in lectures or labs.


