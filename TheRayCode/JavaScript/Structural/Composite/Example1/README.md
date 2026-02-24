[top](../README.md)

Let’s do the **Composite Pattern** exactly as the *Gang of Four* describe on pages 158–159 (with class names from the UML participants on p.163, which is consistent with their diagram on p.159).

✅ Participants:

* **Component** (abstract class/interface)
* **Leaf** (represents individual objects)
* **Composite** (represents groups of Components)
* **Client** (uses the Components uniformly)

---

**I will:**

* explain each class outside the code
* place code inside triple backticks with line-by-line comments
* match the GoF naming style
* organize each class in its own JS file
* finish with an `index.js` as a working demo
* make it 100% ready for WebStorm on Ubuntu

---

# 🧩 Class-by-Class Explanation

---

## 🧩 `Component.js`

**Purpose**
The abstract interface for all objects in the composition. It declares the methods that all Components must implement (both `Leaf` and `Composite`).

```javascript
// Component.js

// Component: defines the interface for all objects in the composition
class Component {
    // operation method to be implemented by Leaf or Composite
    operation() {
        throw new Error("operation() must be implemented.");
    }

    // default add child (for Composite)
    add(component) {
        throw new Error("add() not supported by default.");
    }

    // default remove child (for Composite)
    remove(component) {
        throw new Error("remove() not supported by default.");
    }

    // default get child (for Composite)
    getChild(index) {
        throw new Error("getChild() not supported by default.");
    }
}

module.exports = Component;
```

---

## 🍃 `Leaf.js`

**Purpose**
Represents a leaf object — no children, it implements `operation` but does not implement `add`, `remove`, or `getChild`.

```javascript
// Leaf.js

const Component = require('./Component');

// Leaf: represents individual objects, no children
class Leaf extends Component {
    constructor(name) {
        super();
        this.name = name; // store the name of the leaf
    }

    operation() {
        return `Leaf: ${this.name}`; // returns its name
    }
}

module.exports = Leaf;
```

---

## 🌳 `Composite.js`

**Purpose**
A Composite stores children and implements the `Component` interface. It delegates `operation()` to its children, so you can treat groups and leaves uniformly.

```javascript
// Composite.js

const Component = require('./Component');

// Composite: can have children Components, and treats them uniformly
class Composite extends Component {
    constructor(name) {
        super();
        this.name = name; // name for the composite
        this.children = []; // holds children
    }

    add(component) {
        this.children.push(component); // add a child component
    }

    remove(component) {
        const index = this.children.indexOf(component);
        if (index !== -1) {
            this.children.splice(index, 1); // remove the child
        }
    }

    getChild(index) {
        return this.children[index]; // return child by index
    }

    operation() {
        // call operation on each child
        const results = this.children.map(child => child.operation());
        return `Composite(${this.name}) [ ${results.join(" | ")} ]`;
    }
}

module.exports = Composite;
```

---

## 👤 `Client.js`

**Purpose**
Uses the Component interface to interact with both `Leaf` and `Composite` objects. It shows how the client sees the entire structure in a uniform way.

```javascript
// Client.js

// Client uses Components without knowing if they're Leaves or Composites
class Client {
    static execute(component) {
        console.log(component.operation());
    }
}

module.exports = Client;
```

---

## 🚀 `index.js`

**Purpose**
Demo showing how to build a tree structure with a Composite and Leafs, then execute operations on it.

```javascript
// index.js

const Composite = require('./Composite');
const Leaf = require('./Leaf');
const Client = require('./Client');

// Create a tree structure
const root = new Composite("root");

// Add some leaves to root
const leaf1 = new Leaf("A");
const leaf2 = new Leaf("B");

root.add(leaf1);
root.add(leaf2);

// Add a composite child with its own leaves
const branch = new Composite("branch");
branch.add(new Leaf("C1"));
branch.add(new Leaf("C2"));

// Add branch to root
root.add(branch);

// run the client
Client.execute(root);
```

---

# ✅ Expected Output

```bash
Composite(root) [ Leaf: A | Leaf: B | Composite(branch) [ Leaf: C1 | Leaf: C2 ] ]
```

---

# 📚 References

* *Design Patterns: Elements of Reusable Object-Oriented Software* (GoF)
* Chapter: Composite Pattern, pages 158–163
* Participants:

  * **Component**
  * **Leaf**
  * **Composite**
  * **Client**

---

# 🧠 Teaching Notes

✅ Emphasize that **Composite** objects can hold children while **Leaf** objects cannot
✅ The **Client** uses only the `Component` interface, which provides true transparency
✅ Try extending the `operation()` to draw a file tree or a DOM tree in future exercises


