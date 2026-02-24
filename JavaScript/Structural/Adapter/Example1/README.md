[top](../README.md)

# 🔌 Adapter Design Pattern in JavaScript

This project demonstrates the **Adapter Design Pattern**, modeled after the GoF class diagram on pages 139–142 of *Design Patterns: Elements of Reusable Object-Oriented Software* (Gamma et al).  

The Adapter pattern allows two incompatible interfaces to work together by wrapping an existing class (the **Adaptee**) and presenting it under the interface the client expects (the **Target**).  

---

## 🧩 Class Overview

| **Participant** | **Class**      | **Description** |
|-----------------|----------------|-----------------|
| Target          | `Target.js`    | Defines the domain-specific interface the client expects |
| Adaptee         | `Adaptee.js`   | Has an existing interface that is incompatible with Target |
| Adapter         | `Adapter.js`   | Adapts the Adaptee interface to the Target interface |
| Client          | `Client.js`    | Works with objects through the Target interface |

---

## 📂 File Structure

```

AdapterExample/
├── Adaptee.js
├── Adapter.js
├── Client.js
├── Target.js
└── index.js

````

---

# 🧩 Class-by-Class Explanation

---

## 🎯 Target.js

**Purpose**  
The interface expected by the client. Any class used by the client must implement this interface.

```javascript
// Target.js
class Target {
    // The method that the client expects to call
    request() {
        throw new Error("request() must be implemented by subclasses");
    }
}
module.exports = Target;
````

---

## ⚙️ Adaptee.js

**Purpose**
An existing class with a useful behavior, but an interface that the client cannot directly use. The Adapter will transform this class's interface to match `Target`.

```javascript
// Adaptee.js
class Adaptee {
    specificRequest() {
        return "Adaptee: specificRequest()";
    }
}
module.exports = Adaptee;
```

---

## 🔌 Adapter.js

**Purpose**
Bridges the `Adaptee` and the `Target` interface, translating the `request()` expected by the client into a call to `specificRequest()` on the adaptee.

```javascript
// Adapter.js
const Target = require('./Target');
const Adaptee = require('./Adaptee');

class Adapter extends Target {
    constructor() {
        super();
        this.adaptee = new Adaptee(); // composition to hold the adaptee
    }

    // Implements Target's request() but translates to adaptee.specificRequest()
    request() {
        return `Adapter: (translated) ${this.adaptee.specificRequest()}`;
    }
}

module.exports = Adapter;
```

---

## 👤 Client.js

**Purpose**
Uses only the `Target` interface. The client does not know whether it is dealing with a true `Target` or an `Adapter`. This demonstrates how the Adapter is transparent to the client.

```javascript
// Client.js
class Client {
    static execute(target) {
        console.log(target.request());
    }
}
module.exports = Client;
```

---

## 🚀 index.js

**Purpose**
Demonstrates how the `Adapter` is used so the client can seamlessly work with an adaptee through the expected interface.

```javascript
// index.js
const Adapter = require('./Adapter');
const Client = require('./Client');

const adapter = new Adapter();
Client.execute(adapter);  // works through the Target interface
```

---

# ✅ How to Run

1. Save all the files in the same folder
2. From a terminal:

```bash
node index.js
```

✅ You should see:

```bash
Adapter: (translated) Adaptee: specificRequest()
```

---

## 🧠 How it Works

* **Client** expects to call `request()` on a `Target`.
* **Adaptee** has `specificRequest()`, which is incompatible.
* **Adapter** implements `request()` and internally calls `specificRequest()` on an adaptee instance.
* The **client** remains blissfully unaware that the Adapter is actually talking to the Adaptee behind the scenes.

---

## 📚 References

* *Design Patterns: Elements of Reusable Object-Oriented Software* (Gamma, Helm, Johnson, Vlissides)

  * Chapter: Adapter Pattern, pages 139–142
* Class participants:

  * **Target**
  * **Adaptee**
  * **Adapter**
  * **Client**

---

## 👨‍🏫 Teaching Tips

✅ Ask students to modify `Adaptee` to include more complex functionality and see how the Adapter must change
✅ Try implementing a **class adapter** using `extends Adaptee` (as in C++ inheritance) to contrast with this object adapter
✅ Have students adapt a real-world library (for example, a REST API client with a new interface)


