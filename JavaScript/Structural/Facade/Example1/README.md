[up](../README.md)

Let’s look at the **Facade Pattern**, a structural pattern explained around pages 185–193 in the GoF book.

✅ Participants you typically see for Facade:

* **Facade**: provides a simplified interface to a subsystem
* **Subsystem classes** (multiple)
* **Client**: uses the Facade instead of dealing directly with subsystems

---

**As you asked**, I will:
✅ explain each class outside the code
✅ put code in fenced triple-backtick blocks
✅ comment each line
✅ put each class in its own JavaScript file
✅ provide an `index.js` that acts as a demo
✅ make it GitHub-friendly and ready for WebStorm on Linux

---

# 🧩 Class-by-Class Explanation

---

## 🧩 `SubsystemA.js`

**Purpose**
Represents a part of a complex subsystem. In a real application, this might be a library, a set of classes, or a module.

```javascript
// SubsystemA.js

// SubsystemA: a piece of a complex system
class SubsystemA {
    operationA() {
        return "SubsystemA: operationA executed";
    }
}

module.exports = SubsystemA;
```

---

## 🧩 `SubsystemB.js`

**Purpose**
Another class within the complex subsystem.

```javascript
// SubsystemB.js

// SubsystemB: another piece of a complex system
class SubsystemB {
    operationB() {
        return "SubsystemB: operationB executed";
    }
}

module.exports = SubsystemB;
```

---

## 🧩 `SubsystemC.js`

**Purpose**
Yet another subsystem class.

```javascript
// SubsystemC.js

// SubsystemC: a third piece of the system
class SubsystemC {
    operationC() {
        return "SubsystemC: operationC executed";
    }
}

module.exports = SubsystemC;
```

---

## 🏛️ `Facade.js`

**Purpose**
Simplifies the client’s use of the subsystems by aggregating their operations in a higher-level interface.

```javascript
// Facade.js

const SubsystemA = require('./SubsystemA');
const SubsystemB = require('./SubsystemB');
const SubsystemC = require('./SubsystemC');

// Facade: provides a simple interface to complex subsystems
class Facade {
    constructor() {
        // create and store subsystem objects
        this.subsystemA = new SubsystemA();
        this.subsystemB = new SubsystemB();
        this.subsystemC = new SubsystemC();
    }

    // Provide a simple high-level operation
    simpleOperation() {
        const resultA = this.subsystemA.operationA(); // call SubsystemA
        const resultB = this.subsystemB.operationB(); // call SubsystemB
        const resultC = this.subsystemC.operationC(); // call SubsystemC

        // combine results to present a simpler API
        return `Facade combines: [ ${resultA} | ${resultB} | ${resultC} ]`;
    }
}

module.exports = Facade;
```

---

## 👤 `Client.js`

**Purpose**
Uses only the Facade, ignoring the internal complexity of the subsystems.

```javascript
// Client.js

// Client only uses the Facade
class Client {
    static execute(facade) {
        console.log(facade.simpleOperation());
    }
}

module.exports = Client;
```

---

## 🚀 `index.js`

**Purpose**
Runs the demonstration of the Facade pattern.

```javascript
// index.js

const Facade = require('./Facade');
const Client = require('./Client');

// create the facade
const facade = new Facade();

// run the client
Client.execute(facade);
```

---

# ✅ Expected Output

```bash
Facade combines: [ SubsystemA: operationA executed | SubsystemB: operationB executed | SubsystemC: operationC executed ]
```

---

# 📚 References

* *Design Patterns: Elements of Reusable Object-Oriented Software* (Gamma et al)
* Facade Pattern, pages 185–193
* Participants:

  * **Facade**
  * **Subsystem classes**
  * **Client**

---

# 🧠 Teaching Notes

✅ Emphasize that Facade is about **simplifying**
✅ Subsystems remain accessible if needed, but clients *should* use the Facade
✅ Try extending this with more operations or a second Facade

---

If you’d like, I can show a **real-world** Facade example, for example wrapping a network API with simplified methods — just let me know! 🚀

